/* 発展課題2 t22j209 */
#include <stdio.h>

int main(void)
{
    int money,suica,i,o;
    money = 10000;
    suica = 2480;
    i = 200;
    o = money - (suica * 2 + i * 4);
    printf("一万円を持ってか芋煮に行き、1個2480円のスイカを2個と1個200円のイチジクを4個買った場合、お釣りは%d円である\n",o);
}

/*実行結果*/
/*t22j209@pc27:~/CompC$ gcc ex-kadai02.c -o ex-kadai02
t22j209@pc27:~/CompC$ ./ex-kadai02
一万円を持ってか芋煮に行き、1個2480円のスイカを2個と1個200円のイチジクを4個買った場合、お釣りは4240円である
*/