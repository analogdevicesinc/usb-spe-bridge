# Contributing

This project follows the [GitHub contribution guidelines.](https://docs.github.com/en/get-started/exploring-projects-on-github/contributing-to-a-project)
Anyone interested in this application is welcome to contribute.

## Branching Guidelines

When creating branches, please use the following prefixes to distinguish the
intent
 - _feature_ - Adds a new feature or capability to the project
 - _bugfix_ - Fixes a bug or other deficiency
 - _doc_ - Updates documentation or other user facing artifacts
 - _chore_ - A catch all for everything else thats not code or document related.

## PR and Commit Guidelines

Please follow the [pull_request_template.md](../.github/pull_request_template.md)
for creating pull requests.

## Code Style Guidelines

The code style for this project is managed by the Uncrustify utility, leveraging
the Linux style configuration with a couple modifications:
 - Indentation is 4 spaces, not tabs.
 - All if/while/for/etc blocks will use braces ({}) even if they are only 1 line.

All .c and .h files should meet the provided [uncrustify configuration](../uncrustify.cfg)
with the exception of:
 - Any files provided as a git sub-module
 - Any files copied in from external sources. Currently these are:
    - adi_oaspi.c
    - adi_oaspi.h
 - webserver_fsdata.c, or any other C or H file containing primarily binary data.

For Windows users, uncrustify can be downloaded from the [Releases page](https://github.com/uncrustify/uncrustify/releases/tag/uncrustify-0.81.0)
of the Github project. For Linux users, the tool can be built from source. The
Uncrustify version currently being used is 0.81.0.

### Checking for Style Compliance

To check for style compliance, Uncrustify can be run with the --check flag. This
will not update any files, just indicate if any do not pass the configuration.

For example:
`/c/Tools/uncrustify-0.81.0_f-win64/bin/uncrustify.exe -c uncrustify.cfg --check src/*.h`
provides an output similar to the following, indicating a failed file.

```
do_source_file: Parsing: src/ADT7422.h as language C-Header
PASS: src/ADT7422.h (1074 bytes)
do_source_file: Parsing: src/Application.h as language C-Header
PASS: src/Application.h (489 bytes)
do_source_file: Parsing: src/FreeRTOSConfig.h as language C-Header
PASS: src/FreeRTOSConfig.h (3932 bytes)
do_source_file: Parsing: src/NetPkt.h as language C-Header
PASS: src/NetPkt.h (2606 bytes)
do_source_file: Parsing: src/NetStats.h as language C-Header
PASS: src/NetStats.h (421 bytes)
do_source_file: Parsing: src/Platform.h as language C-Header
FAIL: src/Platform.h (File size changed from 1929 to 1927)
do_source_file: Parsing: src/TaskPriorities.h as language C-Header
PASS: src/TaskPriorities.h (744 bytes)
```

### Auto-formatting

To automatically format a file, use the following command.  The --no-backup
prevents Uncrustify from creating a backup of the original code. This is useful
when project is under version control (such as this one) to prevent creating
additional files, and the changes should easily be visible with version history.

For example:
`/c/Tools/uncrustify-0.81.0_f-win64/bin/uncrustify.exe -c uncrustify.cfg --check src/*.h`
provides the following output, with the files being corrected (as necessary) in place:
```
do_source_file: Parsing: src/ADT7422.h as language C-Header
do_source_file: Parsing: src/Application.h as language C-Header
do_source_file: Parsing: src/FreeRTOSConfig.h as language C-Header
do_source_file: Parsing: src/NetPkt.h as language C-Header
do_source_file: Parsing: src/NetStats.h as language C-Header
do_source_file: Parsing: src/Platform.h as language C-Header
do_source_file: Parsing: src/TaskPriorities.h as language C-Header
```

## Test Guidance

Hardware in the loop testing important part of the development process, and
the responsibility for testing features and bug fixes as completely as possible
falls on the developer. The following are recommendations for test strategies
based on the area of the project that was touched. Each contribution will
have its own testing needs.

 - Low level drivers / OASPI - For code that interfaces directly with the MACPHY
   devices, USB ports or other data interfaces, it is recommend to test all
   interfaces which rely on that communication interface using a stress test.
   IPerf is highly recommended to maximize the through put of the network
   interfaces (and therefor low level interfaces).
 - Adding application features - When possible, run the application on all
   supported platforms to ensure there is not a hardware specific dependency.
 - MACPHY Drivers (AD3306/ADIN1110) - When modifying the register settings for
   the MACPHY devices, run all related example applications to ensure the changes
   did not have an impact on a configuration need.
 - Adding tasks/features - In addition to testing the newly added capabilities,
   compile the project without optimization (-O0), and verify sufficient FreeRTOS
   heap resources and stack space is provided for the project. This can be
   monitored using the XRTOS monitor in CFS.