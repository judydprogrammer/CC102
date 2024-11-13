#include  <iostream>

using namespace std;

int main()
{
	int answer;
	cout << "What is the Temperature?:  "; 
	cin >> answer; 
	
	if (answer<=32) { 
		cout << "Bring heavy jacket";
	} 
	
	else if (answer==32 || answer <=50) {
		cout << "Bring light jacket";
	}
	
	else if (answer >50) {
			cout << "Not to bring any jacket";
	}
	return 0;
}
