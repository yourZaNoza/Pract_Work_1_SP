#pragma once
#include "SnackSlot.h"
#include <iostream>

class VendingMachine {
private:
	int _slotCount;
	int _emptySlotsCount;
	SnackSlot** slots;
public:
	VendingMachine();
	VendingMachine(int slotCount);
	~VendingMachine();

	int getSlotCount();
	int getEmptySlotsCount();

	void count();
	void addSlot(SnackSlot* slot);
	void displayVendingMachine();
};
