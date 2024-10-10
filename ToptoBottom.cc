//Write a program that reads two numbers x and y, and prints all 
//numbers between x and y (or between y and x), in decreasing order.
//P59875
//Gabriel Budimir Santana

#include <iostream>

int main() {

int n1;
int n2;

std::cin >> n1;
std::cin >> n2;

    for( ;n1 > n2 || n2 > n1; ){
        if(n1 > n2) {
            for( ;n1 > n2;n1--){ 
            std::cout << n1 << std::endl;
            }
        }
        if(n2 > n1) {
            for( ;n2 > n1;n2--){
            std::cout << n2 << std::endl;
            }
        }
    }
    std::cout << n1 << std::endl;
    return 0;
}