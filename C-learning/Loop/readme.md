## while loop

<br>

```
while (expression) {
  statements
}
```

<br>

## do-while

> The do-while loop executes the loop statements before evaluating the expression to determine if the loop should be repeated. 

<br>

```
do {
  statements
} while (expression);
```

<br>

> The expression evaluates to either true or false, and  statements can be a single statement or a code block enclosed by curly braces { }.

<br>

## break and continue 

The break statement was introduced for use in the switch statement. It is also useful for immediately exiting a loop.

<br>

When you want to remain in the loop, but skip ahead to the next iteration, you use the continue statement.

<br>

## the for loop

> The for statement is a loop structure that executes statements a fixed number of times. 

```
for (initvalue; condition; increment) {
  statements;
}
```

<br>

- The initvalue is a counter set to an initial value. This part of the for loop is performed only once.

- The condition is a Boolean expression that compares the counter to a value before each loop iteration, stopping the loop when false is returned.

- The increment increases (or decreases) the counter by a set value.

<br>

**The for loop can contain multiple expressions separated by commas in each part.**


```
for (x = 0, y = num; x < y; i++, y--) { 
  statements; 
}
```

<br>

loops can also be nested.
<br>
When writing a program this way, there is an outer loop and an inner loop. For each iteration of the outer loop the inner loop repeats its entire cycle.

<br>

A break in an inner loop exits that loop and execution continues with the outer loop.
<br>
A continue statement works similarly in nested loops.