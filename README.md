# _printf() (C language)

Welcome to our inaugural student project in collaboration with Holberton School of Thonon-les-Bains. This project aims to replicate a lightweight version of the classic `printf` function found in the C language standard library. We appreciate you taking the time to read the following instructions to ensure you understand how to use this custom function effectively. Thank you.

<br>

![alt text](https://miro.medium.com/v2/resize:fit:1400/format:webp/1*rlVWGRzrSbvqf5QNqykCBg.png)

<br>

## Requirements

+ Linux distribution (Ubuntu 20 is highly recommended),
+ GCC compiler

<br>

## Description

**The `_printf` function displays formatted text using a format string and provided arguments**

<br>
This repository contains a header file and three source code files:

- `main.h`: This header file serves as our custom version of *<stdio.h>*. It includes all the function prototypes and structures necessary for the **_printf** function to operate. This file has to be included as a header in all your code source files ending by ".c" . Use it this way : "main.h".

- `print_functions.c`: This file contains the definitions of functions for handling format specifiers (`%c`, `%s`, `%d`) as well as a reproduction of the original *putchar* function: **_putchar()**.

- `print_functions_2.c`: This file exclusively contains the definition of the function to handle the `%i` format specifier.

- `printf.c`: This file contains the main **_printf** function, which emulates the behavior of the *printf* function from the standard library. Additionally, it includes a function that select the right function to call depending on the specifier. 

<br>

## Installation and instructions

Clone our repository in your working folder.

To do that, simply use : 

```bash
sudo apt-get install git
cd /$FolderOfYourChoice$/
git clone https://github.com/Douglas-Dachicourt/holbertonschool-printf.git
```

By cloning our repository, you make sure to find all the files necessary and you also have an access to the own manual of the function for more info: 

Use this command to access the manual : 
```bash
man ./man_3_printf
```
<br>

## Flowchart of our _printf function
<br>

![alt text](<./Test/Printf flowchart-1.png>)

<br>

## Usage

This project implements basic functionalities for our `_printf` function, including handling the four following format specifiers :

- `%c`: **Print a single character**
- `%s`: **Print a string of characters**
- `%d`: **Print an integer**
- `%i`: **Print signed integers in decimal format.** 

<br>

Basic usage with one specifier (`%c`) as an example: 
```bash
#include "main.h"

int main(void)
{
    _printf("The first letter of my lastname is %c", 'H');
    _printf("\n");

    return (0);
}
```
output :
```bash
root@f833c6a99731:~/holbertonschool-printf#
The first letter of my lastname is H
```
<br>

Combined usage with the `%s`and `%d` specifiers : 
```bash
#include "main.h"

int main(void)
{
    _printf("My name is %s and I am %d years old.", "John", 40);
    _printf("\n");

    return (0);
}
```
output :
```bash
root@f833c6a99731:~/holbertonschool-printf#
My name is John and I am 40 years old.
```
<br>

## Compilation command

To safely compile your program, use this command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Authors 

[Cédric Tobie](https://github.com/HolbieWan) <br>
[Douglas Dachicourt](https://github.com/Douglas-Dachicourt) <br>
[Ibrahim Hassan Ali](https://github.com/Ibrux11) <br>
<br>
*#C23* cohort from Thonon-les-Bains.