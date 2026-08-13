#pragma once

class Orc; class Bat; class Boss;   // forward declarations: visit only takes references
struct Visitor {
    virtual void visit(Orc&)= 0;
    virtual void visit(Bat&)= 0;
    virtual void visit(Boss&)= 0;
    virtual ~Visitor() = default;
};