#include <iostream>
using namespace std;

// 関数テンプレートの定義
template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}
/*
int Max_(int x, int y) {
    return (x > y) ? x : y;


}
*/




int main() {
    int intA = 10;
    int intB = 20;
    cout << "Max (int): " << maxValue(intA, intB) << endl; // int型で呼び出し

    double doubleA = 5.5;
    double doubleB = 3.3;
    cout << "Max (double): " << maxValue(doubleA, doubleB) << endl; // double型で呼び出し

    char charA = 'a';
    char charB = 'z';
    cout << "Max (char): " << maxValue(charA, charB) << endl; // char型で呼び出し

    return 0;
}
