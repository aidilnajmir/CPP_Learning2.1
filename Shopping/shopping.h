#ifndef SHOPPING_H
#define SHOPPING_H

#include <iostream>
#include <fstream>

using namespace std;

class shopping {
private:
	int pcode;
	float price;
	string pname;

public:
	void menu();
	void administrator();
	void customer();
	void add();
	void edit();
	void rem();
	void list();
	void receipt();

};

#endif // !SHOPPING_H
