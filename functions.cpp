#include "functions.h"

RecursionFunctions::RecursionFunctions()
{

}

RecursionFunctions::~RecursionFunctions()
{
	
}

int RecursionFunctions::logSeq1_recursive(int begin, int terms)
{
	if (terms == 1)
	{
		return begin;
	}
	return logSeq1_recursive(begin, terms - 1) - 2;
}

int RecursionFunctions::logSeq2_recursive(int begin, int terms)
{
	if (terms == 1)
	{
		return begin;
	}
	return logSeq2_recursive(begin, terms - 1) * 2;
}

int RecursionFunctions::gcd(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	return gcd(y, x % y);
}

string RecursionFunctions::reverse(string &str, int x)
{
	int size = str.length();
	if (x == size / 2)
	{
		return "";
	}
	swap(str[x], str[size - x - 1]);
	reverse(str, x + 1);

	return str;
}

bool RecursionFunctions::isPalindrome(string &str)
{
	string origStr = str;
	reverse(str); //reversed string
	if (str.compare(origStr) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int RecursionFunctions::decimalToBinaryInt(int input)
{
	if (input == 0)
	{
		return 0;
	}
	return (input % 2 + 10 * decimalToBinaryInt(input / 2));
}

string RecursionFunctions::decimalToBinary(int input)
{
	return to_string(decimalToBinaryInt(input));
}

double RecursionFunctions::average(int arr[], int iter, int size)
{
	if (iter == size - 1)
	{
		return arr[iter];
	}
	if (iter == 0)
	{
		return ((arr[iter] + average(arr, iter + 1, size)) / size);
	}
	return (arr[iter] + average(arr, iter + 1, size));
}

int RecursionFunctions::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

/*int RecursionFunctions::fractorial(int fractorial)
{
	int lcmTotal = fractorial;
	for (fractorial--; fractorial > 1; fractorial--) {
		lcmTotal = lcm(lcmTotal, fractorial);
	}

	return lcmTotal;
}*/

int RecursionFunctions::fractorial(int fractorialChoice)
{
	if (fractorialChoice == 1)
	{
		return 1;
	}
	return lcm(fractorialChoice, fractorial(fractorialChoice - 1));
}