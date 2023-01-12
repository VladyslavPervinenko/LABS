// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int size = 3;
	int arr[size];
	arr[0] = 1;
	arr[1] = 2;
	arr[3] = 69;

	for (int i; i < size; i++)
	{
		arr[i] = arr[i] + 100;
	}
	for (int i; i < size; i++) {
		cout << arr[i] << "   ";
	}
}
