# Cascading Style Sheets
uses rules to style elements.
<br>
A rule is a group of style declarations
<br>
It is common practice to define the CSS rules in a separate document and link it with the HTML.
<br>
CSS allows you to target elements using selectors, which allows you to target specific elements and apply the same style to them.
<br>
You can have only one element with the same id on the page, while the class value can be used multiple times.

We can also target elements based on their location.

<br>
Not all styles are inherited, like the width and other similar layout properties.
<br>

# property
### color 
 1. Hex => #
 2.RGB
 3. name of color

### font-size
    1. em
    2. px
### font-family
 web safe fonts and include: Arial, Courier New, Georgia, Times New Roman, Trebuchet MS, Verdana.

 **If the font name consists of multiple words, it has to be in quotes.**


 ### font-style  
 like italic

 <br>

 ### font-weight 
    - bold
You can also define the font weight with a number from 100 (thin) to 900 (thick). 400 is the same as normal, and 700 is the same as bold.

### text-transform 
    - uppercase: Transforms the text to capitals.

    - lowercase: Transforms the text to lower case.

    - capitalize: Transforms all words to have the first letter capitalized.

### text-decoration 
    - none: removes any decoration.

    - underline: underlines the text.

    - overline: gives the text an overline.

    - line-through: puts a strikethrough over the text.

### text-shadow 

```
h1 {
  text-shadow: 3px 2px 3px red;
} 
```


    - The first value is the horizontal offset of the shadow.

The second value - the vertical offset.

The third value is the blur radius: a higher value means the shadow is dispersed more widely.

The last one is the color of the shadow.