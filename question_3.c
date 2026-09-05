#include<stdio.h>
int main(){
    int km,cm;
    printf("conversion of kilometers into centimeter\n");
    printf("Enter the distance in Kilometer: ");
    scanf("%d",&km);
    cm=km*100000;
    printf("%dkm is equals to %dcm",km, cm);
}