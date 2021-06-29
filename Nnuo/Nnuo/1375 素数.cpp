//#include<stdio.h>
//#include<math.h>
//
//int isprime(int n) {
//	if (n <= 1)
//		return 0;
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0)
//				return 0;
//		}
//		return 1;
//	}
//}
//
//
//int main() {
//	int n;
//	while (scanf_s("%d", &n,sizeof(int)) != EOF) {
//		int ct = 0;
//		for (int i = 2; i < n; i++) {
//			int flag = isprime(i);
//			if (flag == 1) {
//				if (i % 10 == 1) {
//					printf("%d ", i);
//					ct++;
//				}
//			}
//		}
//		if (ct == 0) {
//			printf("-1\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}
