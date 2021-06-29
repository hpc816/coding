//#include<stdio.h>
//
//
//int main() {
//	int num[1005];
//	num[0] = 1;
//	num[1] = 1;
//	int n;
//	while (scanf_s("%d", &n,sizeof(int)) != EOF) {
//		printf("%d ", num[0]);
//		printf("%d ", num[1]);
//		for (int i = 2; i < n; i++) {
//			num[i] = num[i - 2] + num[i - 1];
//			printf("%d ", num[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}