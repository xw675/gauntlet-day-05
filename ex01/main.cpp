#include "SaveGameFacade.hpp"
#include "GameState.hpp"

int main() {
    SaveGameFacade save;
    save.save(GameState{3, 27}, "save.dat");   // one call, correct order guaranteed

    return 0;
}