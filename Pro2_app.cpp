#include<iostream>
#include"square.h"
using namespace std;


int main()
{
    // 계좌 3개 생성
    Square sq1(20);
 
    cout << "sq1 Peri, Area:" << sq1.getPeri() << "," << sq1.getArea() << endl;
    
    return 0;
}
