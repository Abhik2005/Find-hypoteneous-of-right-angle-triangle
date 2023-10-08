#include<stdio.h>
#include<math.h>
int main()
{
    float b , h , hyp ;
    printf("Enter the base and height respectively: \n");
    scanf("%f %f",&b,&h);
    hyp = sqrt(b*b + h*h);
    printf("The value of the hypotaneous is: %f",hyp);
    return 0;
}