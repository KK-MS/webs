
# Basic MAKEFILE tutorial

Note:

One very important thing to note is that there is a tab before the gcc command in the makefile.
There must be a tab at the beginning of any command, and make will not be happy if it's not there.

Normally, you would compile this collection of code by executing the following command:

gcc -o hellomake hellomake.c hellofunc.c -I.


$ man make

  -f file, --file=file, --makefile=FILE

   Use file as a makefile.


