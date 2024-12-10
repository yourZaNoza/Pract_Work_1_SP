#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	bounty->displaySnack();
	snickers->displaySnack();
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);
	VendingMachine* machine = new VendingMachine(30); //  оличество €чеек дл€ слотов
	slot->addSnack(bounty); // ƒобавл€ем батончик в слот
	slot->displaySnackSlot();
	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат
	slot->addSnack(snickers);
	slot->displaySnackSlot();
	machine->addSlot(slot);
	cout << endl;
	cout << machine->getEmptySlotsCount() << endl; // ƒолжно выводить количество пустых слотов дл€ снеков
	machine->displayVendingMachine();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}
