Data lives in databases. Just about every company and organization relies on some form of database to store and organize information.


<br>

## SQL code
  used to send requests to a database. These requests are known as queries.

<br>

## SELECT
![sql](./img/sql.png)

The SELECT command is used to extract field data from a table․

<br>

## structured data

Data that can be stored in tables

<br>

## Unstructured data
  information that is difficult to store in tables.

![relational](./img/relational.png)

## key
The different tables in a relational database connect to each other using fields (columns) with values in common. These fields are called keys.

<br>

## database schema:
is a visual representation of how a database is organized, showing its tables, fields and keys. Arrows are used to show how the different tables are related.

<br>
information is included in the schema =>
  - filed names
  - keys
  - table name





## *

The * symbol allows you to select all the fields in a table


<br>

## comments
  -- => one line
            /* */ => multiple line


















<br>
A data table is filled with values. There are different types of values.

```

SELECT name, price+delivery AS TOTAL
FROM sales

```

<br>

## CONCAT
Concatenation joins strings together

<br>

## WHERE
 used to extract records that meet a condition.

<br>

## comparison operation
 always results in one of these two outcomes: Yes (True) or No (False)

<br>

## LIKE
The LIKE keyword is used with the WHERE command to search for patterns in string values.

```
SELECT column_1, column_2,...column_n

FROM table_name

WHERE column_1 LIKE [pattern];
```
## wildcard 

    - %
 can replace any number of characters (one, multiple or none) in a string to create patterns.
<br>

The % special symbol is known as a wildcard and is used to create patterns. 

<br>

The % wildcard can be used in any part of the pattern and as many times as needed.

<br>

    - _



Wildcard symbols such as % and _ are used to find patterns in strings with the commands…

<br>

## ;
You can include multiple queries in your SQL code. You just need to separate them with a semicolon(;)

```
SELECT name, code
FROM products;

SELECT name
FROM products
WHERE code LIKE 'A_B_';

```

## LOWER() || UPPER()

used to convert strings to lower or uppercase.

## conditions

```
/*
Shows if the records meet 
or don’t meet the condition
true (t) or false (f)
*/
SELECT year, year > 2000 AS result
FROM movies;

/*
Filtering query that extracts
only the records that make
the condition true
*/
SELECT title
FROM movies
WHERE year > 2000;

```

  - The not equal operator <> can be used with both numbers and string values.

## aggregation operations

  - MIN()
  - MAX()

```
/*
Extracts the highest value in the year field 
*/
SELECT MAX(year)
FROM movies;

/*
Extracts the lowest value in the year field 
*/
SELECT MIN(year)
FROM movies;

```

  - COUNT() 
    It counts the number of records
  - SUM()
     produces the total sum of the values in a numerical field.
  - AVG()

<br>
**When running queries that involve different operations, filtering happens first.**

<br>
Aggregation operations are usually referred to as aggregation functions. A function includes the code that is required to perform a task.



## API(Application Programming Interface)
A lot of data lives on the Internet. Servers are computers that are always listening for requests of information. You can request information from a database server through an API.


## Web scraping
 extract information from websites. 

**so use database, api, web scraping for collecting data.**

## Data grouping
powerful tool when working with large datasets. Grouping allows you to collect and see data in a new way, to answer more complex questions.


## GROUP BY

allows you to organize similar data into categories


```
/*Groups records by genre and 
calculates the average budget for each group*/
SELECT genre, AVG(budget)
FROM movies
GROUP BY genre;

SELECT *
FROM movies;
```


> You can combine **GROUP BY** with **WHERE** filters. Data is filtered first, then grouped.

## HAVING 
filter data that has been grouped.

```
SELECT genre, AVG(budget)
FROM movies
GROUP BY genre
HAVING AVG(budget) > 50;
```

<br>

where:<br>
- data is filtered first, then grouped
<br>
having:<br>
- data is grouped first, then filtered

# cleaning data
data can come to you with quality issues.
## duplicated data
copies of the same data

--checking for id duplicates

```
SELECT id, COUNT(id)
FROM employees
GROUP BY id
HAVING COUNT(id) > 1;

SELECT *
FROM employees
```
### DISTINCT
Duplicated data can significantly impact the quality and accuracy of your analysis. Use DISTINCT to eliminate duplicate values

```
SELECT DISTINCT subject
FROM teachers
```

## missing data
another common data quality issue
<br>
NULL is used to indicate that a data value is missing and does not exist in the database. NULL values are not shown in result tables.

<br>
You can check if your data contains missing values. Use IS NULL in combination with WHERE to find missing values

```
SELECT * 
FROM movies 
WHERE genre IS NULL
```
<br>

Similarly, you can extract non-null values using IS NOT NULL. This will filter null values out.

```
SELECT * 
FROM movies 
WHERE genre IS NOT NULL
```


Filtering out missing data is one way to deal with incomplete data. Different approaches are used depending on where the data is coming from or the type of analysis that you need to perform.

