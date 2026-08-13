#pragma once

#include "Entity.hpp"

class Bat : public Entity {
public:
    std::string describe() const override { return "Bat (hp 8)";}
};