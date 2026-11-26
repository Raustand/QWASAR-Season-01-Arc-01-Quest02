# Welcome to Quest02
***

## Task
TODO - What is the problem? And where is the challenge?
The objective of Quest02 is to build foundational proficiency in 
C programming by working with pointers, memory addresses, loops, 
basic arithmetic, and C-string manipulation. The main challenge lies 
in safely dereferencing pointers without causing segmentation faults, 
iterating over null-terminated character arrays (`'\0'`), and performing 
in-place ASCII character transformations.


## Description
TODO - How have you solved the problem?

I solved the exercises (`ex00` through `ex10`) by organizing each function 
into its designated submission directory (`ex00/` to `ex10/`) and adhering 
strictly to the required C function prototypes:

```
**Pointer Manipulation (`ex00`–`ex01`):*Used pointer dereferencing (`*`) and temporary variables to modify and swap integer values directly in memory, including `NULL` checks for safety.
**String Traversal & Output (`ex02`–`ex03`):*Iterated through `char*` arrays until reaching the `'\0'` terminator to compute string length (`my_strlen`) and write characters to standard output using `write(1, &c, 1)` (`my_putstr`).
**Arithmetic & Formatting (`ex04`–`ex07`):*Implemented basic integer arithmetic functions (`my_add`, `my_sub`, `my_mult`) and formatted console output with `printf` (`my_string_formatting`).
**Search & Case Conversion (`ex08`–`ex10`):*Built character-lookup loops (`my_string_index`) and in-place ASCII offset conversions to uppercase (`my_upcase`) and lowercase (`my_downcase`).

```

## Installation
TODO - How to install your project? npm install? make? make re?

This project consists of standalone C source files without a 
central `Makefile`. Each exercise can be compiled individually 
using `gcc` with strict warning flags:

```
gcc -Wall -Wextra -Werror ex00/my_initializer.c main.c -o test_ex00

```

## Usage
TODO - How does it work?

Include a main.c test harness that invokes the desired function 
from each exercise directory, compile, and run the resulting binary:

```
./test_ex00

```


### The Core Team
Tessoh Tchinda Raustand(raustand_t)

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
