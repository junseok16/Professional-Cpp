#pragma once
#include <string>
#include <string_view>

class SpreadsheetCell {
public:
	// 디폴트 생성자, 오버로드된 생성자
	SpreadsheetCell();
	SpreadsheetCell(double initialValue);
	SpreadsheetCell(std::string_view initialString);

	// 복사 생성자
	SpreadsheetCell(const SpreadsheetCell& rhs);

	// 복사 대입 연산자
	SpreadsheetCell& operator=(const SpreadsheetCell& rhs);

	void setValue(double inValue);
	double getValue() const;

	void setString(std::string_view inString);
	std::string getString() const;

private:
	std::string doubleToString(double inValue) const;
	double stringToDouble(std::string_view inString) const;
	double mValue = 0;
};
