#include <stdio.h>
#include "NumClass.h"
int main(){


int number1 = 0;
int number2 = 0;

printf("enter a number1: ");
scanf("%d", &number1);

printf("enter a number2: ");
scanf("%d", &number2);


printf("The Prime numbers are:");
for(int i= number1; i<=number2;i++){
    if(isPrime(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("The Armstrong numbers are:");
for(int i= number1; i<=number2;i++){
    if(isArmstrong(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("The Strong numbers are:");
for(int i= number1; i<=number2;i++){
    if(isStrong(i)){printf("%d",i);}
    printf(" ");}
    printf("\n");

printf("The Palindromes are:");
for(int i= number1; i<=number2;i++){
    if(isPalindrome(i)){printf("%d",i);}
    printf(" ");}
printf("\n");

return 0;
}