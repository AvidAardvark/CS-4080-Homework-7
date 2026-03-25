typedef enum {
  OP_CONSTANT,
  OP_CONSTANT_LONG, 
  OP_RETURN,
} OpCode;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
void writeConstant(Chunk* chunk, Value value, int line);
init addConstant(Chunk* chunk, Value value);
