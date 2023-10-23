## Prefix and Postfix operators
* methods to change variable value by one
* x++;
* x--;
* unary operator, takes only one operand.
* those are postfixes
* prefixes work just the same:
* ++x;
* --x;
* when does it make a difference which we use?
* 2 variables
  * x=2, a=?
  * a=x++;
    * in this case, the current value of x is saved to a, THEN x's value is incremented
    * x = 3, a = 2
  * a=++x;
    * the order is flipped. x is incremented, then that value is assigned to a
  * so prefix: increment then use
  * postfix: use then increment
* VI formatting command to get rid of erroneous tabs, put tabs where they should be
  * `gg=G`
* VI command to show line numbers
  * `set nu`

* y = ++x - x++ - --x
* VARIABLE CANNOT BE MODIFIED MORE THAN ONCE IN ONE EXPRESSION
* if an operation is undefined, the behavior described is missing
  * that means behavior could differ on different ocmputers. Thats no good
* you can have multiple updates in a single expression, they must all just be to different variables

## Data type operations
* Single type expression: operations between two of the same datatype results in same datatype
* Mixed type expression: cannot be directly evaluated. Must be first converted to single type expressions
  * int added to float results in float
* this is based on type ranking
* lowest to hightest
  1.  char
  2.  int
  3.  long
  4.  long long
  5.  float
  6.  double
  7.  long double
* the lower level type is always converted to the higher level type. These conversions are safe
  * the mathematical meaning of the value before and after the conversion is the same
* these are implicit conversions
  
### explicit type conversion
* manually convert one datatype to another
* we do this by placing thesired datatype inside parentheses in front of the variable
* (float)3/2
  * this is a mixed type expression, it will evaluate to float
  * evaluates to 1.5
* (float)(3/2)
  * evaluates to 1.0
  * converts integer quotient to a float. THe integer result is 1
* unsafe maybe conversion, the values are not mathematically the same necessarily

### assignment conversion
* data type on right is an integer
* data type on left of assignent operator is a float
* declared beforehand
* the integer would get assigned as a float, it gets promoted to float
* higher = lower
  * lower promoted to higher: safe
* lower = higher
  * higher demoted to lower: unsafe

* when we try to format a string with a variable using the wrong formatting code (mismatching data types), we ge undefined behavior

* suppose we do 
  * float x;
  * float y = 1.34;
  * x = (int)y
* x will be 1.0