# uncart
3DS homebrew utility program to dump game cartridges to the SD card.

To build this, you will need to obtain a file called `sdmc.s` which implements the SDMC functionality as required by fatfs and place it in the `source/fatfs` folder. We are working towards an integrated, GPL-compatible solution, but currently that's the only way to build uncart. Sorry for the inconvenience.

Credits go to:
- archshift: code cleanups; general polishing of my PoC dumper
- Lioncash: code cleanups
- neobrain: getting the project started; on-the-fly decryption
- Normmatt: doing tons of reverse-engineering work; providing the core dumping code
- yuriks: compatibility enhancements
