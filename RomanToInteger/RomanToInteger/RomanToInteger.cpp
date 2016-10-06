#include"RomanToInteger.h"
int RomanToInteger::ToInteger(string roman)
{
	int index = 0;
	int num = 0;
	while (index < roman.length())
	{
		if (roman[index] == 'I')
			num++;
		else if (roman[index] == 'V')
			num = num + 5;
		index++;
	}
		return num;
}
#ifdef TEST
void main()
{
	string roman = "III";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "V";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "VIII";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}
#endif