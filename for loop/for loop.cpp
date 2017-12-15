// for loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	for (int n = 0; n < 10; n++)
	{
		cin >> n;
		if (n == 1)
			cout << "one" << endl;
		else if (n == 2)
			cout << "two" << endl;
		else if (n == 3)
			cout << "three" << endl;
		else if (n == 4)
			cout << "four" << endl;
		else if (n == 5)
			cout << "five" << endl;
		else if (n == 6)
			cout << "six" << endl;
		else if (n == 7)
			cout << "seven" << endl;
		else if (n == 8)
			cout << "eight" << endl;
		else if (n == 9)
			cout << "nine" << endl;

		else if (n % 2 == 1)
			cout << "odd" << endl;

		else if (n % 2 == 0)
			cout << "even" << endl;

	}
	return 0;
}
