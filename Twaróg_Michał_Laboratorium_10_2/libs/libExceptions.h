#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include<exception>
#include "libAlgorithms.h"

/*
opens file
@param ifstream object
*/
void openFile(std::ifstream& openFile);

/*
creates file
@param ofstream object
*/
void createFile(std::ofstream& createFile);

//throws exception if given int is equal zero
void notPositiveInt(int);


namespace MyRuntimeExceptions {

	class wrongData : public std::runtime_error {
	public:
		wrongData() :runtime_error("Złe dane") {}
		wrongData(std::string msg) :runtime_error(msg.c_str()) {}
	};
	class createFile :public std::runtime_error {
	public:
		createFile() :runtime_error("Błąd przy tworzeniu pliku") {}
		createFile(std::string msg) :runtime_error(msg.c_str()) {}
	};
	class openFile :public std::runtime_error {
	public:
		openFile() :runtime_error("Błąd przy otwieraniu pliku") {}
		openFile(std::string msg) :runtime_error(msg.c_str()) {}
	};
	class createTable :public std::runtime_error {
	public:
		createTable() :runtime_error("Błąd przy tworzeniu tablicy!") {}
		createTable(std::string msg) :runtime_error(msg.c_str()) {}
	};
	class deleteTable :public std::runtime_error {
	public:
		deleteTable() :runtime_error("Błąd przy usuwaniu tablicy!") {}
		deleteTable(std::string msg) :runtime_error(msg.c_str()) {}
	};
}
#endif
