#include"RomanToInteger.h"
int RomanToInteger::ToInteger(string roman)
{
	int index = 0;
	int num = 0;
	int store[256] = { 0 };
	store['I'] = 1;
	store['V'] = 5;
	store['X'] = 10;
	while (index < roman.length())
	{
		if (store[roman[index]] < store[roman[index + 1]])
			num -= store[roman[index]];
		else
			num += store[roman[index]];
		index++;
	}
		return num;
}
#ifdef TEST
void main()
{
	string roman = "I";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "II";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "III";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "V";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "IX";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}
#endif