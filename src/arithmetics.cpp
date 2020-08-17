#include "arithmetics.hpp"
#include <stdexcept>

int add(int x, int y)
{
    return x + y;
}

int mult(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    if(y == 0) {
        throw std::runtime_error("Division by zero");
    }
    return x / y;
}

int sub(int x, int y)
{
    return x - y;
}
