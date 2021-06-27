#ifndef LIBTABLES_H
#define LIBTABLES_H

#include<iostream>
#include<fstream>

/*
creates 1D dynamic table
@param size size of table
@return adress of created table
*/
char* createCharTable1D(int size);
/*
creates 1D dynamic table
@param size size of table
@return adress of created table
*/
float* createFloatTable1D(int size);
/*
creates 1D dynamic table
@param size size of table
@return adress of created table
*/
int* createTable1D(int size);
/*
deletes 1D dynamic table
@param size size of table
@return adress of created table
*/
void deleteFloatTable1D(float *tab);
/*
deletes 1D dynamic table
@param size size of table
@return adress of created table
*/
void deleteCharTable1D(char* tab);

#endif
