#include "Serializer.hpp"
#include <iostream>

std::string Serializer::serialize(const GameState& state) const {
    std::string text = "level=" + std::to_string(state.level) + ";hp=" + std::to_string(state.hp);
    std::cout << "serialize\t-> " << text << '\n';

    return text;
}