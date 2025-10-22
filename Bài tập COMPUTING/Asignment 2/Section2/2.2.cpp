#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

void print_border(int length) {
    for (int i = 0; i < length; ++i) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    string name;
    int age;

    cout << "Your name is: ";
    cin >> name;

    cout << "Your age is: ";
    cin >> age;

    cout << "Your name is: " << name << "\n";
    cout << "Your age is: " << age << "\n";

    string age_str;
    ostringstream oss;
    oss << age;
    age_str = oss.str();

    string name_content = " Name: " + name;
    string age_content = " Age: " + age_str;

    int max_content_length = max(name_content.length(), age_content.length());
    int box_width = max_content_length + 4; 

    print_border(box_width);

    cout << "*" << name_content;
    for (int i = name_content.length(); i < max_content_length; ++i) {
        cout << " ";
    }
    cout << " *\n";

    cout << "*" << age_content;
    for (int i = age_content.length(); i < max_content_length; ++i) {
        cout << " ";
    }
    cout << " *\n";

    print_border(box_width);

    return 0;
}