# MAX32690 USB-SPE Bridge

This project is a multi-platform networking bridge project which leverages the
MAX32690, TinyUSB, Single Pair Ethernet (ADIN1110, AD3306) to
create a multifunction and configurable reference design.

## EVAL-ADIN2111D1Z Port

This branch features a port of the Bridge project to the EVAL-ADIN2111D1Z evaluation
board featuring the MAX32690 and ADIN2111 2-Port T1L MACPHY.

The board is based on a MAX32690 and features the ADIN2111 (T1L 2 Port). The
board is designed without USB connectivity to the MAX32690 integrated USB
peripheral. This project assumes a board modification connecting the integrated
USB and disconnecting the FTDI, while also adding 3.3V to VDDB for USB support.

Alternatively, this project can be run on a MAX32690 EvKit and a standard
EVAL-ADIN2111EBZ Eval board using the following connections:

| MAX32690 EvKit | EVAL-ADIN2111EBZ | Signal |
| --- | --- | --- |
| P2.29 | P7.9 | SCLK |
| P2.28 | P7.5 | SDI |
| P2.27 | P7.7 | SDO |
| P2.26 | P7.3 | CS_N |
| P2.25 | P7.14 | INT_N |

### 2-Port Switch Operation
The ADIN2111 2 Port switch features advanced capabilities to perform MAC based
packet routing between combinations P1, P2 and the SPI Host.  For the purposes
of demonstration, the device is configured to be a wide open switch, meaning all
packets received on any port are forwarded to the other 2 ports.

> **NOTE** When transmitting packets from USB to T1L, the application is currently
limited to transmission on Port 1 only based on how the Vendor Flags are set in
the OASPI header.  Additional modifications may be done to duplicate transmission
to both ports, or other more advanced port determination.

## Supported Platforms
A unique hardware board/EvKit is considered a platform. Each platform has it's
own hardware implementation code to provide a level of abstraction for the app.

The following hardware platforms currently have support.
 - EVAL-ADIN1140D1Z
 - E2B to USB Board
 - EVAL-ADIN2111EBZ

# Documentation
 - [Users Guide](https://analogdevicesinc.github.io/usb-spe-bridge/usersguide.html)
 - [Build Guide](https://analogdevicesinc.github.io/usb-spe-bridge/buildguide.html)

## Contributing

Contributions to this project are welcome and encouraged. See
[CONTRIBUTING.md](CONTRIBUTING.md) for more information.
