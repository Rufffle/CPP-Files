#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int rowSize, int columnSize)
{
    data = new int*[rowSize];
    for(int i=0 ; i<rowSize ; i++)
        data[i] = new int[columnSize];
    size = rowSize;
}
dynArr::~dynArr()
{
    delete [] data;
}
void dynArr::allocate(int rowSize, int columnSize)
{
    dynArr(rowSize,columnSize);
}
int dynArr::getValue(int rowIndex, int columnIndex)
{
    return data[rowIndex][columnIndex];
}
void dynArr::setValue(int rowIndex, int columnIndex, int value)
{
    data[rowIndex][columnIndex] = value;
}
