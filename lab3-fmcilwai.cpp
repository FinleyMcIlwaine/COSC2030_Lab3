// Lab3.cpp
// Finley McIlwaine
// COSC2030 Lab3
// 10/2/18

#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Function declarations
short sumShortToN(short n);
long sumLongToN(long n);
template<class T> T f(T n);

int main()
{
	// short n and result variables
	short n_short = 0;
	short res_short;

	do {
		// Increment n values until overflow.
		res_short = sumShortToN(n_short);
		n_short++;
	} while (res_short >= 0);

	// Output n that resulted in overflow and the result
	cout << "\nShort sum overflow occurred for n = " << n_short << " resulting in sum = " << res_short << endl;

	// long n and result variables.
	long n_long = n_short;
	long res_long;
	do {
		// Increment n values until overflow.
		res_long = sumLongToN(n_long);
		n_long++;
	} while (res_long >= 0);

	// Output n that resulted in overflow and result
	cout << "\nLong sum overflow occurred for n = " << n_long << " resulting in sum = " << res_long << endl;

	// long n and float factorial result variables
	n_long = 3;
	float res_fact = 2;
	float last_res_float;

	do
	{
		last_res_float = res_fact;
		// Increment n values until overflow
		res_fact = res_fact * n_long;
		n_long++;
	} while (res_fact != last_res_float);
	n_long--;

	// Output n that resulted in overflow and result
	cout << "\nFloat factorial overflow occurred for n = " << n_long << " resulting in product = " << res_fact << endl;

	// long n and double factorial result and double last result variables
	n_long = 3;
	double res_fact_dbl = 2;
	double last_res_dbl;

	do
	{
		last_res_dbl = res_fact_dbl;
		// Increment n values until overflow
		res_fact_dbl = res_fact_dbl * n_long;
		n_long++;
	} while (res_fact_dbl != last_res_dbl);
	n_long--;

	// Output n that resulted in overflow and result
	cout << "\nDouble factorial overflow occurred for n = " << n_long << " resulting in product = " << res_fact_dbl << endl;

	// Float and double sum analysis
	float in_val_float = 1;
	float res_float;
	double in_val_dbl = 1;
	double res_dbl;

	// Have user enter floating point numbers.
	while (in_val_float > 0)
	{
		// Input and compute
		cout << "\nPlease enter an integer 'n' for the float sum (<=0 to continue): ";
		cin >> in_val_float;
		if (in_val_float > 0)
		{
			res_float = f(in_val_float);

			// Output
			cout << "n = " << in_val_float << " terms in the sum resulted in sum = " << res_float << endl;
		}
		else
		{
			cout << "continuing..." << endl;
		}
	}

	// Have user enter double numbers.
	while (in_val_dbl > 0)
	{
		// Input and compute
		cout << "\nPlease enter an integer 'n' for the double sum (<=0 to continue): ";
		cin >> in_val_dbl;
		if (in_val_dbl > 0)
		{
			res_dbl = f(in_val_dbl);

			// Output
			cout << "n = " << in_val_dbl << " terms in the sum resulted in sum = " << res_dbl << endl;
		}
		else
		{
			cout << "continuing..." << endl;
		}
	}

	// Puzzle w/ float
	cout << "\nFloat puzzle output:" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	// Puzzle w/ dbl
	cout << "\nDouble puzzle output:" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
}

short sumShortToN(short n)
{
	if (n <= 0) { return 0; }
	short sum = 0;
	for (short i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}

long sumLongToN(long n)
{
	if (n <= 0) { return 0; }
	long sum = 0;
	for (long i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}

template<class T> T f(T n) 
{
	T quotient = 0;
	for (int i = 1; i <= n; i++)
	{
		quotient += static_cast<T>(1.0) / n;
	}
	return quotient - 1;
}
