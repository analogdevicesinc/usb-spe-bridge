# T1L Bridge Application

This application is the basic USB to T1L bridge which allows PC access to a T1L
SPE network via a USB network port (USB-NCM).

## LED and Button Assignments
The following LEDs and buttons are currently used in the application. See the
platform/hardware specific README for reference designators for that board.

### LEDs
 - **T1L Activity** - This blinks on _inbound_ activity on the T1L link
 - **USB Network Activity** - This blinks on _inbound_ activity for the
USB network adapter
 - **Status** - Indicates the current system operating mode/status.
    - USB to T1L Bridge - Full Tx and Rx traffic over USB
    - USB Sniffer Mode - USB can only receive frames from T1L

### Buttons
 - **BOOT** - Press and hold for 3 seconds to enter the TinyUF2 Bootloader. This is
  the equivalent to double tapping the reset button to start the bootloader.
 - **USER** - Press and hold for 3 seconds to toggle between sniffer and bridge
  mode in realtime. This switch is not persistent between power cycles and provides
  a run-time option for configuring modes. There is a setting in `config` which
  sets the power up default.

## USB UART Control / Configuration
By default, the USB port provides both networking support as well as
a virtual comm port for command and control capabilities. Currently the comm
port provides 2 functions.  Type `help` at the comm port to display the
available commands.

### info
By entering `info` at the comm port system information is displayed including
the software version and build date, and runtime network configuration such as
MAC and PLCA information.

### stats
By entering `stats` at the comm port, a simple display of networking
statistics is provided.

### config
By entering `config` at the comm port, the configuration menu is loaded to allow
setting the various non-volatile configuration settings.  To adjust a
configuration setting, first type in the corresponding menu number and press
<enter>.  Then at the prompt, enter the new value and press <enter>.  If the
value was valid, the configuration item will be updated accordingly.

> **IMPORTANT**: The configuration values currently do not affect run-time
operation but are only read in and applied at startup.  The values are saved to
non-volatile storage automatically. Reset the board after all changes are made to
run the software with the new configuration settings.
