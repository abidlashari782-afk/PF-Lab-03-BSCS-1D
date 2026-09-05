#include<stdio.h>

int main (){
    int x,y;
    printf("Inpute the value of x: ");
    scanf("%d",&x);
    printf("Inpute the value of y: ");
    scanf("%d",&y);
    x= x+y;
    y=x-y;
    x=x-y;
    
    printf("Swaped Values\n");
    printf("x = %d \n",x);
    printf("y = %d \n",y);
}