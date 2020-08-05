// Author: Gregor Mersich
// Date: 05.08.2020

// Challenge: A program that prints the list of all pairs of amicable numbers smaller than 1,000,000.


#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

const int limit = 1000000;

int divSum(int num);
std::map<int, int> numMap;

int main()
{
    for (int i = 1; i < limit; i++)
    {
        if (numMap.find(i) != numMap.end()) {
            continue;
        }

        int a = i;
        int b = divSum(a);

        if (a == b) {
            continue;
        }

        if (a == divSum(b)) {
            numMap.insert(std::make_pair(b, a));
            std::cout << a << "   " << b << std::endl;
        }
    }
}

int divSum(int num)
{
    int sum = 0;
    for (int i = 1; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}