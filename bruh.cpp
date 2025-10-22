#include <iostream>
#include <string>
using namespace std;

string haha(string a, string b)
{
    string hi = a + " " +b;
    return hi;
}

string hihi(string a)
{
    for( int i=0; i < a.length(); i++)
    {            
        if( a[i] >= 'A' && a[i] <= 'Z' )          //thử đổi size thành lengh, đã check và thấy 2 hàm gióng nhau
        {                                        
            a[i] += 'a' - 'A';                   //thử thay nháy đơn thành nháy kép, đã check và code bị lõi
        }
    }
    return a;
}

string huhu (string b)
{
    for(int i=0; i < b.size(); i++ )
    {
        if( b[i] >= 'a' && b[i] <= 'z') 
        {
            b[i] -= 'a'-'A';
        }
    }
    return b; 
}
int main()
{
    string a;
    string b;
    string s("hah \n");                                        // thử làm cho các string được nhập từ bàn phím thay vì nhập sẵn 
    cout << s; 
    getline (cin , a );
    getline (cin , b);
    cout <<  haha(a,b) << '\n';
    cout << hihi(a) << '\n';
    cout << huhu(b) << '\n';
    return 0;
}