#include <iostream>

#include <windows.h>

#include "BadLenghtException.h"
#include "Functions.h"

int main(){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbLenght;
	std::string word;

	forbLenght = setForbiddenLenght();

	while (true){
		word = inputWord();
		try	{
			printLenght(word, forbLenght);
		}
		catch (const BadLengthException& ex) { 
			std::cout << ex.what() << std::endl;
			return 0;
		}
	}

}
