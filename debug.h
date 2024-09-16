#ifndef colang_debug_h
#define colang_debug_h

#include "chunk.h"

void dissassembleChunk(Chunk* chunk, const char* name);
int dissassembleInstruction(Chunk* chunk, int offset);

#endif