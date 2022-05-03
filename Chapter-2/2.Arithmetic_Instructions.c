# include<stdio.h>
# include<math.h>//for power operation.

int main() {

    int a = 2, b =3;

    int sum = a + b;//'a' and 'b' is operands and '+' is a operator .
//'sum' is a new variable where the value of 'a + b' is being stored.

    int multiply = a * b;// '*' is a operator.

/*
addition       => +
substraction   => -
multiplication => *
division       => /
modular        => %
*/


//single variable on the left hand side
// example
    int c = b - a;//here on the left hand side we declare a single variavle which is 'c'.


// VALID EXAMPLES
    int d = b + c;
    int e = b * c;
    int f = b/c;

//INVALID EXAMPLES
/*
    int b + c = d;
    int d = bc;
    int d = b^c;
*/

//for power operation
    int power = pow(a,b);


//example of modular operator
    int m = 3%2; //Returns remainder for integer
    printf("%d", m);//result is 1.
    return 0;
}