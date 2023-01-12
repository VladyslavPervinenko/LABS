

#include <iostream>
using namespace std;

int main()
{
	int mode;
	cout << "Enter program mode\n";
	cin >> mode;
	if (mode == 0) 
	{
		cout << "You are great!";
	}
	else 
	{
		switch (mode)
		{
		case 1:
			cout<<"You are awesome";
			break;
		case 2:
			cout << "You are nice";
			break;
		case 3:
			cout << "You are ok!";
			break;
		default:
			cout << "Wtf is going on";
			break;
		}
	}


}


