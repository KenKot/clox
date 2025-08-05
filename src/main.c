#include <stdio.h>

#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char *argv[]) {
    initVM();


    Chunk chunk;
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2); // returns the index for assocated value in the constant pool array
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);
    writeChunk(&chunk, OP_RETURN, 123);

    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);

    freeVM();
    freeChunk(&chunk);
    return 0;
}
