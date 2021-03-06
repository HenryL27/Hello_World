### HELLO WORLD ###
**in lots of languages**

Ada
------
One of the older languages in here, a dynamically typed, compiled
language. Basically the python of the late 70s. Compile with

    gnatmake ada_hello.adm

This will generate a bunch of junk midstep files. You can put them 
in another directory with -D like so:
	
    gnatmake ada_hello.adm -D junk/

ALGOL
------
ALGOL is here mainly for historical significance. (It, like, introduced the concept of a 
code block. You know, like one of these {...}). It was very popular in the 60s, 
with ALGOL 60, but then ALGOL 68 came out and it seems like people tried to use 
it and hated it, but by then they had left 60, so they all went to FORTRAN. Or something
like that. So I could not find a compiler for ALGOL 60 online (not that I looked **super**
hard), so this is the widely dispreferred ALGOL 68 hello world, which is almost pythonic.
I ran this using the ALGOL 68 Genie compiler, which you can just download from the internet. 
(Not sure about macs). And then I just execute it with the .a68 file. Again, aliases help
for pointing.

Bash
------
simply run

    ./.bash_hello

This prints "Hello World! -- Bash --"

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

Clojure
------
Another functional language, but it's based on java, so there's more 
boilerplate. Installing this language was a little tricky - it looks 
like it is not so common for windows-ers to work with, so I am using 
the .jar stuff that is on their github:

	git clone https://github.com/clojure/clojure.git
	cd clojure
	mvn -Plocal -Dmaven.test.skip=true package

then run from Hello_World with

	java -jar clojure/clojure.jar clj_hello.clj

some .bash_aliases trickery can make this more efficient. And of course if
you're on a mac you should just be able to do a 'sudo apt-get install'
type command.

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

This compiler also generates a bunch of junk which you can put in a different place
like this

    ghc -odir junk -hidir junk haskell_hello.hs
    ./haskell_hello

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

Julia
------
This is probably the newest language in here. From their website, they seem to be trying to be a 
powerful but also syntactically simple language. Though to be fair, that is pretty much what any 
language should aim for. Anyway, you run it with

	julia julia_hello.jl

and since it is so new, 'julia' doesn't seem to be 'apt-get'-able. So you have to download direct from
their website.

LISP
------
One of the main functional languages out there. Actually it's a whole 
family. The program is basically a function call to a lambda that 
prints. Run with

	sbcl --script lisp_hello.lsp

MIPS Assembly
-----
This is written using the MIPS32 assembly language, though 
I suspect it would be similar for most languages of this sort.
To run it I use a piece of software called spim which simulates
MIPS. You can install it with:

    sudo apt-get install spim

and then run the program with:

    spim -f assembly_hello.s

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

Piet
------
This is an esoteric language named after Piet Mondrian, where programs are pictures. Basically,
the picture is divided into blocks (of a color), called 'Codels', and the interpreter basically 
travels from codel to codel - each codel represents the number of pixels in the codel, and the 
actual instructions are represented by the changes in hue and brightness between codels.
The main interpreter for this language is called npiet you can download it. To run, simply

	npiet piet_hello.ppm

There are a couple of other piet-labelled things in this repo: piet_hello-bad.ppm was my second 
attempt at programming hello world by hand (my first attempt never made it off of graph paper). And
piet_hello.txt is the text file that I transcribed my design for piet_hello-bad. Because writing 
ppm files is hard, but a little bit easier in notepad that vim. The actual piet_hello.ppm is not my
design - it came with the interpreter - so that's why it only says "hello world!" rather than 
"Hello World! --Piet--"

Python
-----
Python is the other most popular language. Super easy:

    python py_hello.py


Ruby
-----
Ruby is another scripting language, often used in back-end web development with
the Ruby-on-Rails framework. Pretty easy too

    ruby ruby_hello.rb
 
Rust
------
I don't really know what the deal is with Rust, but it seems to be a pretty popular
and rather modern compiled language. Anyway, here's the command:

	rustc rust_hello.rs
	./rust_hello
   
Smalltalk
------
This is one of the earlier object-oriented languages; according to Jim, one of the
inspirations of C++. Anyway, it's a pretty simple program and run:

	gst smalltalk_hello.st

and that's it.

x86 NASM Assebmly
-----
This is one of the most common assembly languages for the Intel x86
type processors - what basically everyone uses. You can run it with:

    nasm -felf64 x86_hello.asm
    ld x86_hello.o
    ./a.out

The first command creates the .o file, the second command loads that
into an executable called a.out, and the last command executes it.

Whitespace
------
Now here's a fun one. Basically, the deal with this is the only characters
in this language that matter are ' ', '\t', and '\n'. So it is really quite 
close to machine code (and yes, it was developed entirely as a joke). It has 
a stack and a heap, except that the stack is a literal stack. So what I have 
had to do is put the binary ascii representation of each letter on the stack,
(backwards), and then print them out one at a time.
Since it is a joke language, there was also some difficulty setting it up.
Basically, it is just a C program that someone wrote. So here's the setup deal:

	git clone https://github.com/rdebath/whitespace.git
	cd whitespace
	make

and then run whitespace code like so:

	whitespace/wsc ws_hello.ws

again, aliases make this easier if you intend to do any other Whitespace development.
