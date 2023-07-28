#include <stdio.h>

int main(){
    int i;
    printf("Enter an inteager you want to chek : ");
    scanf("%i", & i);
    if(i % 2 == 0){
        printf("%d is  Even", i);
    }else{
        printf("%d is  Odd", i);
    }
}