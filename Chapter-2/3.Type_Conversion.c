# include<stdio.h>

int main() {

// int *operator* int => int
    printf("%d\n", 2 * 2);//output should be integer-"%d"

// int *operator* float => float
    printf("%f\n", 2 * 2.1);//output shuld be float-"%f"

// float *operator* float => float
    printf("%f\n", 2.1 * 2.2);//output shuld be float-"%f"


//EXCEPTIONS
    printf("%f\n", 3.0/2);//don't put 3/2

    int a = (int) 1.999999;//explicit conversion
    printf("%d\n", a);

    return 0;
}