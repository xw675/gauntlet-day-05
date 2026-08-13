#include "Writer.hpp"
#include <fstream>
#include <iostream>

void Writer::write(const std::string path, std::string packed, unsigned sum) const {
    std::ofstream out(path, std::ios::binary);
    out << packed;
    out.close();
    
    std::ifstream in(path, std::ios::binary);
    std::string onDisk((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());

    unsigned check = 0;
    for (unsigned char byte : onDisk) {
        check += byte;
    }
    if (check != sum) {
        std::cout << "write\t-> CHECKSUM MISMATCH\n";
    }
    std::cout << "write\t-> " << path << " (" << onDisk.size() << " bytes)\n";
}