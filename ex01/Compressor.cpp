#include "Compressor.hpp"
#include <iostream>

std::string Compressor::compress(std::string text) const {
    std::string packed;
    bool value = false;
    for (char c : text) {
        if (c == '=') { value = true; continue; }
        if (c == ';') { value = false; packed += ';'; continue; }
        if (value) { packed += c; }
    }
    std::cout << "compress\t-> " << packed << " (" << text.size() << " -> " << packed.size() << " bytes)\n";

    return packed;
}