// Author: Gregor Mersich
// Date: 13.07.2020

// Challenge: A program that, given two positive integers, will calculate and print the greatest common divisor of the two.

#include <stdio.h>
#include <iostream>

uint n1 = 0;
uint n2 = 0;
int sol = 0;

int main(){
    std::cout << "Gib die erste Zahl ein: " << std::endl;
    std::cin >> n1;
    std::cout << "Gib die zweite Zahl ein: " << std::endl;
    std::cin >> n2;

    if(n1 < n2){
        uint x = n1;
        n1 = n2;
        n2 = x;
    }

    for(int i = n2; i > 1; i--){
        if(!(n1%i)&&!(n2%i)){
            sol = i;
            break;
        }
    }

    if(sol > 0){
        std::cout << "Der größte gemeinsame Teiler lautet: " << sol << std::endl;
    }
    
    else{
        std::cout << "Es gibt keinen gemeinsamen Teiler." << std::endl;
    }

    return(0);
}