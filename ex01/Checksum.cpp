#include "Checksum.hpp"
#include <iostream>

unsigned Checksum::of(std::string packed) const {
    unsigned sum = 0;
    for (unsigned char byte : packed) {
        sum += byte;
    }
    std::cout << "checksum\t-> 0x" << std::uppercase << std::hex << sum << std::nouppercase << std::dec << '\n';

    return sum;
}
