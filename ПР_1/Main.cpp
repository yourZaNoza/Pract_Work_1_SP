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
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	VendingMachine* machine = new VendingMachine(30); // ���������� ����� ��� ������
	slot->addSnack(bounty); // ��������� �������� � ����
	slot->displaySnackSlot();
	machine->addSlot(slot); // �������� ���� ������� � �������
	slot->addSnack(snickers);
	slot->displaySnackSlot();
	machine->addSlot(slot);
	cout << endl;
	cout << machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
	machine->displayVendingMachine();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}
