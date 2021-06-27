#include "libAlgorithms.h"
int* createTable1D(int size)
{
    int* T = nullptr;

    try {
        T = new int[size];
    }
    catch (std::bad_alloc)
    {
        throw MyRuntimeExceptions::createTable();
    }

    return T;
}
float* createFloatTable1D(int size)
{
    float* T = nullptr;

    try {
        T = new float[size];
    }
    catch(std::bad_alloc)
    {
        throw MyRuntimeExceptions::createTable();
    }

    return T;
}
char* createCharTable1D(int size)
{
    char* T = nullptr;

    try {
        T = new char[size];
    }
    catch (std::bad_alloc)
    {
        throw MyRuntimeExceptions::createTable();
    }

    return T;
}
void deleteFloatTable1D(float* tab)
{
    try {
        delete[] tab;
    }
    catch (std::bad_alloc)
    {
        throw MyRuntimeExceptions::deleteTable();
    }
}
void deleteCharTable1D(char* tab)
{
    try {
        delete[] tab;
    }
    catch (std::bad_alloc)
    {
        throw MyRuntimeExceptions::deleteTable();
    }
}
