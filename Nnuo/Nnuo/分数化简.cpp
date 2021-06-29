//#include<stdio.h>
//
//int gcd(int a,int b) {
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//}
//
//
//int main() {
//	int n, m;
//	while (scanf_s("%d/%d", &n, &m) != EOF) {
//		int r = gcd(n, m);
//		printf("%d/%d=%d/%d\n", n, m, n / r, m / r);
//	}
//	return 0;
//}