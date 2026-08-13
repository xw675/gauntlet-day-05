#pragma once

#include "Entity.hpp"
#include <memory>

class EntityFactory {
public:
    static std::unique_ptr<Entity> make(const std::string& kind);
};