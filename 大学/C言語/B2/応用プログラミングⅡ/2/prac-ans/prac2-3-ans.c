#include <stdio.h>
void minus(int a, int b, int *sa)/*４．３を受けて変更*/
{
    *sa = a - b;/*５．４で用意したポインタを使って、ポインタが指し示すアドレスの先に計算結果を代入するよう変更*/
}
void multiply(int a, int b, int *seki)/*７．６を受けて変更（６のansはアドレス）*/
{
    *seki = a * b;/*８．７で用意したポインタを使って、ポインタが指し示すアドレスの先に計算結果を代入するよう変更*/
}
void norm(int a, int b, int c, int d, int *ans)/*２．１を受けて変更*/
{
    multiply(a, d, &a); /* a*d の結果を a に代入（３．void型の関数から値を代入するためにポインタを使う。結果を代入したい変数のアドレスを、関数に送るよう変更 */
    multiply(b, c, &b); /* b*c の結果を b に代入 （３．同上）*/
    minus(a, b, ans);  /* ad-bc の結果を ans(main) に代入（６．この関数の中のansはポインタである＝ansの中にアドレスが入っているので変更しなくてよい） */
}
int main(void)
{
    int a = 10, b = 5, c = 3, d = 8, ans;
    norm(a, b, c, d, &ans); /* ad-bc の結果を ans に代入（１．ansだけアドレスを渡しているので、対応する仮引数はポインタになることがわかる） */
    printf("答えは %d です\n", ans);
    return(0);
}