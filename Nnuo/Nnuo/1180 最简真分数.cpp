//#include<stdio.h>
//
//int gcd(int a, int b) {
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//}
//
//
//int main() {
//	int n;
//	int num[606];
//	scanf_s("%d", &n,sizeof(int));
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &num[i],sizeof(int));
//	}
//	int ct = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (gcd(num[i], num[j]) == 1)
//				ct++;
//		}
//	}
//	printf("%d",ct);
//	return 0;
//}