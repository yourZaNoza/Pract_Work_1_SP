#pragma once
#include <iostream>
#include <string>

class Snack {
private:
	std::string _snack;
public:
	Snack();
	Snack(std::string snack);
	~Snack();

	std::string getSnack();

	void displaySnack();
};