# MiniJava Compiler  

- This is a Windows Form Application that let you edit code from ".java" files and compiles them using miniJava syntax.

## Interface
- It's made with Microsoft Visual Studio.
- It has basic text editing tools like saving,copy-paste,opening file...
- The text is automatically highlighted for better vision.
- Clicking on the compile buton launches miniJava.exe and compiles the code in the Code Textbox and shows the lexical and syntaxic errors in the Console Textbox.
### Execution:
![2014-10-22 11_35_09](https://media4.giphy.com/media/KlmpPpU339nsTdiYTG/giphy.gif?cid=790b76119e58b363db1ab171c094c1d4a1369ba2c4f051a0&rid=giphy.gif&ct=g)

## MiniJava Syntax
- The Syntax_Generator folder contains the lex (.l) and yacc (.y) files that generates miniJava.exe.
- miniJava.exe checks the content of a file (given as argument) and analyse it lexically with lex to generate tokens then uses them check its syntax.
![Imgur](https://i.imgur.com/6YzhukE.png)

#### MiniJava BNF
- This compiler doesn't contain every Java rule.
- There some basic keywords,simple types,attributes and methods in classes. Not all operators are available too.
- I'll keep updating it with new rules to get closer to the real deal.
