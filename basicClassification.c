#include "NumClass.h"

int isPrime(int x){

if(x == 1){return 1;}
if(x<1){return 0;}

for (int i = 2; i < x; i++){if(x%i == 0){return 0;}}

return 1;
}

int isStrong(int x) {
    int sum = 0;

    while (x >= 1) {
        int rightDigit = x % 10;
        int factorial = 1;

        for (int i = 1; i <= rightDigit; i++) {factorial = factorial * i;}// Calculate the factorial of rightDigit

        sum += factorial;

        if (sum > x) {return 0;}

        x /= 10;
    }

    return (sum == x) ? 1 : 0;// if sum equal to x, it return 1 else 0
}
