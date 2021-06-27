#include "libExceptions.h"


void openFile(std::ifstream& openFile)
{
	std::string name;
	std::cout << "Podaj nazwę pliku z którego mam pobrać dane: ";
	std::cin >> name;

	openFile.open(name);
	if (!openFile)
	{
		throw MyRuntimeExceptions::openFile();
	}

}
void createFile(std::ofstream& createFile)
{
	char name[20];
	std::cout << "Wpisz nazwę pliku który ma zostać stworzony i do którego mają zostać wpisane wyniki: ";
	std::cin >> name;
	createFile.open(name);
	if (!name)
	{
		throw MyRuntimeExceptions::createFile();
		
	}
}

void notPositiveInt(int a)
{
	if (a < 1)
		throw MyRuntimeExceptions::wrongData("Zbyt małe n!");
}