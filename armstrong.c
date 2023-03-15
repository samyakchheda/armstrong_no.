#include<stdio.h>
void main(){

    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int arm=0;
    while (n!=0)
    {
       r=n%10;
       arm=arm+r*r*r;
       n=n/10;

    }
    if(arm==temp){
        printf("%d is a Armstrong No.",arm);
        
    }
    else{
        printf("It is not a Armstorng No.");
    }
}
