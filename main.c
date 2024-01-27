#include <stdio.h>
#include "NumClass.h"
int main(){


int number1 = 0;
int number2 = 0;

printf("enter a number1: ");
scanf("%d", &number1);

printf("enter a number2: ");
scanf("%d", &number2);


printf("prime:");
for(int i= number1; i<=number2;i++){
    if(isPrime(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("Armstrong:");
for(int i= number1; i<=number2;i++){
    if(isArmstrong(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("strong:");
for(int i= number1; i<=number2;i++){
    if(isStrong(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("palindrom:");
for(int i= number1; i<=number2;i++){
    if(isPalindrome(i)){printf("%d",i);}
    printf(" ");}
printf("\n");

return 0;
}