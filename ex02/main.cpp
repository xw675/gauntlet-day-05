#include <memory>
#include <vector>
#include <iostream>
#include "DescribeVisitor.hpp"
#include "TotalHpVisitor.hpp"


int main() {
    DescribeVisitor describe;
    TotalHpVisitor  totalHp;

    std::vector<std::unique_ptr<Entity>> entities; 
    entities.push_back(std::make_unique<Orc>());
    entities.push_back(std::make_unique<Bat>());
    entities.push_back(std::make_unique<Boss>());

    std::cout << "-- describe --\n";
    for (auto& e : entities) e->accept(describe);
    std::cout << "-- total hp --\n";
    for (auto& e : entities) e->accept(totalHp);

    std::cout << totalHp.total << '\n';
    }