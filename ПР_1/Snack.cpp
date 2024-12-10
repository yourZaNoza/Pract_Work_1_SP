#include "Snack.h"

Snack::~Snack() {}

Snack::Snack() {
	this->_snack = " ";
}

Snack::Snack(std::string snack) : _snack(snack) {}

std::string Snack::getSnack() { return _snack; }

void Snack::displaySnack() {
    setlocale(LC_ALL, "");
    std::cout << "---------------" << std::endl;
    std::cout << "--Snack--" << std::endl;
    std::cout << "Name: " << getSnack() << std::endl;
}