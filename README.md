# **_printf**
## **Project details**
Recreate our own version of printf using C language.

## **Function prototype**
int _printf(const char *format, ...);

## **Background**
A standard printf is a built-in C function in stdio.h standard library. It has a return type int and accepts variable arguments.

## **Return value**
Upon successful return, printf returns the number of characters printed (excluding the null byte used to end output to strings).
If an output error is encountered, a negative value is returned.

## **Format specifiers**
Specifier type	Description
- c	  Single character
- s	  String of characters
- d or i  Signed decimal integer
- b Unsigned binary

### **Example**

#include "holberton.h"

	  int main (void)

	   {

		int age = 43;
char *name = maria;

     	   _printf("She is %s and has %d years old", name, age);

       	   		return (0);

			}

### **Output**
She is Maria and has 43 years old

## **Compilation**
Files are compiled this way:
***$ gcc -Wall -Werror -Wextra -pedantic *.c***

# **Authors**
[Maria Crespo](https://twitter.com/mafe_crespo) | [Jorge Ramirez](https://twitter.com/jlrogb)
