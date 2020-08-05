// Author: Gregor Mersich
// Date: 05.08.2020

// Challenge: A program that prints all Armstrong numbers with three digits.

#include <stdio.h>
#include <iostream>
#include <math.h>

const int limit = 999;
int o = 0;
int t = 0;
int h = 0;

int numSum(int);

int main() {

    for (int i = 0; i <= limit; i++) {
        if (i == numSum(i)) {
            std::cout << i << std::endl;
        }
    }

    return(0);

}

int numSum(int num) {
    int p;
    int sum = 0;

    if (num < 10) {
        p = 1;
    }
    else if (num < 100) {
        p = 2;
    }
    else {
        p = 3;
    }

    for (int i = 1; i <= p; i++) {
        int x = num % 10;
        sum += pow(x, p);
        num /= 10;
    }

    return sum;
}