// Author: Gregor Mersich
// Date: 03.08.2020

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

uint b;
uint s;
int c;
std::vector<uint> v;

bool add_check(uint &sol, std::vector<uint> nums);


int main(){
    std::cout << "How many numbers do you want to compare?" << std::endl;
    std:: cin >> c;

    for(int i = 1; i <= c; i++){
        uint num;
        std::cout << "Number " << i << ": " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());

    b = v.back();
    s = b;

    while(add_check(s, v)){

    }
    // std::for_each(v.begin(), v.end(), [](uint &n){std::cout << n << std::endl;});

    std::cout << "The solution is: " << s << std::endl;


}

bool add_check(uint &sol, std::vector<uint> nums){
    sol += b;
    int check = 0;

    std::for_each(nums.begin(), nums.end(), [&check, &sol](uint &n){check += (sol%n);});

    return check;
}