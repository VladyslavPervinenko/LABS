

#include <iostream>
using namespace std;

struct  Student
{
	string name;
	int age;
	double grade = 60.0;
};
void Output(Student studik) {
	cout << studik.name << endl;
	cout << studik.age << endl;

	if (studik.grade >= 60 && studik.grade <= 75)
	{
		cout << "Otzzinka is 3";
	}
	else if (studik.grade >= 75 && studik.grade <= 90)
	{
		cout << "Otzzinka is 4";
	}
	else if (studik.grade >= 90 && studik.grade <= 100)
	{
		cout << "Otzzinka is 5";
	}
	else {
		cout << "You are dead!!!";
	}
	cout << endl;
};

int main()
{
	Student stud1;
	Student stud2;
	Student stud3;

	stud1.name = "Artem Kit";
	stud1.age = 17;
	stud1.grade = 75.5;
	Output(stud1);

	stud2.name = "Petro Shchur";
	stud2.age = 50;
	Output(stud2);

	stud3.name = "Incognito";
	stud3.age = 0;
	stud3.grade = 100.0;
	Output(stud3);

}

