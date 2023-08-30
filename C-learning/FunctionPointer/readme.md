Since pointers can point to an address in any memory location, they can also point to the start of executable code. 

<br>
stored in an array or passed as arguments to other function.
<br>

```
return_type (*func_name)(parameters) 
```

<br>
A function name points to the start of executable code, just as an array name points to its first element. Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct, it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call.

