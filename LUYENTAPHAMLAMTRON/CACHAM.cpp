#include <iostream>
#include <cmath> // Cần thiết cho các hàm floor, ceil, và round

int main() {
    // 1. Khai báo các số thực để kiểm tra
    double num1 = 3.5;
    double num2 = 3.2;
    double num3 = -3.5;

    std::cout << "--- Ví dụ làm tròn với số " << num1 << " (phần thập phân là .5) ---" << std::endl;

    // 1. Rounding down (Làm tròn xuống / Cắt bỏ phần thập phân)
    // Cắt: (int) ép kiểu sẽ cắt bỏ phần thập phân, làm tròn về phía 0.
    // floor: làm tròn xuống về phía -vô cùng.
    std::cout << "1. Rounding down (Cắt):" << std::endl;
    int a_cut = (int)num1;
    int a_floor = std::floor(num1);
    std::cout << "   - Ép kiểu (int): " << a_cut << std::endl;
    std::cout << "   - floor():        " << a_floor << std::endl;

    // 2. Rounding to the nearest integer (Làm tròn gần nhất)
    // round: làm tròn đến số nguyên gần nhất. 0.5 luôn làm tròn lên.
    std::cout << "2. Rounding to the nearest integer:" << std::endl;
    long int a_round = std::round(num1); // round trả về kiểu long int hoặc long long
    std::cout << "   - round():        " << a_round << std::endl; // 3.5 -> 4

    // 3. Rounding up (Làm tròn lên)
    // ceil: luôn làm tròn lên về phía +vô cùng.
    std::cout << "3. Rounding up:" << std::endl;
    int a_ceil = std::ceil(num1);
    std::cout << "   - ceil():         " << a_ceil << std::endl;

    std::cout << "\n--- Ví dụ làm tròn với số " << num2 << " (phần thập phân là .2) ---" << std::endl;
    std::cout << "1. Rounding down (Cắt):    " << (int)num2 << std::endl; // 3
    std::cout << "2. Rounding to the nearest: " << std::round(num2) << std::endl; // 3
    std::cout << "3. Rounding up:            " << std::ceil(num2) << std::endl; // 4

    std::cout << "\n--- Ví dụ với số âm " << num3 << " ---" << std::endl;
    // Cần lưu ý sự khác biệt giữa (int) và floor/ceil với số âm
    std::cout << "1. Rounding down (Cắt):    " << (int)num3 << std::endl;       // -3 (Cắt về 0)
    std::cout << "   - floor():              " << std::floor(num3) << std::endl; // -4 (Làm tròn xuống về -vô cùng)
    std::cout << "2. Rounding to the nearest: " << std::round(num3) << std::endl; // -3 (Làm tròn về 0)
    std::cout << "3. Rounding up:            " << std::ceil(num3) << std::endl;  // -3 (Làm tròn lên về +vô cùng)

    return 0;
}