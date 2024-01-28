#include <stdio.h>
#include "NumClass.h"

//A helper function, which helps to divide a number to get to the left digit
int powerOf10(int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= 10;
    }
    return result;
}  
 
int isPalindrome(int x) {
    int counter = 0;
    int y = x;
    int z = x;
    int p = x;

    while (y >= 1) { // how many digits the number has
        y /= 10;
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        int h = p % 10; // start at the last digit
        int b = (z / powerOf10(counter - 1 - i)); // start at the first digit

        if (h != b) {
            return 0;
        }

        p /= 10;
        z = (z % powerOf10(counter - 1 - i));
    }

    return 1;
}


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
 
 int isArmstrong(int x) {
    int counter = 0;
    int y = x;
    int z = x;

    while (y >= 1) {// how many digits the number has
        y /= 10;
        counter++;
    }

    int arm = 0;

    for (int i = 1; i <= counter; i++) {
        int sum = z % 10;
        arm += power(sum, counter);
        if (x < arm) {
            return 0;
        }
        z /= 10; 
    }

    return (arm == x) ? 1 : 0;
}
