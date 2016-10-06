#include"RomanToInteger.h"
int main()
{
	string roman = "I";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "III";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "IX";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "MLXVI";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "MCMLXXXIX";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}