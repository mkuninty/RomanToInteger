#include"RomanToInteger.h"
#include<exception>
/////////////////////////////////////////////////////////////////////////////
// TestDriver.cpp - To test all cases of roman to arabic numeral           //
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
void Test()
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
/*Entry point of the application*/
int main(int argc, char* argv[])
{
	try{
		if (argc > 1){
			string input_str = argv[1];
			if (input_str == "test") { Test(); return 1; }
			cout << "Converting number " << input_str << " to Roman:  " << RomanToInteger::ToInteger(input_str) << endl;
		}
		else{
			cout << "Please enter input roman numeral that you want to convert into arabic numeral as command line argument!!" << endl;
		}
	}
	catch (exception ex){
		cout << "Enter a roman argument. Error: " << ex.what() << endl;
	}
}