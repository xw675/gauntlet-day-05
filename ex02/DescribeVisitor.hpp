#pragma once
#include <iostream>
#include "Visitor.hpp"
#include "Orc.hpp"
#include "Bat.hpp"
#include "Boss.hpp"

struct DescribeVisitor : Visitor {
    void visit(Orc& o) override { std::cout << o.describe() << '\n'; }
    void visit(Bat& b) override { std::cout << b.describe() << '\n'; }
    void visit(Boss& b) override { std::cout << b.describe() << '\n'; }
};