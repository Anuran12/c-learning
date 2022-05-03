# include<stdio.h>

int main() {

    int age;

    printf("enter age ");

//for input we use scanf function
    scanf("%d", &age);
/*for integer %d
  for real number %f
  for character %c

 IMPORTANT ** & is use for address the variable ** 
*/
    printf("age is : %d", age);

    return 0;
}