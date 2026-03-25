static int longConstantInstruction(const char* name, Chunk* chunk,
                                   int offset) {
  uint32_t constant = chunk->code[offset + 1] |
                     (chunk->code[offset + 2] << 8) |
                     (chunk->code[offset + 3] << 16);
  printf("%-16s %4d '", name, constant);
  printValue(chunk->constants.values[constant]);
  printf("'\n");
  return offset + 4;
}

