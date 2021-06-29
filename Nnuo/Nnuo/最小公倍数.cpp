//#include<stdio.h>
//
//int gcd(int a, int b) {
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//}
//
//
//int lcm(int a, int b) {
//	int r = gcd(a, b);
//	return a * b / r;
//}
//
//int main() {
//	int m, n;
//	while (scanf_s("%d %d", &m, &n)) {
//		printf("%d\n", lcm(m, n));
//	}
//	return 0;
//}