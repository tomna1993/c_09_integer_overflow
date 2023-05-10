# c_09_overflow

## DESCRIPTION

All data have a length. Data types have their given length, which depends on the system they are used in or on the type of data. The below table shows each data type and their length in bits and maximum value:

| Type | Storage size | Value range |
|------|--------------|-------------|
| char | 1 byte | -128 to 127 or 0 to 255 |
| unsigned char | 1 byte | 0 to 255 |
| signed char | 1 byte | -128 to 127 |
| int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 |
| unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
| short | 2 bytes | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| long | 8 bytes or (4bytes for 32 bit OS) | -9223372036854775808 to 9223372036854775807 |
| unsigned long | 8 bytes | 0 to 18446744073709551615 |
| float | 4 byte | 1.2E-38 to 3.4E+38 | 6 decimal places |
| double | 8 byte | 2.3E-308 to 1.7E+308 | 15 decimal places |
| long double | 10 byte | 3.4E-4932 to 1.1E+4932 | 19 decimal places |

Integer Overflow is a phenomenon that occurs when the integer data type cannot hold the actual value of a variable. Integer Overflow and Integer Underflow in C, do not raise any errors, but the program continues to execute (with the incorrect values) as if nothing has happened. It makes overflow errors very subtle and dangerous.

For example if we add `unsigned char 130` and `unsigned  130` tohether, the end value in a char type will be `4` and not `260`. This is because the char data type can hold maximally 255 as a value.

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
