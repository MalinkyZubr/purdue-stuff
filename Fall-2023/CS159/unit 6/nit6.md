# control flow
1. sequence
2. selection <---
3. repetition

* if statements, switch statements, the whole thing
* no boolean type in base C language.
* Only 1 and 0
  * true is any nonzero value, actually

* C Logical operations
  * ||, &&, !
  * or and not
  * and is higher  precedence than or
  * not has the highest precedence

### Short circuiting
* if an expression is certain to be true or false based on one part of the expression, none of the rest of the expression is evaluated

### Complements
* when one expression is always true or always false, its complement is always the opposite

* x > 3 x <= 3
* if two expressions ever generate the same output for the same input, then theyre not complements
* x > 0 && x < 10
* complement: x <= 0 || x >= 10
* reverse everything
* if there is a not, just get rid fo the not for the complement
* x > 0 && x < 10 || y != 0
* x <= 0 || x >= 10 && y == 10
  * but this complement changed operator precedence!
  * these are not complements because they can generate the same values
  * thus we must add parentheses
* (x <= 0 || x >= 10) && y == 10
  * parentheses overwrite precedence of &&

### selection constructs
* two way
  1. if else
     1. if theres only one statement inside a conditional construct, then no curly braces are needed
     2. also if you dont use braces, the if else statements might misalign... if statements automatically pair with the closes else if there are no curly braces, recargless of indentation
  2. conditional expressionc
     1. a + b > 0 ? true action : false action;
        1. checks the conditon a + b > 0
        2. if true, execute true action, else execute false action
* multiway
  1. if else if else
  2. switch