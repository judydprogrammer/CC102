#include <iostream>

using namespace std;

int main()
{ 
	int n=10;
	for(int i=0; i < 10; i++) {
		for(int z=0; z < i; z++) {
			cout << "#";
		}
		cout << " ";
		for(int z=1; z < 10 -i; z++) {
			cout << "#";
		}
		cout << endl;
	}
	for(int z=1; z <= 10; z++) {
		cout << "#";
	}
	cout << endl;
	return 0;
}