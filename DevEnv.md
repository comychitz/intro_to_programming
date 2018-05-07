# Development Environment

# Table Of Contents
* [What is a Development Environment?](#what-is-dev-env)
* [Integrated Development Environment)](#integrated-development-environments)
* [Setting Up For C++](#setting-up-for-c++)
    * [Windows](#windows)
    * [MacOS](#macos)
    * [My Setup](#my-setup)

# What is a Development Environment? <a name="what-is-dev-env"></a>
There doesn't exist a clear cut definition of a development environment because
depending on the type of development you are doing and the language you are
using, the development environment can trastically vary. If we were to define
it, the definition would vaguely be: "A set of tools that allows a user to write
and execute code on a particular system". 

Instead of focusing on the definition, let's talk about the components that are
part of the development environment, specifically in regards to C++ development.
The first, and most important, tool that needs to be part of our environment is
a text editor. A text editor is the tool that we use to modify the C++ source
code. Its purpose is self-explanitory: it edits text. You have probably used a
text editor already, such as Microsoft Word. However, source code text editors
focus primarily on supporting the language(s) it is used for. 

Remember that C++ is a compiled language, so we need a compiler in our
development environment to compile our C++ code we wrote with our text editor.
Compilation in development is often referred to as *building*. Typically, a
*build system* is used in the environment, which uses a particular compiler,
depending on the target system. There are hundreds of build systems in existence
today with many new features.

The text editor and build system are the two biggest components in a C++ 
development environment, however, there are many supplemental tools that are
used alongside a development environment. To name a few: a version control
system (ex. git, svn), file/project management system, continuous integration
servers (ex. Jenkins), and many others.

# Integrated Development Environments
Now you may be asking yourself the following questions, what kind of text editor
and build system should I use? What is the most commonly used environments?
Well, not to worry, as these questions have been asked and answered many times,
and the developer community has created magnificent one-stop-shop tools that
have everything for us.

These days it is very typical for one to jump right into programming by
installing an *Integrated Development Environment*, or *IDE*. An IDE is a single
downloadable program that integrates all the tools needed to efficiently and
easily write, compile, and execute C++ code. There are numerous IDEs available,
some free while others must be purchased.

For Windows users, a great place to start is the *NetBeans* IDE. It's a full
blown IDE that has been supported and used by many C++ developers for many years
now. For other operating systems such as MacOS or Linux, there are IDEs as well.
Check out the table below for a quick list of some of the most populate IDEs.

| IDE | Cost | Operating System | Link |
|---|---|---|---|
| NetBeans | Free | Windows, MacOS, Linux | [NetBeans - Downloads](https://netbeans.org/downloads/index.html)
| CLion | See Website | Windows, MacOS, Linux | [CLion](https://www.jetbrains.com/clion/download/) 
| Microsoft Visual Studio | Free | Windows, MacOS, Linux | [MSVS](https://www.visualstudio.com/downloads/)

