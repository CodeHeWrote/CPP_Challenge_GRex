#include <stdio.h>
#include <iostream>

int limit = 0;
int sum = 0;

int main()
{
    std::cout << "Nenne dein Limit: " << std::endl;
    std::cin >> limit;

    for(int i = 0; i <= limit; i++){
        if(!(i%3)||!(i%5)){
            sum += i;
        }
    }

    std::cout << "Die Summe lautet: " << sum << std::endl;

    return(0);
}