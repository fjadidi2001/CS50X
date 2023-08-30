


Since pointers can point to an address in any memory location, they can also point to the start of executable code. 

<br>
stored in an array or passed as arguments to other function.
<br>

```
return_type (*func_name)(parameters) 
```

<br>
A function name points to the start of executable code, just as an array name points to its first element. Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct, it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call.

# Array of Function Pointers 
An array of function pointers can replace a switch or an if statement for choosing an action

<br>

# void pointer

A void pointer is used to refer to any address type in memory and has a declaration that looks like:

<i>void *ptr;</i>

<br>

When dereferencing a void pointer, you must first type cast the pointer to the appropriate data type before dereferencing with *.
<br>
You cannot perform pointer arithmetic with void pointers.

<br>

## Functions Using void Pointers 

Void pointers are often used for function declarations. 
```
void * square (const void *); 

```
Using a void * return type allows for any return type. Similarly, parameters that are void * accept any argument type. If you want to use the data passed in by the parameter without changing it, you declare it const.


<br>

You can leave out the parameter name to further insulate the declaration from its implementation. Declaring a function this way allows the definition to be customized as needed without having to change the declaration.

<br>

# Void Functions:
In C, a void function is a function that doesn't return a value or returns void. They are typically used when you need to perform an action but don't need to return any data. 

# Void Pointer:
A void pointer, often referred to as a void*, is a special type of pointer in C that doesn't have a specific data type associated with it. It can point to objects of any data type. Void pointers are used when you need a flexible way to work with data of different types or when you're dealing with memory allocation and manipulation functions like malloc and free.

> one important thing to note is that you can't directly dereference a void pointer because the compiler doesn't know the data type it points to. If you want to access the data pointed to by a void pointer, you need to cast it to the appropriate data type.