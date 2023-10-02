# structure
1. pre-processor directives. At least one preprocessor directive in all programs
   1. they all begin with #. This is the shebang
   2. notably #include statement
   3. #define (for defining variables)
   4. what is the pre-processor?
      1. part of the compiling process
      2. this allows us direct access to configure the compilation process
2. declarations
    * some dont require declarations
      * python
    * for declarations
        * global variables
3. Main function
    * all C programs require a main function
    * where execution begins, and ends
    * listed first among many potential functions
    * 2 main sections:
      * local declarations (local variables)
      * executable statements
      * these two do not overlap
    * both of these make up the body of the main function
4. other functions
    * other function definitions

* unlike in python, declaration and execution are separate
* we will use the VI text editor
  * `vi (filename)`
  * vi modes
    * what mode am I in in VI? how get between modes?
    * watch the VI tutorials
    * starts in command mode/normal mode
      * execute commands
      * to run any command, you must do `:`. This opens the little command line
      * to return to command mode, use esc
      * you can save here too
        * `w` saves
        * `wq` saves and quits
      * headers
        * `hlb` command inserts the header for labs
        * `hhw` command for homework header
        * these are necessary for program documentation
        * must be in vi vocaereum
        * must place cursor at newline at the top of the file
    * insert mode
      * enter insert mode by pressing `i` in execute mode
* to compile a c program, run `gcc (c filename)`
  * when you successfully compile, you get the a.out executable
  * this can be run using ./a.out

## Computing Basics
* software runs on hardware, hardware is limited

### Development Process
#### prototyping
1. determine objectives
2. develop
3. refine
4. demonstrate

#### Waterfall
1. requirements
2. design
3. implementation
4. verification
5. maintenance

### Processors
performs and coordinates operations
made up of
* registers: local CPU memory next to processor for loading data
* ALU: arithmetic logical unit, do logic
* control unit: manage and track resources in use, determine what resources are free. Reads program instructions and optimizes execution
* internal interconnections: connects all above

does all this in the instruction cycle

#### Instruction cycle
* repeated for every program instruction
1. fetch instructions (get instructions from memory)
2. interpret instructions
3. fetch data necessary for program to run from memory
4. process data (might need ALU)
5. write the data to memory (variable assignments and stuff)
This repeats for all instructions!

### Primary memory
* RAM
* stores data & instructions
* fast IO response time with CPU registers
* not all program data can always be present in memory

### Secondary memory
* storage, ssd, hdd
* much higher storage space
* much lower response time

### memory hierarchy
* speed
  1.  CPU registers
  2.  primary memory
  3.  secondary memory
* capacity
  1.  secondary memory
  2.  primary memory
  3.  cpu registers

#### why secondary slower?
* greater capacity makes it harder for computer to locate memory addresses
* some secondary memory is mechanical, much slower
* why have a small ram and big secondary?
  * too expensive, not really worth it, unless it is for a supercomputer

## languages
* natural languages
  * human language, how we talk
  * not fit for computing
    * ambiguous
    * multiple meanings for individual words
* machine languages
  * binary
    * not human readable
* high/low level programming languages
  * high: closer to natural language, hardware agnostic
  * low: designed for specific hardware
    * require programmer to consider small steps
    * manual memory

### 4 steps of creating and running programs
1. write or edit source code
2. save changes
3. compile the source code
4. test run the executable file

#### compiling process
* most of the compiling process is not important to us
* with the exception of preprocessor, directives
  * stuff like #include

### Program development
* develop the algorithm developed before you ever sit down to write a line of code
* always plan before programming
* when planning, plan the overall program with a structure chart
* individual program parts can be enumerated by a flowchart

#### Flowchart symbols
* curvy rectangle: terminal, start end of program
* rectangle: assignment/expression: including function calls
* parallelogram: input
* diamond: conditional
* hexagon: repetition, loop
* circle: connector, convention for connecting end of flowchart to start of another

