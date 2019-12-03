#include <iostream>
using namespace std;

int main() {
    cout << "請輸入攝氏溫度:";
    
    float c;
    cin >> c;
    float f = (9/5 * c + 32);
    cout << "華氏的溫度是: " << f ; 

}
