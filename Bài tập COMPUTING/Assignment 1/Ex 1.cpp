# include <iostream>
using namespace std;
int main () {
    int strawberry = 5, matcha = 3, dubai = 10;
    int totalCandy = strawberry + matcha + dubai ;

    int priceStrawberry = 20000 , priceMatcha = 30000 , priceDubai
       = 50000;
       int totalValue = strawberry * priceStrawberry
       + matcha * priceMatcha
       + dubai * priceDubai ;

       cout << " Total chocolates : " << totalCandy << '\n';
       cout << " Total value ( VND): " << totalValue << '\n';
       return 0;
 }