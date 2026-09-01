Porting Guide
=============

The intention of this code base is to be relatively portable for different
platforms using the SPE devices and the MAX32690 as the host.  There are some
assumptions that are made, like sticking with FreeRTOS.  It is probably
relatively easy to move to a different MAX32, but not without a little work.

The ``Platforms`` folder intends to hold *most* of the code needed for a specific
hardware platform.  PlatformCommon provides utility functions which should be
specific to all MAX32690s using this project, regardless of board.

Required Implementations
------------------------

Platform (General)
~~~~~~~~~~~~~~~~~~

The platform should create a PlatformSpecs.h file, which at a minimum needs to
define ``PLATFORM_NUM_I2CS``, ``PLATFORM_NUM_BUTTONS`` and ``PLATFORM_NUM_LEDS``.

Specific assignments of Buttons and LEDS are done with the following. The
``_INVALID`` definitions from Platform.h can be used if the following aren't on
the board:

  - ``PLATFORM_BOOT_BTN_NUM`` - Button to restart to the bootloader from application
  - ``PLATFORM_T1S_ACT_LED_NUM`` - T1S Activity LED
  - ``PLATFORM_USB_ACT_LED_NUM`` - USB Activity LED
  - ``PLATFORM_STATUS_LED_NUM`` - General status LED

In addition, a platform C file needs to implement the functions defined in
``Platform.h`` as the applications expect those to be defined.

Platform (AD3306)
~~~~~~~~~~~~~~~~~

For platforms which include an AD3306, the functions defined in ``AD3306_Platform.h``
need to be implemented.

Platform (ADIN1110)
~~~~~~~~~~~~~~~~~~~

For platforms which include an ADIN1110, the functions defined in
``ADIN1110_Platform.h`` need to be implemented.

Bootloader
----------

To add a new platform/board to the bootloader project, modify the board.h file
located in the /bootloader folder to specify the LED, UART, device names and
URL used in the mass storage device.

This assumes the standard double-tap reset functionality is applicable to the
new hardware. If additional bootloader features are needed, see the TinyUF2
documentation on the `Github Repo <https://github.com/adafruit/tinyuf2>`__.