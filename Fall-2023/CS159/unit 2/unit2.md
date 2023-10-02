## Lecture 3
* errors
  * when?
    * compile time?
    * Runtime?
  * what?
    * warning
      * warnings only
      * potential problem, wont stop from being created
    * error
      * error will suppress creation of new file
      * a.out will still be there if the program compiled previously
  * runtime issues are those of logic, what happened during the running of the program?
  * avg = x+y+z/3
    * this works, but the result isnt the average
    * we must put the sum in parentheses
* you might also get unexpected output?
* how diagnose logical errors?
* diagnostic printing works okay, but learning a debugger is better

### Expressions
* operators
  * +-/*
  * operands 
    * variables
    * constants
  * when you resolve an expression, it must reduce to a single value
  * there are some nonstandard operators between languages
    * power
      * python: **
      * matlab: ^
        * in c, this is bitwise xor, like python
      * c: function, pow()
* in c, when calculating quotient of integers, it rounds down
* to get remainder of two integers, use the %, modulo operator
* floating point data isnt compatible with modulus
* different datatypes have different operators
* assignment operator
  * =
  * it resolves the expression on the right, and assigns it to a single variable on the left of the equal sign
  * simple assignment, using =
  * compound assignment
    * x = x + 3;
    * instead, x += 3
    * this works for all the operators
* 2 variables, x=3, y=7
  * x/= x+y
  * 2 possibilities
    * x = x / x + y = 6
    * x = x / (x + y) = 0 (rounded, no remainder)
    * operator precedence
    * abides by pemdas, the 2nd option is correct
    * with compound assignment, everything on the right is evaluated first!!!