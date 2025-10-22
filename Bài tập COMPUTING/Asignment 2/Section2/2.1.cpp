#include <iostream>
#include<bits/stdc++.h>

int main() {
    const int MAX_NUMBER = 10;
    
    int current_number = 1;
    
    for (int row_length = 1; row_length <= 4; ++row_length) {
        
        for (int i = 0; i < row_length; ++i) {
            
            if (current_number <= MAX_NUMBER) {
                std::cout << current_number << " ";
                
                current_number++;
            } else {
                break;
            }
        }
        
        std::cout << "\n"; 
        
        if (current_number > MAX_NUMBER) {
            break;
        }
    }
    
    return 0;
}