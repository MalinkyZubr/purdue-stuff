## Declarations
* 2 parts of a declaration
  * identifier: the name of the variable or function, constants
    1. meaningful. Better readability
       1. constants are uppercase
       2. non-constants are lowercase, or camel-case
    2. syntactically correct
       1. begin with alpha character
       2. all other characters can be alphanumeric or underscore
       3. constants should be capitalized
       4. 63 characters is the maximum to which a variable is meaningful
       5. cannot duplicate a reserved words
  * datatype: the type that will be assigned to the variable
    * how is the data stored?
    * how much memory does it take?
    * 2 family
      * integer data:
        * whole numbers
        * int: range from -2.14 billion to 2.14 billion. Number in that range? int works
        * long: larger range
        * longlong: biggest range
        * short: 32000 -32000 range (small memory)
        * char: character. Stored in computer memory as integers. Act as int, 1,2,3 like a,b,c. According to ASCII table, each letter also represents a number
        * bool: true or false. Just use an int for this, 1 and 0
      * floating point data:
        * concerns:
          * precision
          * range
            * more of either, more memory
        * float: 6 digits precision 
        * double: bigger range more memory, 13 digits precision
        * longdouble: biggest memory most range, 31 digits precision
    * how an integer is transformed to binary is different from floats
    * if you use the floating point method with an integer, the value changes
    * operations are dependent on datatype: floating or decimal?
* variable: named and typed location in memory of computer which represents a value
* variable declaration syntax
  * (datatype) (identifier) = (value);
  * (datatype) (identifier);
* when we create a variable we are allocating stack memory to that variable
* we are saying that block of memory is only for the variable we declared
  * if we dont assign a value at creation, we dont actually know exactly whats there
  * if we do, this isnt a worry

### constants
* literal constant
  * circumference = 2 * 3.14 * r
  * 2 and 2.14 are literal constants. They never change ever
  * these are numbers we just type in at a point in our program
* symbolic constant/defined constant
  * variables assigned to a constant value
  * `#define (variablename) (variable value)`
  * no =, because = manipulates memory. These variables are assigned before runtime, during compilation!, so they dont need to manipulate memory
  * no semicolon
  * no type assignment
    * the datatype is dynamically assigned at compilation?
      * why cant the rest of the program do that?
  * name should all be uppercase
* assigned by the preprocessor directive #define (variable name) (value)
* improves readability
* improves maintainability
* remember, when the compiler sees an error iinvolving a function or variable, the error is referring to what the variable represents, not necssarily the statement at which the error occurs

* how to print variables in the strings?
* "(variable name)" prints (variable name)
* course standards prohibit declaration of global variables. This introduces possible unanticipated interactions between differen tparts fo the code. Maybe race conditions too

### Output Functions -> stdio dependent
* printf("(format string)", data_list)
  * "hello world" is the format string
  * data list includes data to be put into the string for output
    * "%d": holds place for value in the datalist 
    * this is the placeholder. all begin with %
    * the "d" is the conversion code
    * we can select from a list. THe correct one depends on the datatype of the value to be subsituted
      * d: integer family
        * passing a character to this will print the corresponding ASCII code
      * f: floating family
      * c: char family (representing value like A)
* we must also consider size for these variable insertions
* int family:
  * %d int
  * %ld long int
  * %ldd long long int
* float family:
  * %f float
  * %lf long float
  * %Lf long long float
* formatted output
  * width modifier
    * "%7d
    * 7 is the width modifier
    * the width modifier inserts and equal number of spaces after the end of the string (before the insertion statement)
    * then when the data is inserted, it will overwrite however many spaces are equal to its length, starting from the right side
    * this will basically pad the data when printing to make it a certain number of characters long
    * this aligns the data on separate lines
    * what if the width of the data is longer than the data reserved?
      * nothing too bad, but there is no alightnment among datapoints
    * that is right alightment
    * what about left alignment?
    * "%-7d"
      * flag
      * turns the right alignment to left alignment
* precision modifiers
  * "%.2f"
  * .2 indicates 2 decimal places
  * .5 would indicate 5 decimal places
  * doing this will not edit actual value, keep in mind!
* what about precision and alignment?
  * "%7.2f"
    * width modifier 7, precision of 2 decimal places, right alignment
* print a % sign?
  * double them, %%
* you could also use an insert flag for a character, and subsitute an ASCII value ot print interesting things
* what if we want to represent precision using a variable??
  * printf("%18.*f", decPlaces, value)
  * the * is replaced by decPlaces
  * ("%*.*f", x, y, z) width x precision y value z
* * mutliple values
  * printf("%d\n%d", 12, 22)

### Input functions
* scanf("(format string)", address_list)
* these are memory addresses, we must put the addresses for the data we want to store in the address list
* this is where the data will be stored
* to get the address of a variable, do &(variablename)
  * returns the pointer
* when the address is put in the address list, user input is put in the address it is assigned
* what if data inputted is bigger than the memory allocated? buffer overflow
* scanf prints nothing, so usually printf will print the input prompt, and scanf will take input
* scanf("%d %f", &x, &y)
* takes the int d, and float f (separated by space in user input) and parses those values to the addresses of x and y
* for formatting, of long types, you leed size and code for formatting
  * %Lf
    * long float

### Things to note
* calculations can be done in the list of arguments for printf
* the . in a floating point number does NOT COUNT for the space modifier in printf formatting. the . doesnt count as a space
* the main function MUST be an int
* the declaration and executable statements are the main body of the function
* a precision modifier can only be used for numeric output!!