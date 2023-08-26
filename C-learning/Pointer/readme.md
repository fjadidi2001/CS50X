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