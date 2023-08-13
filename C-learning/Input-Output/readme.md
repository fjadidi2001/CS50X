# review
### input
char => getchar()<br>
string(an ordered sequence of characters) => gets()<br>
================================================================

### output
single char  =>  putchar() <br>
string(an ordered sequence of characters) => puts()<br>
================================================================

### format specifier(input)
> Format specifiers begin with a percent sign % and are used to assign values to corresponding arguments after the control string. Blanks, tabs, and newlines are ignored.

A format specifier can include several options along with a conversion character:

%[*][max_field]conversion character

The optional * will skip the input field.

The optional max_width gives the maximum number of characters to assign to an input field.

The conversion character converts the argument, if necessary, to the indicated type:

d decimal

c character

s string

f float

x hexadecimal
================================================================

### format specifier(output)
>Escape sequences begin with a backslash \:

\n new line

\t horizontal tab

\\ backslash

\b backspace

\' single quote

\" double quote


================================================================

```
%[-][width].[precision]conversion character

```

> The optional - specifies left alignment of the data in the string.

The optional width gives the minimum number of characters for the data.

The period . separates the width from the precision.

The optional precision gives the number of decimal places for numeric data. If s is used as the conversion character, then precision determines the number of characters to print.

The conversion character converts the argument, if necessary, to the indicated type:

d decimal

c character

s string

f float

e scientific notation

x hexadecimal

> To print the % symbol, use %% in the format string.

================================================================



# comment
<br>
single line comment => //
multiple line comment => /* */