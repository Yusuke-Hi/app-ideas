#include "Bin2Dec.hpp"
#include <string>
#include <stdexcept>

Bin2Dec::Bin2Dec(std::string b): binary(b) {//e.g. b = "010010"
    for (int i = 0; i < binary.size(); i++){
        if (binary.at(i) != '0' || binary.at(i) != '1'){
            throw std::runtime_error("Input string contains all but 0 and 1.");
        }
    }
}

int Bin2Dec::convert(std::string binary){
    
}


