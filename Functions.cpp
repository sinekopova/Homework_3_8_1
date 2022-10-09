#include "Functions.h"

void printLenght(std::string word, int forbLenght) {
	if (word.length() == forbLenght)
		throw BadLengthException();
	std::cout << "����� ����� \"" << word << "\" ����� " << word.length() << std::endl;
}

int setForbiddenLenght() {
	int forbLenght = 0;
	while (forbLenght <= 0 || std::cin.fail())
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "������� ��������� ����� : ";
		std::cin >> forbLenght;
	}
	return forbLenght;
}

std::string inputWord() {
	std::string word;
	std::cout << "������� ����� : ";
	std::cin >> word;
	return word;
}