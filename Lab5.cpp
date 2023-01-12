
#include <iostream>
using namespace std;

int main()
{
	string myName = "Pogana Ludina";
	int myAge = 99;

	string* p_myName = &myName;
	int* p_myAge = &myAge;

	*p_myAge = 17;
	*p_myName = "Petro Shchur";

	cout << "adres of variable myName: " << p_myName << endl;
	cout << "incide variable myName: " << *p_myName << endl;
	cout << "adres of variable myAge: " << &myAge << endl;
	cout << "incide variable myAge: " << *(&myAge) << endl;
}
