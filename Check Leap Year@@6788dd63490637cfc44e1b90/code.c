#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%400==0){printf("Leap Year");}
    else if(a%100==0){printf("Leap Year");}
    else{printf("Not aLeap Year");}
    return 0;
}