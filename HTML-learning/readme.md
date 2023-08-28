## Attributes
Adding alternative text to images makes your page more accessible

> Attributes usually come in name/value pairs like:
<br>
**name="value"**
<br>
ex:
<br>
```
<img src="http://www.img.png" width="300">
```

<br>

When only one of the 2 attributes is given, the web browser will calculate the other based on the aspect ratio so the image is not stretched or squeezed.

<br>

The "nav" container tag defines a set of links that allows the user to navigate between pages of a website.

Links to the different pages are added with the anchor tag "a" and nested inside the "nav" container tag.

<br>

A single-page website has all its content on the home page. Any navigation links take the visitor down to different sections (instead of loading new pages).

<br>
The id attribute is used to identify the element you want to target with the navigation link. 

<br>

The hash character (#) is needed to tell the web browser that we are targeting a section of the same page. 

<br>
You might want to add a link at the bottom of a long single-page website to take the user back to the top of the page. You can do this with href="#top" or simply href="#".

<br>
 In HTML, the id attribute is meant to be unique within a single document. Each HTML element should have a unique id attribute to allow for proper identification and manipulation via JavaScript and CSS. If multiple elements within the same document have the same id attribute, it can lead to unexpected and unreliable behavior in your web page.

<br>

Forms are made of input elements like text fields, checkboxes, and submit buttons. These input elements are nested inside the "form" container tag.
<br>

Labels can be added for the different input elements with the label tag.

label => for
<br>
input => id
<br>
input => name
<br>
select => name, id
<br>
label => for(in select)
option => value
An HTML form is a convenient way to send data to a database hosted in a server.

<br>
The name attribute is used to reference the data after submitting the form 



<br>
The value attribute defines the value that is submitted when the input is selected.

<br>

Drop-down menus make your forms more efficient, accessible, and organized.

You can use the "select" container tag to create a drop-down list.
<br>
The "option" container tag is used inside a "select" tag to add choices for the user.

<br>
Submitting a form sends information to a database. The name attribute is needed to submit the form data.


<br>
You can use the "video" container tag to embed video files into a web page.

<br>
You can add video files in different formats. Common video formats are: MP4, OGG and WebM.

```
<video>
<source src="file.mp4"
type="video/mp4">
</video>

```
<br>
You can display play/pause, volume and other video controls with the controls attribute.

<br>
You can embed audio files into web pages with the "audio" container tag.

<br>
Just like video, the "source" tag is used to add source options for audio.

<br>
Just like video, the src attribute adds the audio file URL. The type attribute adds the format.

<br>
You can use autoplay, muted and loop attributes to control the behavior of the multimedia element. Just like controls, these attributes have their default values omitted.

