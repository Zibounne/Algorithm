/*
The DOM is an interface that allows you to represent the HTML structure of a page as JavaScript objects. These objects can be manipulated to dynamically change the structure, style, and content of a web page.

Example: When you load a web page, your browser creates a DOM tree from the HTML code. This then allows JavaScript to interact with the page.
*/

<html>
  <head>
    <title>Ma page</title>
  </head>
  <body>
    <h1>Bienvenue !</h1>
    <p id="intro">Ceci est un paragraphe</p>
    <button>Cliquer ici</button>
  </body>
</html>

// DOM
/*
Document
 └─ html
     ├─ head
     │   └─ title
     └─ body
         ├─ h1
         ├─ p
         └─ button
*/

// querySelector

const heading = document.querySelector('h1');
heading.textContent = 'Welcome !';

// querySelectorAll

const paragraphs = document.querySelectorAll('p');
paragraphs.forEach(p => p.style.color = 'blue');

// getAttribute / setAttribute

const button = document.querySelector('button');
button.setAttribute('disabled', 'true');
console.log(button.getAttribute('disabled')); // true

// addEventListener

const button2 = document.querySelector('button');
button2.addEventListener('click', () => {
  alert('Button clicked!');
});

// updateStyleElement

const heading = document.querySelector('h1');
heading.style.fontSize = '30px';
heading.style.color = 'green';

// create element & add element

const newParagraph = document.createElement('p');
newParagraph.textContent = 'new p !';
document.body.appendChild(newParagraph);  // add to the end

// delete element

const p = document.querySelector('p');
p.remove(); // delete first p

// classList

const heading = document.querySelector('h1');
heading.classList.add('highlight');  // add 'highlight'
heading.classList.remove('highlight');  // delete 'highlight'

// ...
