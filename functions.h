#ifndef ActionInitialization_h
#define ActionInitialization_h 1

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <math.h>
#include <unordered_map>
using namespace std;

class RecursionFunctions
{
public:
	RecursionFunctions();
	~RecursionFunctions();

	//problem 1
	int logSeq1_recursive(int begin, int terms); // t(n) = t(n-1)-2
	int logSeq2_recursive(int begin, int terms); //t(n) = 2*t(n-1)

	//problem 2
	int gcd(int x, int y);

	//problem 3
	string reverse(string &str, int x = 0);
	bool isPalindrome(string &str);

	//problem 4
	int decimalToBinaryInt(int input);
	string decimalToBinary(int input);

	//problem 5
	double average(int arr[], int iter, int size);

	//problem 6
	int lcm(int a, int b);
	int fractorial(int fractorial);
};

#endif