#ifndef BIN2DEC_H_
#define BIN2DEC_H_

#include <string>

class Bin2Dec{
    private:
        std::string binary;

    public:
        Bin2Dec(std::string b);
        int convert(std::string binary);
};

#endif