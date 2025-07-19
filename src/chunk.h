// sequenes of byte code
#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
    OP_RETURN, // Return from the current function.
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;


} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);


#endif
