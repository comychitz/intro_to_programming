# introduction to programming
A brief introduction to computer programming.

# table of contents
* [about this tutorial](#about-this-tutorial)
  * [prerequisites](#prerequisites)
* [part one](#part-one)
  * [what is programming?](#what-is-programming)
  * [an example program](#an-example-program)
    * [functions](#functions)
    * [the main function](#the-main-function)
    * [hello, world!](#hello-world)
    * [compilation and execution](#compilation-and-execution)
  * [variables and types](#variables-and-types)
    * [common types](#common-types)
* [part two](#part-two)
  * [reading input](#reading-input)
  * [control statements](#control-statements)
    * [if](#if)
    * [comparison operators](#comparison-operators)
  * [loops and arrays](#loops-and-arrays)
    * [arrays](#arrays)
    * [for loop](#for-loop)
    * [nested loops](#nested-loops)
    * [while loop](#while-loop)
    * [infinite loop](#infinite-loop)
    * [break statement](#break-statement)
  * [exercises](#exercises-1-5)
* [part three](#part-three)
  * Under construction...
* [part four](#part-four)
  * Under construction...
* [part five](#part-five)
  * [best practices](#best-practices)
    * [coding style](#coding-style)
    * [naming](#naming)
    * [comments](#comments)


# about this tutorial
This introduction to programming is for anybody interested in learning how to
code. I give a brief introduction to programming to get you quickly writing 
and executing C++ code.

## prerequisites
There are none! All you need to successfully complete this training is a working
computer with a basic text editor and C++ compiler. Running a Linux (or Unix
based, such as MacOS) operating system is preferred (but not required). If you
have an Integrated Development Environment (IDE) you'd like to use instead, by
all means feel free to use. 

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
semi-colons (`;`), performing the tasks to fulfill the function's purpose.  The
third line declares a new variable y, which is assigned the value of `x`
multiplied by `2`. The last statement of the body is typically a return
statement, which outputs (returns) the result of all of our *hard work*.
Finally, we have a close curly bracket (`}`) indicating the end of the body,
thus the end of this function.

Now, when we want to use this function, or *call* this function, we can write 
the following:
```c++
int y = doubleValue(2);
```
In this line of code we have *called* the `doubleValue` function and assigned 
the return value (4, in this case) to an integer variable named `y`. We will
talk more about variables and *assignment* more in detail later.

### the main function
There is special function that is required in all C++ programs - the `main`
function. The `main` function is the first function that is executed when
running your program; you can think of it as the entry point to the program. 
The main function is never called in your program, that is because your
computer will call it when it runs your program.

### hello, world! <a name="hello-world"></a>
In the programming universe, when introducing a language the typical first
exercise to write is the "hello, world!" program. In an effort to follow this
tradition, we will now decipher a simple "hello, world!" program.
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
this particular case we are importing `iostream`, a piece of the C++ standard
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
program on the correct compiler must be used.

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
command that the resulting executable (or binary) file will be called 
`hello_world`. After pressing enter, the command prompt (`$`) will show up 
again, which means you've officially compiled your first program, awesome!

We can run the executable by entering the following:
```
$ ./hello_world
hello, world!
```

<b>NOTE</b>: If you are using an IDE, such as Microsoft Visual Studio, the above
steps won't be needed as the IDE typically will provide this functionality in an
easy one-click button. So if you are using an IDE, no need to worry about
compiling your code via the command line interface.

## variables and types
Programming in C++ primarily consists of creating variables and manipulating
them to achieve the desired end state or result. Each variable has a type
associated with it; for example, the variable `y` in our `doubleValue` function
is of type `int`. Each type has its own rules and functions that it supports.
The integer type (`int`) supports the expected mathematical operations such as
addition, subtraction, multiplication and so on. It can only be operated on
using other integer variables or values. The `int` type is a basic type that is
included in the C++ language by default. Types such as `int` are what we refer
to as *primitive types*.

One powerful tool that C++ offers is the ability to create custom types. For
example, if we need to create a `dog` type that has functions such as `bark`,
`eat`, `sleep`, etc., we are able to do that. In C++ this is achieved through 
the creation of a `class`. We will dive more into classes later in this 
tutorial.

### common types
The table below outlines some common types used in C++. It gives a brief
description, examples, and states the library it is defined in. Remember,
primitive types are part of the standard language and don't belong to any
supporting library. 

| Type | Library | Description | Example |
| --- | --- | --- | --- |
| bool | primitive | Boolean type ("true" or "false") | `bool b = true` |
| char | primitive | A single character | `char c = 'a';`|
| int | primitive | An integer value | `int x = 5;` |
| float | primitive | A floating point number | `double x = 1.234;` |
| string | `<string>` | A sequence of characters | `string c = "hello, world!";` |
| vector | `<vector>` | A sequence of a specific type | `vector<int> integers = {1, 4, 8, 9};` |

## scope
[TODO]

This concludes part one of my introduction to programming. In this section we
have learned the basics of a computer program, and how to write, compile and 
execute C++ code. Now let's really start to dig into the fun stuff! 

# part two
## reading input
Introducing input into our program is a common task in computer programming.
Remember, a basic component of a computer is I/O - we give our machine some
input and it generates some output. In more advanced programs this is typically
accomplished via a graphical user interface (GUI), but for more simple programs
the command line interface is used.

The function `cin`, which is part of the `iostream` library, is what we will be
using to introduce input to our programs. Think of `cin` as the opposite to
`cout`; instead of an *output* stream, it is an *input* stream. Below is an
example usage of `cin`. 
```c++
#include <iostream>

using namespace std;

int main()
{
  int x;

  cout << "Enter a number: ";
  cin >> x;

  cout << "You entered: " << x << endl;

  return 0;
}
```
This simple program asks the user to enter a value and prints to the user what
they entered. The line `cin >> x;` is the key to this program. During execution
of this program, it will pause at this line waiting for the user to enter an
integer followed by the `<return>` key. This act of pausing and waiting for an
event in programming is referred to as *blocking*.

Now let's compile and run this program.
```
$ g++ read_input.cpp -o read_input
$ ./read_input 
Enter a number:     
```
At this point, the program is *blocked* waiting for you to enter a number. So,
let's go ahead and input an integer and press the `<return>` key.
```
Enter a number: 5
You entered: 5
$
```
Once you hit the `<return>` key, the `cin` function will assign the value you
entered into the variable `x`. Then, using the `cout` function, we print what
was entered. 

## control statements
Control statements are a powerful tool in programming. These type of statements
allow a programmer to determine which portion of their code to execute during
execution. Typically control statements are used when we are reacting to input
or when reacting to a specific event. 

### if 
The `if` statement is the most common, and argueably the most powerful, control
statement in programming. This allows a programmer to say: *if* certain input
meets some criteria run this sequence of code, *else* run a different sequence
of code. The structure of an `if` statement is shown below.
```c++
if(/* some condition is met */)
{
  // do something...
}
```
Within the parentheses we enter a *predicate* statement. In programming, a
*predicate* statement is an expression that generates a boolean (true or false)
result. We will see some examples shortly.

Now, if we wanted to react differently when the condition is not met, we can
introduce an `else` clause to our if statement.
```c++
if(/* some condition is met */)
{
  // do something...
}
else
{
  // do something else...
}
```
Having an `else` clause is not necessary and only used when needed. However, you
cannot have an `else` clause without a preceding if. 

In the case that you have two (or more) specific conditions that can be met, you
can use an `else if` clause. 
```c++
if(/* some condition is met */)
{
  // do something...
}
else if(/* some other condition is met */)
{
  // do something different...
}
else
{
  // do something else...
}
```
Just like an `else` clause, you cannot have an `else if` clause without a
preceeding `if`. Moreover, when using `else if` clauses, you must make sure that
it doesn't succeed an `else` statement. In otherwords, `else` must always be
last.

### comparison operators
To test if some condition is met in our `if` statements we use comparison 
(relational) operators. For example, to check if an integer variable `x` equals
the value `5` we would write:
```c++
if(x == 5)
{
  /* do something special when x equals 5... */
}
```
The table below outlines the comparison operators:

| Name | Syntax | Example |
| --- | --- | --- |
| equal to | `==` | `x == 5` |
| not equal to | `!=` | `y != 3` |
| less than | `<` | `y < x` |
| less than or equal to | `<=` | `a <= b` |
| greater than | `>` | `y > x` |
| greater than or equal to | `>=` | `y > x` |


## loops and arrays
### arrays
Arrays are sequences of a certain type. For example, if we are looking to keep
track of 5 integer values, we would declare an integer array and store data
into it. For example, `int a[5];` declares an array of 5 integers named `a`. 
Arrays are fixed in size and order after they are declared, however, each
element can be assigned as needed. It may help to think of arrays as a simple
single-row table.

```c++
int a[5] = {3, 9, 1, 8, 2}; // declares and initializes int array named a
```
| Index | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|
| Contents | 3 | 9 | 1 | 8 | 2 |

<b>Arrays are zero-based(!)</b> In other words, when we want to update
the first array element, we use the zeroth index.  We can assign the first 
integer in the array by writing `a[0] = 3;`. To assign the second element we 
would write `a[1] = 9;` and so on.

<b>NOTE:</b> *If you attempt to access an element out of the array's bounds, your
program is going to crash! Remember, an array has a limited size when declaring
it, so you must always adhere to it.*

Arrays also have dimensions. So far we have seen one dimensional arrays such as 
`int x[5]`. However, we can have multiple dimensions, such as a two dimensional
array that is commonly used to represent a table or matrix. A simple example of
a two dimenional integer array can be written as `int x[5][5];`.

### for loop
Often in computer programming the same task needs to be performed on a different
piece of data (i.e. different element in an array).  Here's a typical problem:
print out all the contents of an array. Simple, right? But you wouldn't want to 
write code that individually accesses each element of a 1000 element array
because that would be very tedious and inefficient. Instead, we would write a
`for` loop.

Let's break down a simple `for` loop example:
```c++
void printArray(int a[], int size)
{
  for(int i = 0; i < size; i=i+1)
  {
    cout << "Index " << i << " has value: " << a[i] << endl;
  }
}

int main()
{
  int a[5] = {1, 8, 4, 2, 9};

  printArray(a, 5);

  return 0;
}
```
In this program, we have defined a function named `printArray` that takes an
array and its size as input arguments. The return type for this function is
something we have yet to see, `void`. The `void` keyword is used when a function
doesn't have any value to return, which is the case for our `printArray`
function - its job is to simply print out the contents of the array to the
screen. The function then declares a `for` loop to print out the contents of 
the array.

Within the parentheses after the `for` keyword we have three sections, separated
by semi-colons (`;`). The first is the *init* step, which is executed only once
at the beginning of the loop. The second is the *condition* statement, which is
a *predicate* expression that constitutes if the loop should exit or not - it is
evaluated at each loop iteration. If this expression is true, the loop continues
to run; if not, the loop will exit. The last section is the *increment* section,
typically used to increment the value defined in the *condition* statement. The
increment section is run at the end of the loop, before coming back to the top
and evaluating the *condition* once again. In our example above the variable `i`
is used to keep track of which index of the array we are accessing, which is
initialized in the *init* step and incremented afer each iteration.

For loops, like functions, have a body. The body of the loop is executed until
the loop exits (the condition is no longer satisfied). Variables that are
declared within the loop are within the loops *scope*.
```c++
for(/* init */; /* condition */; /* increment */) 
{
  /* body of for loop */
}
```
The result of running the above program will print out the following:
```
Index 0 has value: 1
Index 1 has value: 8
Index 2 has value: 4
Index 3 has value: 2
Index 4 has value: 9
```

### nested loops
It is often necessary to have loops within loops, what we refer to as *nested
loops*. For example, if we have a two dimenional array, we would iterate over
each element by writing the following:
```c++
int a[5][5];
for(int i = 0; i < 5; i=i+1)
{
  for(int j = 0; j < 5; j=j+1)
  {
    cout << a[i][j] << endl; // print value at row i, column j of 2D array
  }
}
```
There are no limits to the number of loops you nest, however, it is best
practice to limit the number of nested loops. Typically, the more loops you have
nested, the less efficient your program will be. Moreover, it gets very
difficult to read your program.

### while loop
There are a few types of loops in C++. We have seen the `for` loop, now let's
talk about the `while` loop, which is very similar. A `while` loop only contains
a *condition* statement within its parentheses. Here's the format:
```c++
while(/* some condition */)
{
  // do work here
}
```
The `for` loop that we wrote above for printing out the contents of array `a` 
can be written as the following.
```c++
int i = 0;
while(i < 5)
{
  cout << "Index " << i << " has value: " << a[i] << endl;
  i++; // shorthand notation for i=i+1
}
```

### infinite loop
In computer programming there is many times the desire to "loop forever",
performing the same task endlessly. A typical example could be the program that
controls the mouse of your computer - it is an infinite loop that waits for you
to move your mouse (physically) and responds by moving the cursor on your
screen. 

We can write infinite loops with both for `for` and `while` loop expressions.
Examples of each are shown below.
```c++
while(true)
{
  // do work here
}
```
```c++
for(;;)
{
  // do work here
}
```

### break statement
Now, imagine you needed to exit your infinite loop for some reason - a critical
error occured or a signal was received to shutdown your program - how would you
exit an infinite loop? Well, in C++ there is the `break` statement, which is
used to immediately exit from the current loop. 
```c++
while(true)
{
  // do work here

  if(/* some critical/final condition */)
  {
    break;
  }
}
```
<b>NOTE:</b> A `break` statement only exits the inner-most loop that it is 
called in. So if you had two nested loops, you would need two `break` statements
to exit out of the outer-most loop.

## exercises 1-5
Now that you have some basic programming knowledge, it is time to tackle some
exercises to put what you've learned to the test. Within the `exercises` folder 
I encourage you to try and write programs 1 through 5. There are example 
solutions within the `exercises/solutions` folder, but try not to peek until 
you have attempted your own solution. Good luck!

# part three
Let's now talk about some programming theory.

## data structures
## algorithms
[TODO]

# part four
## structs
## classes
[TODO]

# part five
## best practices 
Let's quickly overview some best practices in programming.

### coding style
Even though it is quite early in your programming endeavors, it is well worth
talking about coding style. In the C++ programming language there is no
limitations on how the code is organized in regards to white spaces. For
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

### naming
When programming in any language it is always good practice to name your
variables according to their purpose. For example, if I have a integer value
that represents the length of a string, it would be best to declare it as `int
len;` or `int stringLen;`. Again, this isn't required, but increases readability
of your program and conveys to the user the variables purpose. 

In addition to naming appropriately, using short and concise names is highly
encouraged. If you need more than one word to describe your variable, which is
very common, feel free to use the *camelCase* formatting. By capitalizing the
start of the next word, users will be able to easily read the multi-word
variable name. Notice that the first letter is always capitalized.

### comments
In C++, and in most programming languages, there is the ability to add notes in
the code. These brief notes, which are referred to as comments, are ignored by
the compiler, but offer to the programmers the ability to explain and document
the code. 

There are two types of comments that C++ supports, in-line comments (`//`) and
block comments (`/* */`). In-line comments are comments that are meant to only
span across the same line, while block comments can span multiple lines; denoted
by the starting tag `/*` and ending where the next `*/` is found. 
Comments are very useful for documenting the code and usually encouraged for
documenting a function or a class' purpose. Let's look at what our `doubleValue`
function would look like if it were documented with some comments.
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

