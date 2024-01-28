#include <stdio.h>
#include "NumClass.h"

//A helper function that calculates strongly
int power(int base, int exponent) {
    if (exponent == 0) {return 1;}
    
    else {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}
//A helper function that does the recursion
int isArmstrongHelper(int x, int original, int counter, int arm) {
    if (x == 0) {
        return (arm == original) ? 1 : 0;
    } else {
        int sum = x % 10;
        return isArmstrongHelper(x / 10, original, counter, arm + power(sum, counter));
    }
}

int isArmstrong(int x) {
    int y = x;
    int counter = 0;

    while (y >= 1) {
        y /= 10;
        counter++;
    }

    return isArmstrongHelper(x, x, counter, 0);
}
//A helper function, which helps to divide a number to get to the left digit
int powerOf10(int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= 10;
    }
    return result;
}
//A helper function that does the recursion
int isPalindromeHelper(int p, int z, int counter) {
    if (counter <= 1) {
        return 1;
    } else {
        int h = p % 10;// start at the last digit
        int b = (z / powerOf10(counter - 1)) % 10;// start at the first digit

        if (h != b) {
            return 0;
        }

        return isPalindromeHelper(p / 10, z / 10, counter - 2);
    }
}



int isPalindrome(int x) {
    int counter = 0;
    int y = x;
    int z = x;

    while (y >= 1) {// how many digits the number has
        y /= 10;
        counter++;
    }

    return isPalindromeHelper(z, z, counter);
}
