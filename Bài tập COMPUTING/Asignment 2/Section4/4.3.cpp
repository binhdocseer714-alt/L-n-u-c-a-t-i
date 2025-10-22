#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;
    int length_L;
    int index_N_last;
    
    cout << "Enter the Full Name: ";
    getline(cin, full_name); 

    cout << "Enter the total length L: ";
    if (!(cin >> length_L)) {
        return 1;
    }

    cout << "Enter the index of the last space (N_last): ";
    if (!(cin >> index_N_last)) {
        return 1;
    }

    int start_index = index_N_last + 1;
    int length_P = length_L - start_index; 
    
    string last_name = full_name.substr(start_index, length_P);
    
    cout << "Last Name is: " << last_name << endl;
    
    return 0;
}