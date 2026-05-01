
#include <stdio.h>
#include <stdlib.h>

/*
 * structure definition
 */
typedef struct _functions {
    int (*operations[3])(int,int);   // function pointer
    char symbols[3];                 // function symbol
} Functions;

/*
 * function headers
 */
int add( int i, int j );
int subtract( int i, int j );
int multiply( int i, int j );
Functions *setFunctions( void );

/*
 * populate the struct with function pointers
 */
Functions *setFunctions( void ) {
    Functions *functions = malloc(sizeof(Functions));
    functions->operations[0] = add;
    functions->symbols[0] = '+';
    functions->operations[1] = subtract;
    functions->symbols[1] =  '-';
    functions->operations[2] = multiply;
    functions->symbols[2] = '*';
    return functions;
}

/*
 * integer operation implementations
 */

int add( int i, int j ) {
    return i+j;
}

int subtract( int i, int j ) {
    return i-j;
}

int multiply( int i, int j ) {
    return i*j;
}

/* 
 * main: creating and testing structures containing function pointers
 */
int main( void ) {

    Functions *myFunctions = setFunctions();

    int num1=2, num2=3;   // arguments 2,3

    // write code to loop through the 3 functions and print an appropriate sum for each, eg. "2 + 3 = 5"
    for(int i = 0; i < *functions.length; i++)
    {
        
    }

    // use the structure symbol and function-pointer data rather than hard-coding values

    free(myFunctions);
    return 0;
}

