#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double input_number;
    const int MAX_ROWS = 4;
    
    cout << "Input your number: ";
    
    if (!(cin >> input_number)) {
        return 1;
    }

    cout << fixed << setprecision(1);

    for (int i = 1; i <= MAX_ROWS; ++i) {
        
        for (int j = 0; j < (MAX_ROWS - i); ++j) {
            cout << "  ";
        }
        
        for (int k = 0; k < i; ++k) {
            
            cout << input_number;
            
            if (k < i - 1) {
                cout << " ";
            }
        }
        
        cout << "\n";
    }

    return 0;
}