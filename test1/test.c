#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a, b, temp;
//	a = 10;
//	b = 20;
//	printf("a = %d, b = %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d, b = %d", a, b);
//}
//int Swap1(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	return x, y;
//}
void Swap2(int *pa,int *pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb; 
	*pb = tmp;
}
int main() {
	int a = 10, b = 20;
	printf("a=%d,b=%d\n", a, b); 
	/*Swap1(a, b);#不能完成任务！*/
	Swap2(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}
//int main() {
//	int a = 10; 
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}