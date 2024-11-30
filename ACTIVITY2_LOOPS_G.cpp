#include <iostream>

using namespace std;

int main() 
{
    int r=5;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r * 2; ++j) {
            if (i % 2 == 0) {
                cout << "^ ";
            } else {
                cout << " ^";
            }
        }
        cout << endl;
    }
    return 0;
}
