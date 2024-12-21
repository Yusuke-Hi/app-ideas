#include "Bin2Dec.hpp"
#include <string>
#include <iostream>

int main(){
    std::string b;
    Bin2Dec b2d(b);
    std::cout << b2d.convert(b) << std::endl;
}