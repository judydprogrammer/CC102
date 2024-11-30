#include <iostream>

using namespace std;

int main() 
{
    int x=8; 
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "  "; 
        }
        for (int k = 0; k < x - i; ++k) {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
