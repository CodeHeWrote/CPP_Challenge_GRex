// Author: Gregor Mersich
// Date: 04.08.2020

// Challenge: A program that prints all abundant numbers and their abundance, up to a number entered by the user.

#include <stdio.h>
#include <iostream>
#include <iomanip>

int limit;

void isAbundant(int num);

int main(){
    std::cout << "Please enter your limit: ";
    std::cin >> limit;
    std::cout << std::left << std::setw(10) << "\nNumber" << std::setw(10) << "Abundance" << std::endl;

    for(int i = 1; i <= limit; i++){
        isAbundant(i);
    }

    return(0);
}

void isAbundant(int num){
    int divSum = 0;
    
    for(int i = 1; i <= (num/2); i++){
        if(num%i == 0){
            divSum += i;
            }
    }

    if(divSum > num){
        std::cout << std::left << std::setw(10) << num << std::setw(10) << (divSum - num) << std::endl; 
    }

}