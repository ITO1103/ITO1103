#include <iostream>
#include <cstdint>

int main(){
    /*bool*/

    bool ok = true;
    std::cout << ok << std::endl;
    ok = false;
    std::cout << ok << std::endl;
    //trueで1を、falseで0を返す

    /*char*/

    char x = 'x';//ASCII一文字を表現する型
    std::cout << x << std::endl;

    /*整数型*/

    //整数型-右に行くに連れて大きな値が表現できるようになり、変数のサイズも増大する。 具体的なサイズはコンパイラによって変わってきますが GCC では 8, 16, 32, 64 ビットで定義されている。 一般的には int が使用される。
    //char    short   int     long

    /*符号付き・符号なし整数型*/

    //各整数型に unsigned を付けると正の数しか表現できなくなる代わりに大きな値が表現できるようになる。
    unsigned int y = 4000000000;
    std::cout << y << std::endl;

    //signed を付けると正負両方の値が表現できる。明示的に付けなくてもデフォルトは signed になる。
    signed int z = -400;
    std::cout << z << std::endl;

    /*サイズ指定付き整数型*/

    //述の整数型は型のサイズがコンパイラによってまちまちなので 複数のコンパイラに対応するプログラムを書くときは移植性の面で問題が発生することがある。そのようなときはサイズ指定付き整数型を使用する。
    //数値は型のビットサイズを表しており、uはunsigned を表している。サイズ指定付き整数型を使用する場合は #include <cstdint> と記述する必要がある。
    std::int32_t a = 5;
    std::int64_t b = 55;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    /*浮動小数点型*/

    //float は 32 ビットの大きさを持ち、double は 64 ビットの大きさを持つ。 また double の方が float に比べて計算精度が高いが数値計算の パフォーマンスは低い。
    float c = 40;
    double d = 40;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    //float は 32 ビットの大きさを持ち、double は 64 ビットの大きさを持つ。 また double の方が float に比べて計算精度が高いですが数値計算のパフォーマンスは低い。

    /*列挙型*/
    enum Day{
        Sun, //0
        Mon, //1
        Tur, //2
        Wed, //3
        Thu, //4
        Fri, //5
        Sat, //6
    };

    std::cout << Sun << std::endl;
    //enum の各列挙子は、内部では整数として扱われている。 各列挙子の定義の際に値を指定しなければ、 0 から順に値が割り振られる。
    //列挙子 = 整数 と書くことで値を指定することができる。値が指定された列挙子以降は、順に整数が割り振られる。
    // enum Day {
    // Sun = 1,  // 1
    // Mon,      // 2
    // Tue,      // 3
    // Wed = 8,  // 8
    // Thu,      // 9
    // Fri,      // 10
    // Sat       // 11
    // };

    return 0;
}