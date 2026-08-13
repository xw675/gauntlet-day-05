#pragma once
#include <string>
#include "GameState.hpp"

class Serializer {
public:
    std::string serialize(const GameState& state) const;
};