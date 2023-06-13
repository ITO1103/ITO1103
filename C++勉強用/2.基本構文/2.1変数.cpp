#include <iostream>

int main(){
    int x = 5;
    int y;
    y = 6;
    //const int x = 5; << 上書き禁止
    //int x = 0 << エラーが出る
    constexpr int z = 7; //const の値は実行時に決定するが、constexpr の値はコンパイル時に決定する
    auto a = 10;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << a << std::endl;

    return 0;
}