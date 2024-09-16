#include <stdio.h>

#include "debug.h"

void dissassembleChunk(Chunk* chunk, const char* name) {
    printf("== %s ==\n", name);

    for(int offset = 0; offset < chunk->count;) {
        offset = dissassembleInstruction(chunk, offset);
    }
}

int dissassembleInstruction(Chunk* chunk, int offset) {
    printf("%04d ", offset);

    uint8_t instruction = chunk->code[offset];

    switch(instruction) {
        case OP_RETURN:
            printf("OP_RETURN\n");
            return offset + 1;
        default:
            printf("Unkown opcode %d\n", instruction);
            return offset + 1;
    }
}