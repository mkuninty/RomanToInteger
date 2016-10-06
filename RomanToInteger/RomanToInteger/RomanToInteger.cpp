#include"RomanToInteger.h"
int RomanToInteger::ToInteger(string roman)
{
	int index = 0;
	int num = 0;
	while (index < roman.length())
	{
		if (roman[index] == 'I')
			num++;
		index++;
	}
		return num;
}
#ifdef TEST
void main()
{
	string roman ="I";
	cout<<"To convert roman "<<roman<<" to integer: "<<RomanToInteger::ToInteger(roman)<<endl;
	roman ="II";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "III";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}
#endif