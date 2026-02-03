#include <stdio.h>
int main() {
	printf("Hello,Friend)\n");
	short x = 4, y = 2, res;
	x++;
	y *= 2;
	res = x + y;
	printf("%d\n", res);
	float a = 2.62343f, b = 5.23432f, tes;
	a *= 2;
	b--;
	b += 3.3432f;
	tes = a / b;
	printf("%.2f\n", tes);
	char q = '1', w = 'd', e = 'G', r = '%';
	q = '5';
	printf("%c,%c,%c,%c\n",q,w,e,r);
}