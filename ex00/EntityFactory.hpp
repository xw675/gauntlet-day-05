#pragma once

#include "Entity.hpp"

class EntityFactory {
public:
    static std::unique_ptr<Entity> make(const std::string& kind);
};