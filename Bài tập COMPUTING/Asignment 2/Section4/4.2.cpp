#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;
    int length_P;
    
    cout << "Enter the Full Name: ";
    getline(cin, full_name); 

    cout << "Enter the length P of the First Name: ";
    if (!(cin >> length_P)) {
        return 1;
    }

    string first_name = full_name.substr(0, length_P);
    
    cout << "First Name is: " << first_name << endl;
    
    return 0;
}