#include <iostream>
# include <cmath>
int main() {
    //cái nay mới làm lần đầu :Lần 1
    std:: floor(3.5); //chỗ này chỉ mới thực hiện phép tính của hàm thôi thk stupid
    std::cout <<"Hàm trên sẽ cho ra kết quả: "<< std:: floor(3.5) << std::endl; //<--làm kiểu này cx cho ra kết quả nhưng dài dòng và dư
    //cái này sẽ là lần 2 nha
    std::cout << "Kết quả làm tròn khi ép in thẳng vào: "<< (int)3.5 <<'\n'; //vl chyaj được ngay lần dầu
    //giờ sửa lại sao cho gọn hơn này :Lần 3
    double a = 3.5;
    int in = (int)a; //<-- Nhớ chấm phảy nx thk kia
    int fl = floor(a);
    std::cout <<"Đây là kết quả của thk ép kiểu int: "<< in << '\n';
    std::cout <<"Đây là kết quả của thk ép kiểu floor: "<< fl << '\n';
    return 0;
}