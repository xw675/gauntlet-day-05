#pragma once
#include <string>

class Writer {
public:
    void write(const std::string path, std::string packed, unsigned sum) const;
};