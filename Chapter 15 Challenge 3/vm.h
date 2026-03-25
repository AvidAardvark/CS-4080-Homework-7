typedef struct {
  Chunk* chunk;
  uint8_t* ip;
  Value* stack;
  int stackTop;
  int stackCapacity;
} VM;
