#include "SpreadsheetCell.h"
#include <iostream>
using namespace std;

int main(void) {
	// 스택에 객체를 생성합니다.
	SpreadsheetCell firstCell, secondCell;
	firstCell.setValue(1);
	secondCell.setString("2.0");
	cout << "The first cell is " << firstCell.getValue() << endl;
	cout << "The second cell is " << secondCell.getValue() << endl;

	// 힙에 객체를 생성합니다.
	SpreadsheetCell* thirdCell = new SpreadsheetCell();
	thirdCell->setValue(3.0);
	cout << "The third cell is " << thirdCell->getValue() << endl;

	delete thirdCell;
	thirdCell = nullptr;

	// 스마트 포인터로 힙에 객체를 생성합니다.
	auto fourthCell = make_unique<SpreadsheetCell>();
	fourthCell->setValue(4.0);
	cout << "The fourth cell is " << fourthCell->getValue() << endl;



	// 스택에 객체를 생성합니다.
	SpreadsheetCell fifthCell(5);
	cout << "The fifth cell is " << fifthCell.getValue() << endl;

	// 힙에 객체를 생성합니다. 
	SpreadsheetCell* sixthCell = new SpreadsheetCell(6);
	cout << "The sixth cell is " << sixthCell->getValue() << endl;

	delete sixthCell;
	sixthCell = nullptr;

	// 스마트 포인터로 힙에 객체를 생성합니다.
	auto seventhCell = make_unique<SpreadsheetCell>(7);
	cout << "The seventh cell is " << seventhCell->getValue() << endl;



	// 스택에 객체를 생성합니다.
	SpreadsheetCell eightCell("8");
	cout << "The eight cell is " << eightCell.getValue() << endl;

	// 힙에 객체를 생성합니다. 
	SpreadsheetCell* ninethCell = new SpreadsheetCell("9.0");
	cout << "The nineth cell is " << ninethCell->getValue() << endl;

	delete ninethCell;
	ninethCell = nullptr;

	// 스마트 포인터로 힙에 객체를 생성합니다.
	auto tenthCell = make_unique<SpreadsheetCell>("10");
	cout << "The tenth cell is " << tenthCell->getValue() << endl;

	return 0;
}