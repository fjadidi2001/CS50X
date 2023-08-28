# string

1. A string in C is an array of characters that ends with a NULL character '\0'. 

2. When you provide a string literal to initialize the string, the compiler automatically adds a NULL character '\0' to the char array.For this reason, you must declare the array size to be at least one character longer than the expected string length.

3. As with any array, the name of a string acts as a pointer.

4. A string literal is a text enclosed in double quotation marks.

5. A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string.

6. A string pointer declaration such as char *str = "stuff"; is considered a constant and cannot be changed from its initial value.

7. To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include "string.h".
    - strlen() - get length of a string

    - strcat() - merge two strings

    - strcpy() - copy one string to another

    - strlwr() - convert string to lower case

    - strupr() - convert string to upper case

    - strrev() - reverse string

    - strcmp() - compare two strings

