#include <iostream> 

using namespace std;

int main ()
{
	string name, course, school;
	cout << "Enter your name\t: ";
	cin >> name;
	cout << "Course-Year Level : ";
	cin >> course;
	cout << "School\t: ";
	cin >> school;
	
	cout << "Wow congrats " << name << "!" << course << " is a nice course. And you are studying in " << school << " which is one the Excellence is Tertiary Education" << endl;
	return 0;
}
