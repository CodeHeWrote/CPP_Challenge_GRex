// Author: Gregor Mersich
// Date: 13.07.2020

// Challenge: A program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.

#include <stdio.h>
#include <iostream>

int limit = 0;
int sum = 0;

int main()
{
    std::cout << "Nenne dein Limit: " << std::endl;
    std::cin >> limit;

    for(int i = 3; i <= limit; i++){
        if(!(i%3)||!(i%5)){
            sum += i;
        }
    }

    std::cout << "Die Summe lautet: " << sum << std::endl;

    return(0);
}