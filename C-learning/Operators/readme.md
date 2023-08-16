

> When a numeric expression contains operands of different data types, they are automatically converted as necessary in a process called type conversion.
<br>

> When you want to force the result of an expression to a different type you can perform explicit type conversion by type casting
<br>

``` 
int total = 23;
int count = 4;
average = (float) total / count;
```


<br>

1. x+=y
2. x/=y
3. z--
4. z++
<br>

```
z = 3;
x = z--;  /* assign 3 to x, then decrement z to 2 */
y = 3;
x = ++y;  /* increment y to 4, then assign 4 to x */
```

<br>

# Logical Operators 
<br>
>  
    Logical operators && and || are used to form a compound Boolean expression that tests multiple conditions. A third logical operator is ! used to reverse the state of a Boolean expression.

**The && Operator**  

> The logical AND operator && returns a true result only  when both expressions are true.

<br>
**The || Operator**
The logical OR operator || returns a true result when any one expression or both expressions are true

<br>

**The ! Operator**
> The logical NOT operator ! returns the reverse of its value. 

    NOT true returns false, and NOT false returns true.