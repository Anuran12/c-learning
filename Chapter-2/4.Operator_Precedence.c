# include<stdio.h>

int main() {

//Operator precedence :-
//[priority order] *,/,%  >  +,- 
    int a = 4 + 9 * 10;//at first (9 * 10). then (4 + 90) = 94.


//Associativity(for same precedence). RULE- Left to Right
    int b = 4 * 3 / 6 * 2;//(4*3) -> (12/6) -> (2*2) = 4

//EXCEPTION
    int c = 5*(2/2)*3;//at first do the operation between brackets
//(5*1*3) -> (5*3) = 15


    return 0;
}