#include"RomanToInteger.h"
int main()
{
	string roman = "I";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "II";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "III";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "V";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "VIII";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}