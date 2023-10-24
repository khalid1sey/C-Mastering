c gives you a lot more control over how your computer program uses the computers memory.

pointer(reference) is adress of a piece of data in memory.(numeric address in actual process memory).
 Each process is given a simplified version of memory to make it look like a single long sequence of bytes.

reasons why pointer is used
    1.instead of passing around the whole copy of data,you can just pass a pointer.
    2.You might want two pieces of code to work on the same 
    piece of data rather than a separate copy.

operators in pointer
    &(address of) - displays or shows a variables or a pointers adress,its something like hexadecimal number. example int x = 10;    int *y = &x;

    *(derefrence) - used to read or write value for a pointer variable.

    *(pointer) - its sets a variable as a pointer  example int *pointer;

    %p format : displays adress of a given variable.

memory manupilation
    Every time you declare a variable, the computer creates  space for it somewhere in memory. 
    - If  you declare a variable inside a function like main(), the computer will store it in a section of  memory called the stack. 
    - If a variable is declared outside any function, it will be stored in the globals section of  memory.