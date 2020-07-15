// Author: Gregor Mersich
// Date: 13.07.2020

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