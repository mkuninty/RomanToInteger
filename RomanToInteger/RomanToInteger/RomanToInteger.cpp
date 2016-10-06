#include"RomanToInteger.h"
/////////////////////////////////////////////////////////////////////////////
// RomanToInteger.cpp - To define function to convert integer to roman     //
//																		   //
// ver 1.0                                                                 //
// ----------------------------------------------------------------------- //
// copyright © Medha Reddy Kuninty, 2016                                   //
// All rights granted provided that this notice is retained                //
// ----------------------------------------------------------------------- //
// Language:    Visual C++, Visual Studio 2015                             //
// Platform:    ASUS SonicMaster, Core i3, Windows 10                      //		                                       
// Author:      Medha Reddy Kuninty,Syracuse         					   //
//              (717)-891-7128, mkuninty@syr.edu                           //
/////////////////////////////////////////////////////////////////////////////

int RomanToInteger::ToInteger(string roman)
{
	int index = 0;
	int num = 0;
	int store[256] = { 0 };
	store['I'] = 1;
	store['V'] = 5;
	store['X'] = 10;
	store['L'] = 50;
	store['C'] = 100;
	store['D'] = 500;
	store['M'] = 1000;
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
	roman = "CDLIX";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "MDXXX";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
	roman = "CXXXVII";
	cout << "To convert roman " << roman << " to integer: " << RomanToInteger::ToInteger(roman) << endl;
}
#endif