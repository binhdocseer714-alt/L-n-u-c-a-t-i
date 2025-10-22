#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_code;
    
    cout << "Enter the Full Product Code String: ";
    cin >> full_code;
    
    string product_detail = full_code.substr(4);
    
    cout << "The Product Detail String is: " << product_detail << endl;
    
    return 0;
}