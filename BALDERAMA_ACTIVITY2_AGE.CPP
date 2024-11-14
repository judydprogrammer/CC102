#include <iostream>

using namespace std;

int main ()
{
	int answer;
	cout << "What is your age?: ";
	cin >> answer;
	if (answer<16) {
		cout << "Too young to drive";
	}
	else if (answer==16) {
		cout << "Better clear the road";
	}
	else if (answer>=16) {
		cout <<"You are getting pretty old";
	}
	return 0;
}
