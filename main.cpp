#include <iostream>
#include <cmath>
#include <algorithm>
#include "functions.h"
using namespace std;

int main()
{
	RecursionFunctions* funcObj = new RecursionFunctions();
	
	//problem 1
	cout << "Problem 1:" << endl;
	int n;
	cin >> n;
	cout << funcObj->logSeq1_recursive(3, n) << endl;
	cin >> n;
	cout << funcObj->logSeq2_recursive(-1, n) << endl;
	

	//problem 2
	cout << "Problem 2:" << endl;
	int x, y;
	cin >> x >> y;
	cout << funcObj->gcd(x, y) << endl; 
	

	//problem 3
	cout << "Problem 3:" << endl;
	string reverseStr;
	bool isPalindrome = false;
	cin >> reverseStr;
	cout << funcObj->reverse(reverseStr) << endl;
	cout << funcObj->isPalindrome(reverseStr) << endl;
	

	//problem 4
	cout << "Problem 4:" << endl;
	int toBinary;
	cin >> toBinary;
	cout << funcObj->decimalToBinary(toBinary) << endl;
	
	
	//problem 5
	cout << "Problem 5:" << endl;
	int sizeOfArr;
	cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];
	for (int i = 0; i < sizeOfArr; i++)
	{
		cin >> arr[i];
	}
	cout << funcObj->average(arr, 0, sizeOfArr) << endl;

	//problem 6
	cout << "Problem 6:" << endl;
	int lcmInput, lcmOutput;
	lcmOutput = 1;
	cin >> lcmInput;
	cout << funcObj->fractorial(lcmInput);
	
}