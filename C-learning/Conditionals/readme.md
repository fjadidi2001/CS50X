
There are six relational operators that can be used to form a Boolean expression, which returns true or false:
<br>

1. <    less than

2. <=  less than or equal to

3. >    greater than

4. >=  greater than or equal to

5. ==  equal to

6. !=   not equal to


<br>
An expression that evaluates to a non-zero value is considered true.

<br>
in C, you cannot compare strings using the == operator directly. You need to use the strcmp() function from the string.h library.<br>
### Conditional Expressions 
<br>
Another way to form an if-else statement is by using the ?: operator in a conditional expression. The ?: operator can have only one statement associated with the if and the else.

<br>
### Nested if Statements <br>
An if statement can include another if statement to form a nested statement. Nesting an if allows a decision to be based on further requirements. 

============================================================

## switch

<br>
>The switch statement branches program control by matching the result of an expression with a constant case value. 

The switch statement often provides a more elegant solution to if-else if and nested if statements

<br>

```
switch (expression) {
  case val1:
    statements
  break;
  case val2:
    statements
  break;
  default:
    statements
}
```
<br>
## The switch Statement 
> There can be multiple cases with unique labels.

    The optional default case is executed when no other matches are made.

    A break statement is needed in each case to branch to the end of the switch statement.

    Without the break statement, program execution falls through to the next case statement. This can be useful when the same statement is needed for several cases.