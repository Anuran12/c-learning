# include<stdio.h>

int main() {

//RULE => Declare variable before using it

// VALID EXAMPLES
    int a = 18;
    int b = a;
    int c = b * 3;
    int d = 1, e;

// INVALID EXAMPLES
 /*   int oldAge = 18;
    int newAge = oldAge + years;
    int years = 2;*/ //we have to declare variables before using it

// VALID EXAMPLES
    int a, b, c;
    a = b = c = 2;

// INVALID EXAMPLES
/*    int x = y = z = 2;*/
//we can't use and declare variables both togather

    return 0;
}