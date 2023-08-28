# string

1. A string in C is an array of characters that ends with a NULL character '\0'. 

2. When you provide a string literal to initialize the string, the compiler automatically adds a NULL character '\0' to the char array.For this reason, you must declare the array size to be at least one character longer than the expected string length.

3. As with any array, the name of a string acts as a pointer.

4. A string literal is a text enclosed in double quotation marks.

5. A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string.

6. A string pointer declaration such as char *str = "stuff"; is considered a constant and cannot be changed from its initial value.

7. The string.h library contains numerous string functions. 


    - strlen() - get length of a string , not including the NULL character

    - strcat() - merge two strings:
    strcat(str1, str2) Appends (concatenates) str2 to the end of str1 and returns a pointer to str1.



    - strcpy() - copy one string to another:
    strcpy(str1, str2) Copies str2 to str1. This function is useful for assigning a string a new value.

    - strlwr() - convert string to lower case

    - strupr() - convert string to upper case

    - strrev() - reverse string

    - strcmp() - compare two strings

    - strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.

    - strncpy(str1, str2, n) Copies the first n characters of str2 to str1.

    - strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.

    - strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.

    - strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.

    - strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.

    - strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.
<br>

8. scanf() stops reading input when it reaches a space. To read a string with spaces, use the gets() function. It reads input until a terminating newline is reached (the Enter key is pressed).

9. A safer alternative to gets() is fgets(), which reads up to a specified number of characters. This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text.
**fgets() reads only n-1 characters from stdin because there must be room for '\0'.**

# string output

#### fputs()
- requires the name of the string and a pointer to where you want to print the string.
- To print to the screen, use stdout which refers to the standard output. 

#### puts()
- takes only a string argument and can also be used to display output. However, it adds a newline to output.

# string function
#### sprintf() 
- A formatted string can be created with the function.
- useful for building a string from other data types.
#### sscanf()
- for scanning a string for values. 
- reads values from a string and stores them at the corresponding variable addresses.
<br>

## Converting a String to a Number 
<br>

#### int atoi(str):
  Stands for ASCII to integer. Converts str to the equivalent int value.
 
 #### double atof(str):
 Stands for ASCII to float. Converts str to the equivalent double value.

#### long int atol(str):
 Stands for ASCII to long int. Converts str to the equivalent long integer value.


 **Note, that atoi() lacks error handling, and it is recommended to use strtol() if you want to make sure that proper error handling is done.**


 ## Array of strings
A two-dimensional array can be used to store related strings. 

<br>

