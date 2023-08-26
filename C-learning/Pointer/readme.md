# pointer
<br>

> C is designed to be a low-level language that can easily access memory locations and perform memory-related operations. 

For instance, the scanf() function places the value entered by the user at the location, or address, of the variable. This is accomplished by using the & symbol. 
<br>
A memory address is given as a hexadecimal number. Hexadecimal, or hex, is a base-16 number system that uses digits 0 through 9 and letters A through F (16 characters) to represent a group of four binary digits that can have a value from 0 to 15.
<br>
It's much easier to read a hex number that is 8 characters long for 32 bits of memory than to try to decipher 32 1s and 0s in binary.


<br>

**A pointer is a variable that contains the address of another variable. In other words, it "points" to the location assigned to a variable and can indirectly access the variable.**

<br>

pointer_type is the type of data the pointer will be pointing to. The actual pointer data type is a hexadecimal number, but when declaring a pointer, you must indicate what type of data it will be pointing to.

<br>
Asterisk * declares a pointer and should appear next to the identifier used for the pointer variable.

<br>

There are several things to notice about this program:

• Pointers should be initialized to NULL until they are assigned a valid location.

• Pointers can be assigned the address of a variable using the ampersand & sign.

• To see what a pointer is pointing to, use the * again, as in *p. In this case the * is called the indirection or dereference operator. The process is called dereferencing.

<br>
Some algorithms use a pointer to a pointer. This type of variable declaration uses **, and can be assigned the address of another pointer, as in:

```
int x = 12;

int *p = NULL

int **ptr = NULL;

p = &x;

ptr = &p;
```

> Pointers are especially useful with arrays. An array declaration reserves a block of contiguous memory addresses for its elements. With pointers, we can point to the first element and then use address arithmetic to traverse the array:

 + is used to move forward to a memory location

 - is used to move backward to a memory location

 <br>

 ### More Address Arithmetic 

 Address arithmetic can also be thought of as pointer arithmetic because the operations involve pointers.
 <br>
You can also use the ==, <, and > operators to compare pointer addresses.

### pointers & function

<br>


Pointers greatly expand the possibilities for functions. No longer are we limited to returning one value. With pointer parameters, your functions can alter actual data rather than a copy of data. 

To change the actual values of variables, the calling statement passes addresses to pointer parameters in a function. 
