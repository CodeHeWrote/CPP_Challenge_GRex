// Author: Gregor Mersich
// Date: 03.08.2020

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

uint num;
bool isPrime(uint q);

int main(){
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> num;

    if(num%2 == 0){
        num -= 1;
    }
    else{
        num -= 2;
    }

    while(!isPrime(num)){
        num -= 2;
    }

    std::cout << "The largest prime smaller than your given number is: " << num << std::endl;

    return(0);

}

bool isPrime(uint q){
    for(int i = 3; i < q; i+=2){
        if(!(q%i)){
            return false;
        }
    }

    return true;
}