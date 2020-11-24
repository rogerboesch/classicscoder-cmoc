# CMOC
## A 6809-generating cross-compiler for a subset of the C language

* [CMOC Home page](http://sarrazip.com/dev/cmoc.html), CMOC written by By Pierre Sarrazin
* [Original README file](README_ORIGINAL)


## License

See the file [COPYING](COPYING). Note that it does not apply to the files
under src/usim-0.91-cmoc.


## C-Wrapper for Vectrex
The initial version of the C-Wrapper library was written by Johan Van den Brande.
This version contains a small subset of the (most important) BIOS calls.
Most devs are using VIDE and gcc6809 as a toolchain, which results in more support for gcc6809 in general.

### Project goal
The goal is to create a full working C-Wrapper for CMOC:

* Use similar names as used in gcc6809 to simplify porting code
* 
Avoid higher level abstractions as inand make all bios calls available to developers using CMOC for Vectrex development.
I use CMOC under the hood in Classics Coder Vectrex edition