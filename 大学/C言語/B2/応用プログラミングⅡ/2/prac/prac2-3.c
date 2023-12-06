#include <stdio.h>
void minus(int a, int b, int *sa)
{
    *sa = a - b;
}
void multiply(int a, int b, int *seki)
{
    *seki = a * b;
}
void norm(int a, int b, int c, int d, int *ans)
{
    multiply(a, d, &a); /* a*d の結果を a に代入 */
    multiply(b, c, &b); /* b*c の結果を b に代入 */
    minus(a, b, ans);  /* ad-bc の結果を ans(main) に代入 */
}
int main(void)
{
    int a = 10, b = 5, c = 3, d = 8, ans;
    norm(a, b, c, d, &ans); /* ad-bc の結果を ans に代入 */
    printf("答えは %d です\n", ans);
    return(0);
}
