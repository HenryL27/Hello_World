### HELLO WORLD ###
**in lots of languages**

Bash
------
simply run

    ./.bash_hello

This prints "Hello World! -- Bash --"

MIPS Assembly
-----
This is written using the MIPS32 assembly language, though 
I suspect it would be similar for most languages of this sort.
To run it I use a piece of software called spim which simulates
MIPS. You can install it with:

    sudo apt-get install spim

and then run the program with:

    spim -f assembly_hello.s

x86 NASM Assebmly
-----
This is one of the most common assembly languages for the Intel x86
type processors - what basically everyone uses. You can run it with:

    nasm -felf64 x86_hello.asm
    ld x86_hello.o
    ./a.out

The first command creates the .o file, the second command loads that
into an executable called a.out, and the last command executes it.

C
-----
C is one of the older and more important languages still out there.
Compile with this:

    gcc -o c_hello c_hello.c

to create an executable named c_hello that you run with:

    ./c_hello


C++
-----
C++ is basically C but a little newer and a little more powerful
Compile and run pretty much the same way:

    g++ -o cpp_hello cpp_hello.cc
    ./cpp_hello


C#
-----
C# is like C but it's more like Java. 'Twas made to be a competitor to
Java so that makes sense. Compiles and runs similarly to the other C's, 
but needs you to get software called Mono.

    mcs -out:cs_hello cs_hello.cs
    ./cs_hello


FORTRAN
-----
Fortran was one of the most popular languages from the late 70s to the 90s, 
though it is not so common nowadays. It works similar to the C's but you 
might need to install a compiler for this one too

    f95 -o fortran_hello fortran_hello.f95
    ./fortran_hello


GoLang
-----
Short for Google Language (because Google hasn't got any creativity), this is
a modern language meant to replace C. It might or might not, but it has been 
called by some "the new hotness." Anyway it is a little different from C in its
compiling and stuff, also it needs to be in a named package, so while Go is
powerful, the Hello world is a little larger

    go build go_hello.go
    ./go_hello


Haskell
-----
Mostly I just included this one because of the logo. Haskell is primarily
used for mathematics rather that large scale coding and it is kind of past
its prime and it's rather bulky

    ghc haskell_hello.hs
    ./haskell_hello

This compiler also generates a bunch of junk and there is probably an option
to make it not do that but I don't really care because I don't think I will
ever again use Haskell

HTML
-----
HTML stands for HyperText Markup Language and is the language of pretty much 
every website. But it is hard to run with a terminal because it is more of a 
display mechanism that a process mechanism (though, surprisingly, HTML is 
turing-complete). It turns out though, that you can run some browsers from 
the terminal. So you can open it in a browser with:

    firefox html_hello.html

or whatever browser you have installed. For WSL users, I advise aliasing 
firefox to the path the windows executable in your file system

Java
-----
Java is one of the most popular languages in the world - it and Python are the 
two that everyone starts out with, basically. Anyway, Java is a very powerful 
language that basically any machine should be able to run. It is also a compiled
language like the C's and stuff. The compiler is a little large but anyway --

    javac java_hello.java

This generates a file called "Hello.class". To run it:

    java Hello


Javascript
-----
JS is another of the most popular languages, but not because it is a good one.
HTML just likes it, so any code in web development has to be in JS or PHP, and
JS is a better than PHP. To run JS files, we need to use a software called Node:

    node js_hello.js


Pascal
-----
This is probably the oldest language included here. Compile and run like so:

    fpc pascal_hello.p
    ./pascal_hello

This also creates a pascal_hello.o that you might want to remove. Again, there
are probably options in the compiler for this but also I don't care because the 
language is 45 years old and I will never use it.

Perl
-----
Perl is a scripting language like Python and JS but people don't use it as much.
That means the hello world is really simple to write and to run:

    perl perl_hello.pl


Python
-----
Python is the other most popular language. Super easy:

    python py_hello.py


Ruby
-----
Ruby is another scripting language, often used in back-end web development with
the Ruby-on-Rails framework. Pretty easy too

    ruby ruby_hello.rb
    
