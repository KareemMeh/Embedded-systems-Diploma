#include <stdio.h>

int main()
{
    float a , b ,c;
    printf("enter Three Numbers: \n");
    scanf("%f%f%f" , &a, &b, &c);
    if (a >=b && a >=c)
    {
        printf("Largest number is %.2f", a);
    }else if(b >=a && b>=c){
        printf("Largest number is %.2f", b);
    }else{
        printf("Largest number is %.2f", c);
    }
}