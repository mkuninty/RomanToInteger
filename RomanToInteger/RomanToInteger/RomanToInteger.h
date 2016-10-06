#include<iostream>
#include<string>
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// RomanToInteger.h - To define function to convert roman to integer       //
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

/*
Package:
--------
This package is used to convert roman to arabic numerals.
This contains 3 files, RomanToInteger.h & RomanToInteger.cpp which the decleration and implementation of the conversion alng with
TestDriver.cpp that has all the test cases.

public Interfaces:
------------------
static string ToInteger(int num)  -Method to convert roman numerals to arabic numerals.

Required Files:
---------------
RomanToInteger.h, RomanToInteger.cpp and TestDriver.cpp

Maintenance History:
--------------------
ver 1.0 Oct 10 2016
*/


/* Converts roman to arabic numeral from 1-3999*/
class RomanToInteger
{
public:
	static int ToInteger(string roman);
};