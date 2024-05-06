#include "cpp-code.h"
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>

// #include "stm32f1xx_hal.h"

// static const unsigned char cpp_text[] = "Hello, stm32 C++ developer!\r\n";
extern unsigned int calls_counter[3];

// extern UART_HandleTypeDef huart1;

// void* operator new (size_t n)
// {
//     calls_counter[0]++;
//     return malloc(n);
// }

// void operator delete(void *p) throw() 
// {
//     calls_counter[1]++;
//     free(p);
// }

// void* operator new[] (size_t n)
// {
//     calls_counter[0]++;
//     return malloc(n);
// }

// void operator delete[] (void *p) throw() 
// {
//     calls_counter[1]++;
//     free(p);
// }

void function_to_investigate()
{
    std::map<std::string, int> m;
    for (int i = 1; i <= 10; ++i)
    {
        m[std::to_string(i)] = i;
    }
}

void print_stat()
{
    // Some code here should print statistic of _sbrk, malloc, free usage
    // printf((const char*)cpp_text);
    printf(
        "_sbrk() called: %o times\r\n"
        "malloc() called: %o times\r\n"
        "free() called: %o times\r\n",
        calls_counter[0], 
        calls_counter[1], 
        calls_counter[2]
    );
    
}

void cpp_code_entry_point()
{
    function_to_investigate();
    print_stat();
}
