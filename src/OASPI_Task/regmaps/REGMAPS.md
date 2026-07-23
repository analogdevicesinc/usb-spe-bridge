# Overview

This document describes the register map header files used for the ADIN1140 10BASE-T1S MACPHY transceiver, how they are organized, and what each register group includes. The ADIN1140 register definitions are located in `src/OASPI_Task/regmaps/` and provide access to all device registers through the management interface defined by IEEE 802.3 Clause 45 and Open Alliance TC6.

## Register Addressing Scheme

The ADIN1140 uses IEEE 802.3 Clause 45 MDIO addressing with the following structure:

- **MMS (Memory Map Select)**: Also known as MMD address, selects memory pages within the device
- **Register Address**: 16-bit address within the selected MMD
- **Access Type**: Read/Write capabilities vary by register

The register files are located in src/OASPI_Task/regmaps:
```
src/OASPI_Task/regmaps/
├── adi_regmap_utils.h      # Common utility macros (BIT, GENMASK)
├── adi_macphy_reg.h        # MAC registers
├── adi_pmd_reg.h           # PMD registers
├── adi_phy_std_reg.h       # PHY standard registers
├── adi_phy_oa_reg.h        # PHY vendor-specific registers
├── adi_otp_reg.h           # OTP memory registers
├── adi_ao_reg.h            # Always-on domain registers
├── adi_io_hv_reg.h         # IO high-voltage domain registers
├── adi_io_lv_reg.h         # IO low-voltage domain registers
├── adi_mdio_reg.h          # MDIO protocol definitions
└── adi_mii_reg.h           # MII register definitions
```

## Register File Contents

| File | MMS | Addr Range | Purpose |
|------|-----|------------|---------|
| adi_macphy_reg.h | 0x0, 0x1 | 0x0000-0x01C2 | MAC control, status, filtering, statistics |
| adi_phy_oa_reg.h | 0x4 | 0x0000-0x003B | ADI vendor-specific PLCA extensions |
| adi_phy_std_reg.h | 0x0, 0x2, 0x3 | 0xFF00+ | IEEE 802.3 PHY standard registers |
| adi_ao_reg.h | 0xA | 0xB702-0xB703 | Always-on power management, wake |
| adi_pmd_reg.h | 0xA | 0xD200-0xD211 | PMD layer, PHY identification |
| adi_io_hv_reg.h | 0xA | 0xB105-0xB10F | HV IO, revision, bootloader status |
| adi_io_lv_reg.h | 0xA | 0xB200-0xB4F2 | LV IO, GPIO, peripherals, clocks |
| adi_otp_reg.h | 0xA | 0xB000-0xB007 | One-time programmable memory |
| adi_mdio_reg.h | - | - | MDIO protocol definitions (utility) |
| adi_mii_reg.h | - | - | MII register definitions (utility) |

### MMS/MMD Address Assignments

| MMS Value | Description | Register Files |
|-----------|-------------|----------------|
| 0x0 | MAC Control/Status | adi_macphy_reg.h |
| 0x1 | MAC Data Path | adi_macphy_reg.h |
| 0x2 | PHY PCS Layer | adi_phy_std_reg.h |
| 0x3 | PHY PMA/PMD Layer | adi_phy_std_reg.h |
| 0x4 | PHY Vendor Specific (Open Alliance) | adi_phy_oa_reg.h |
| 0xA | PMD, IO Domains, OTP | adi_pmd_reg.h, adi_ao_reg.h, adi_io_hv_reg.h, adi_io_lv_reg.h, adi_otp_reg.h |

## References

- ADIN1140 Technical Reference Manual (TRM)
- OPEN Alliance 10BASE-T1x MAC-PHY Serial Interface Specification (TC6)
- IEEE 802.3-2022 Ethernet Standard
