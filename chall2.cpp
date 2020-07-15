// Author: Gregor Mersich
// Date: 13.07.2020

#include <stdio.h>
#include <iostream>

uint n1 = 0;
uint n2 = 0;

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
        
    }
}