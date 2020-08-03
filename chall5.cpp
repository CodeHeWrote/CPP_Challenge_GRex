#include <stdio.h>
#include <iostream>

uint limit;

bool isPrime(uint q);
void pairCheck(uint q);

int main(){

    std::cout << "Please enter your limit: " << std::endl;
    std::cin >> limit;

    std::cout << "These are all the Sexy Prime Pairs: " << std::endl;

    for(uint i = 3; i <= (limit - 6); i += 2){
        
        if(isPrime(i)){
            pairCheck(i);
        }
    }


}

bool isPrime(uint q){
    for(uint i = 3; i < q; i+=2){
        if(!(q%i)){
            return false;
        }
    }

    return true;
}

void pairCheck(uint p){
    uint q = p + 6;

    if(isPrime(q)){
        std::cout << p << "   " << q << std::endl;
    }

}