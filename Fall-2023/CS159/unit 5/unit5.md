# FUNCTIONS!
* identify reused subproblems and divide them to their own functions.
* top-down 
  * program, test, verify every function as you create them
  * create functions before the main function
* bottom up
  * create functions after all the code is in main
  * redundancy
  * make mistakes
  * bad practice
* make the blueprint THEN build the structure'
* all the functions should do one thing, at least for now

* pow(x,y);
  * call
  * requesting function services
  * this is the issuing of the call
  * the call is an executable statement
  * pow is the called functon
  * if the fucntion is called in main, main is the calling function
  * x, y are the function parameters

  * return
    1. control: the function must return control to the main function after executing. 
       1. while the function pow is running, it temporarily takes control away from the main thread. 
    2. value: the function can return at maximum one value. You could also return void

  *  void greeting(); <- declaration
  *  void greeting(){} <- definition

### Function declarations
* these must go in global declaration sections
* this means it can be used anywehre in the program
* functions can only call other functions if tgey are delcared globally
* 3 parts to declaration
  * left to right:
    1. return datatype
    2. function name
    3. parameters (int x, int y);

### function types
1. has parameters and return
   1. many math.h function
2. has return and no input function
   1. input functions, scanfs
3. has no return value but has parameters
   1. output function
4. has no returns, no parameters
   1. menu, welcome, output without data

### Midterms
thurs october 12
modnay nov 13
final tuesday dec 12

### Passing by value vs reference
* pass by value:
  * copy of data shared between called and calling functions
  * usually done with basic data types like ints and floats
  * thus when data is copied to function, it doesnt change the data in the calling function
* pass by reference: 
  * pass the ppointer to the value
  * what th efunction does to alter those values alters their values in the calling function

### structure charts
* width over depth
* main should be valued above other functions

