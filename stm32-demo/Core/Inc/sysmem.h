#include <stdint.h>

typedef struct
{
  uint32_t sbrk_calls;
  uint32_t malloc_calls;
  uint32_t free_calls;
} MemoryAllocationCalls;
