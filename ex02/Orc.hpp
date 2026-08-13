#pragma once

#include "Entity.hpp"

class Orc : public Entity {
public:
    std::string describe() const override{ return "Orc (hp 40)"; }
    int hp() const{ return 40; }
    void accept(Visitor& v) override{ v.visit(*this); }  // first dispatch; visit(*this) is the second
};