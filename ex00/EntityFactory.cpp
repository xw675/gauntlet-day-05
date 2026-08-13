#include <memory>
#include "Entity.hpp"
#include "EntityFactory.hpp"
#include "Orc.hpp"
#include "Bat.hpp"
#include "Boss.hpp"

std::unique_ptr<Entity> EntityFactory::make(const std::string& kind){
    if (kind == "orc")  return std::make_unique<Orc>();
    if (kind == "bat")  return std::make_unique<Bat>();
    if (kind == "boss") return std::make_unique<Boss>();
    return nullptr;
}