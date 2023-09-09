Data lives in databases. Just about every company and organization relies on some form of database to store and organize information.


<br>

SQL code is used to send requests to a database. These requests are known as queries.

<br>

![sql](./img/sql.png)

The SELECT command is used to extract field data from a table․

<br>

## structured data
Data that can be stored in tables

<br>

Unstructured data is information that is difficult to store in tables.

![relational](./img/relational.png)

The different tables in a relational database connect to each other using fields (columns) with values in common. These fields are called keys.

<br>

database schema:
<br>
is a visual representation of how a database is organized, showing its tables, fields and keys. Arrows are used to show how the different tables are related.

<br>
The * symbol allows you to select all the fields in a table


<br>

comments => -- => one line
            /* */ => multiple line


















<br>
A data table is filled with values. There are different types of values.

```

SELECT name, price+delivery AS TOTAL
FROM sales

```

<br>
Concatenation joins strings together => CONCAT

<br>
WHERE is used to extract records that meet a condition.

<br>
A comparison operation always results in one of these two outcomes: Yes (True) or No (False)

<br>
The LIKE keyword is used with the WHERE command to search for patterns in string values.
<br>
The % symbol can replace any number of characters (one, multiple or none) in a string to create patterns.
<br>

The % special symbol is known as a wildcard and is used to create patterns. 

<br>

The % wildcard can be used in any part of the pattern and as many times as needed.

<br>

```
SELECT column_1, column_2,...column_n

FROM table_name

WHERE column_1 LIKE [pattern];
```


<br>

Wildcard symbols such as % and _ are used to find patterns in strings with the commands…

