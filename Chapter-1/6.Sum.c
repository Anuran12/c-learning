# include<stdio.h>

int main() {

//denote two variables
    int a, b;

//input the value of 'a'
    printf("enter a\n");
    scanf("%d", &a);

//Input the value of 'b' 
    printf("enter b\n");
    scanf("%d", &b);

//addition of the two variables
    int sum = a + b;

//print the sum
    printf("the sum is : %d", sum);
    
    return 0;
}