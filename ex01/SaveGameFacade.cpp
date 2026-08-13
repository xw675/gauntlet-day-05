#include "SaveGameFacade.hpp"
#include <iostream>

void SaveGameFacade::save(const GameState& state, const std::string& path){
    std::string text   = m_serializer.serialize(state);   // 1
    std::string packed = m_compressor.compress(text);     // 2
    unsigned    sum    = m_checksum.of(packed);           // 3
    m_writer.write(path, packed, sum);                    // 4
    std::cout << "save complete\n";
}