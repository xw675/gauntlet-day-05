#pragma once

#include "Entity.hpp"

class Bat : public Entity {
public:
    std::string describe() const override { return "Bat (hp 8)";}
    int hp() const{ return 8; }
    void accept(Visitor& v) override{ v.visit(*this); }
};