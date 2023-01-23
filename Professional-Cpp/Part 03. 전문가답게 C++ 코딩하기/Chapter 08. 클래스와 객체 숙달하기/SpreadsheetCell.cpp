#include "SpreadsheetCell.h"
using namespace std;

// 생성자를 정의합니다.
SpreadsheetCell::SpreadsheetCell() : mValue(0.0) { }

SpreadsheetCell::SpreadsheetCell(double initialValue)
	: mValue(initialValue) { }

SpreadsheetCell::SpreadsheetCell(string_view initialString)
	: mValue(stringToDouble(initialString)) { }

// 복사 생성자를 정의합니다.
SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell& rhs)
	: mValue(rhs.mValue) { }

// 복사 대입 연산자를 정의합니다.
SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell& rhs) {
	if (this == &rhs) {
		return *this;
	}
	mValue = rhs.mValue;
	return *this;
}

// 메서드를 정의합니다.
void SpreadsheetCell::setValue(double inValue) {
	mValue = inValue;
}

double SpreadsheetCell::getValue() const {
	return mValue;
}

void SpreadsheetCell::setString(std::string_view inString) {
	mValue = stringToDouble(inString);
}

std::string SpreadsheetCell::getString() const {
	return doubleToString(mValue);
}

// 헬퍼 메서드를 정의합니다.
std::string SpreadsheetCell::doubleToString(double inValue) const {
	return to_string(inValue);
}

double SpreadsheetCell::stringToDouble(std::string_view inString) const {
	return strtod(inString.data(), nullptr);
}