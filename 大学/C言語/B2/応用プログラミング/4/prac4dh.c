#include <stdio.h>
#include <math.h>

/*ここに関数deg2radの定義を記述しなさい*/
double deg2rad(double deg){
  return M_PI * deg / 180.0;
}

/*ここに関数calcHeightの定義を記述しなさい*/
double calcHeight(int x, double rad){
  return x * tan(rad);
}

/*main関数は書き換えてはいけません*/
int main(void)
{
  int x = 200;		/*ビルまでの距離*/
  double deg = 25.5;	/*ビル頭頂部を見た時の仰角（度）*/

  double rad, h;	/*rad:ビル頭頂部を見た時の仰角（ラジアン） */
			/*h:ビルの高さ*/

  rad = deg2rad( deg );
  h = calcHeight( x, rad );
  printf("クレドビルの高さは%.1fmです。\n", h);

  return 0;
}
