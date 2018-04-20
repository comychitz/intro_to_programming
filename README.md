# introduction to programming
A brief introduction to computer programming.

# about this tutorial
This introduction to programming is for anybody interested in learning how to
code. I give a brief introduction to programming using C++ along with some basic
computer-related knowledge.

# table of contents
* [part one](#part-one)
  * [about this tutorial](#about-this-tutorial)
  * [what is programming?](#what-is-programming)
  * [an example program](#an-example-program)
    * [functions](#functions)
    * [the main function](#the-main-function)
    * [hello, world!](#hello-world)
    * [compilation and execution](#compilation-and-execution)
  * [variables and types](#variables-and-types)
  * [best practices](#best-practices)
    * [coding style](#coding-style)
    * [comments](#comments)
* [part two](#part-two)

# part one
## what is programming? <a name="what-is-programming"></a>
Before we talk about what programming is, we need to understand what a computer
is. Computers are programmable machines. In other words, they are machines that
follow a set of instructions to do *something*. That *something* can be as
simple as adding two numbers or as difficult as identifying objects within an
image. Computers come in all shapes and sizes, each having their own purpose and
responsibilities. The computers we use everyday are general purpose computers,
built to carry out everyday tasks such as writing documents, creating
presentations, accessing the internet, and so on. Our smartphones are tiny
computers too, used for many of the same reasons, but also for communicating 
with others via telephone calls or text messages.

There are three basic components that make a computer, the central processing
unit (CPU), memory, and input/output (I/O). The CPU is the brain of the
computer, it is responsible for executing the instructions (programs) we tell it
to perform. While it is executing these complex instructions, it needs to keep
track of what it is doing, and that's where memory comes into play. A computer
stores intermediate values (i.e. state) in memory to reference later, as needed.
There are different types of memory, which we will touch on later. Lastly, there
is I/O, which is how a computer interacts with the humans or other electronic
devices. We humans generate input to our computers via our mouse and keyboard,
which in turn causes output (ex. text on the screen). Computers also use I/O to
expand their functionality or interface with other electronic devices. For
example, an SD card from your camera can be inputted into your computer so that 
you can download and edit your pictures. 

Now, a computer doesn't understand English or Japanese or any human language, a
computer only understands 1s and 0s, or bits (bit = binary digit). When we write
computer programs we don't write a file that contains a bunch of bits, that
would be very tedious and time consuming. We instead write programs in a
programming language - a language that was constructed for the sole purpose of
communicating to a computer a set of instructions to perform. This allows humans
to create programs in an efficient manner, abstracting the low level details of
the computer from the programmer. There are hundreds, maybe thousands, of
programming languages in existence today. Some are easy to learn, some much more
difficult. Some are very general purpose while others have a single purpose. As
we have studied computers and made discoveries in this area, new programming
languages have been developed to exploit new methods and paradigms of
programming.

So what is programming? Progamming is simply the act of writing a set of
instructions for a computer to execute in an effort to perform a task or solve a
problem.

## an example program
Let's dive in and start writing a simple program. For the purposes of this
introduction we will be using the C++ programming language, a powerful,
general-purpose language widely used in practice today. 

### functions
A program is made of many tiny units we call functions. A program function is
conceptually the same as a mathematical function. Take `y = f(x)` as an example. 
The function `f` takes as input a value, `x`, and returns a different value, `y`. 
Let's take a look at an example function in C++.
```c++
int doubleValue(int x) 
{
  int y = x*2;
  return y;
}
```
The first line is declaring a function named `doubleValue`, which takes in an
integer value we're calling `x` and returns another integer value (`int` stands
for integer). As you can guess, this function's purpose is to double the value
given and return its result. The second line is an open curly bracket (`{`) used
to indicate the start of the function body. The body of the function is where we
perform all the *hard work*. Within the body we have lines of code, separated by
semi-colons (;), executing code to fulfill the functions purpose.  The third
line declares a new variable y, which is assigned the value of x multiplied by
2. The last statement of the body is typically a return statement, which outputs
(returns) the result of all of our *hard work*.  Finally, we have a close curly
bracket (`}`) indicating the end of the body, thus the end of this function.

### the main function
There is special function that is required in all C++ programs - the `main`
function. The `main` function is the first function that is executed when
running your program; you can think of it as the entry point to the program. We
will see usage of the main function in our first example program below. 

### hello, world! <a name="hello-world"></a>
In the programming universe, when introducing a language the typical first
exercise to write is the "hello, world!" program. In an effort to follow this
tradition, we will now breakdown a simple "hello, world!" program.
```c++
#include <iostream>

using namespace std;

int main()
{
  cout << "hello, world!" << endl;
  return 0;
}
```
Let's break this down line by line. The first line is what is known as an
include statement. An include statement's purpose is to allow usage of functions
in an already written program (or library) in the program you are writing. In
this particular case we are importing iostream, a piece of the C++ standard
library that provides input/output stream functionality.

For simplicity purposes we will skip the second line of code, `using namespace
std;`. Don't worry, we will come back to this later. 

The rest of this program should look somewhat familiar to you as it declares a
function, specifically, the main function. The main function returns an integer
and does not take any arguments as input. Within the function body we are
calling a utility in the `iostream` library, `cout`. The two less than operators
(`<<`) is referred to as the stream operator, which connects a stream of 
sequences together. In this example we are creating a sequence of the "hello,
world!" phrase, followed by a new line character (`endl`). 

When this program is run we will see the following on our screen:
```
hello, world!
```

### compilation and execution
C++, like many languages, is a compiled language. This means that before our
computer can execute our program it needs to be compiled using a compiler. The
act of compilation is simply translating the C++ code into what we call machine
code - a language that the computer can understand (remember, a computer only
understands bits, not C++ code). Each type of computer understands different
machine code instructions, thus depending on the target machine we want to run our
program on, the correct compiler must be used.

Let's try and compile our C++ "hello, world!" program. We will be using the GNU
GCC compiler (g++) to compile our program. To perform the compilation, we will
run the following command in our command line interface terminal. 
```
$ g++ hello_world.cpp -o hello_world
```
The `$` symbol is our command line prompt; it appears when the computer is ready
to accept a command to perform. As stated, the command we are running is `g++`,
the GNU C++ compiler. We specify the source code file with the code we wrote,
which is `hello_world.cpp`. `cpp` is the typical file extension for a C++ source
code file. `-o` stands for output, which is specifying an option to the `g++`
command that the resulting executable file will be called `hello_world`. After
pressing enter, the command prompt (`$`) will show up again, which means you've
officially compiled your first program, awesome!

If you list the contents of the directory, using the `ls` command, you will see
we now have two files - our source code file, and our executable file.
```
$ ls
hello_world
hello_world.cpp
```
You can run the executable by entering the following:
```
$ ./hello_world
hello, world!
```
Congratulations, you have officially executed your first computer program! Great
job! :D

<b>NOTE</b>: If you are using an Integrated Development Environment (IDE), such as
Microsoft Visual Studio, the above steps won't be needed as the IDE typically
will provide this functionality in an easy one-click button. So if you are using
an IDE, no need to worry about compiling your code via the command line
interface.

## variables and types
Programming in C++ primarily consists of creating variables and manipulating
them to get the desired end result or state. Each variable has a type associated
with it; for example, the variable `y` in our `doubleValue` function is of type
`int`. Each type has its own rules and functions that it supports.  The integer
type (`int`) supports the expected mathematical operations such as addition,
subtraction, multiplication and so on. It can only be operated on  using other
integer variables or values. The `int` type is a basic type that is included in
the C++ language by default. Types such as `int` are what we refer to as
*primitive types*.

One powerful tool that C++ offers is the ability to create custom types. For
example, if we need to create a `dog` type that has functions such as `bark`,
`eat`, `sleep`, etc. we are able to do that. In C++ this is achieved through the
creation of a `class`. We will dive more into classes later in this tutorial.

## best practices 
Let's quickly overview some best practices in programming.

### coding style
Even though it is quite early in your programming endeavors, it is well worth
quickly talking about coding style. In the C++ programming language there is no
restriction on how the code is organized in regards to white spaces. For
example, we could write our `doubleValue` function in the following ways:
```c++
int doubleValue(int x){int y = x*2;return y;}
```
or
```c++
int 
doubleValue
(int x)
{int y = 
x*2;
return y;}
```
These are both valid in the C++ language. However, as you can see, our first
implementation of `doubleValue` is much more readable. This is why style is
important, you always want to make sure your programs are easy to read, because
you never know who is going to be reading them. There is no restriction on
style, however, it is best to adhere to community guidelines and best practices.
My general style rules in programming are: 1) "above all, be consistent", 
2) "optimize for the reader, not the writer".

### comments
In C++, and in most programming languages, there is the ability to add notes in
the code to explain or annotate the code. These notes, which are referred to as
comments, are ignored by the compiler, but offer to the programmers the ability
to explain and document the code. 

There are two types of comments that C++ supports, in-line comments (`//`) and
block comments (`/* */`). In-line comments are comments that are meant to only
span across the same line, while block comments can span multiple lines; denoted
by the starting tag `/*` and ending where the next `*/` is found. 
Comments are very useful for documenting the code and usually encouraged for
documenting a function or a class' purpose. Let's look at what our `doubleValue`
function would look like if it were commented.
```c++
/*
 * Take an integer input and return its value doubled.
 * @param x input value to double
 * @return the result of doubling the input value
 */
int doubleValue(int x) 
{
  int y = x*2; // assign resulting variable before returning
  return y; 
}
```

This concludes part one of my introduction to programming. In this section we
have learned the basics of a C++ program, how to write, compile and execute our
code. Now let's really start to dig into the fun stuff! 


# part two
[TODO]

