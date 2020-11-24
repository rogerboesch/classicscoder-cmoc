# CMOC
## A 6809-generating cross-compiler for a subset of the C language

* [CMOC Home page](http://sarrazip.com/dev/cmoc.html), CMOC written by By Pierre Sarrazin
* [Original README file](README_ORIGINAL)


## License

See the file [COPYING](COPYING). Note that it does not apply to the files
under src/usim-0.91-cmoc.
All **changes and additions I made** are free to use, change and distribute without any limitations.


## C-Wrapper for Vectrex
The initial version of the C-Wrapper library was written by Johan Van den Brande.
This version contains a small subset of the (most important) BIOS calls.
Based on the fact that most devs are using [VIDE](http://vide.malban.de/) and [gcc6809](https://github.com/jmatzen/gcc6809) as a standard, results in much more support for gcc6809 in general.
I can also just highly recommend VIDE. Its by far the most best IDE for Vectrex development with an amazing set of feautures and a great support!

Github link [here](https://github.com/malbanGit/Vide)


### Project goal
The goal is to create a full working C Wrapper for Vectrex in CMOC:

* Use similar names as used in gcc6809 to simplify porting code
* Include same functionality as in controller.h (Joystick abstraction) directly in c-wrapper

### Classics Coder - Vectrex Edition
I use CMOC under the hood in [**Classics Coder - Vectrex Edition**]() and need therefore a more comprehensive C support for Vectrex development in CMOC.


### Thanks!
Many thanks for all the help, informations, provided c examples and documentations from the Vectrex community!

