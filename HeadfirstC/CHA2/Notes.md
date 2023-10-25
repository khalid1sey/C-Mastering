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

    %p format : displays adress of a given variable. ex        int x = 10; 
                                                               printf("%p", x);

memory manupilation
    Every time you declare a variable, the computer creates  space for it somewhere in memory. 
    - If  you declare a variable inside a function like main(), the computer will store it in a section of  memory called the stack. 
    - If a variable is declared outside any function, it will be stored in the globals section of  memory.

strings
    strings are array of characters or sequence of alphanumeric words.
    ex char str[]; //str is declared as array c we dont know the size or the length of the string to adress this is there is (sizeof()) operator a function that returns size or length of a string the return value is integer.

    ex char str = "Hello World";
    int length = sizeof(str);

array variables
    When you create an array, the array variable can be used as a pointer to the start of  the array in memory. 
     example When C sees a line of code in a function like this
    char quote[] = "C is Awesome"; //the variable quote points to the first character which is "C"
    The computer will set aside space on the stack for each of  the characters in the string, plus the \0 end character. But it will also associate the address of  the first character with the quote variable. 
    Every time the quote variable is used in the code, the computer will substitute it with the address of  the first character in the string. In fact, the array variable is just like a pointer: