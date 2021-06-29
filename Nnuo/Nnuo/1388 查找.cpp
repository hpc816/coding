//#include<stdio.h>
//#include<algorithm>
//#include<map>
//using namespace std;//这句是必须的
//
//int main() {
//	int n;
//	int m;
//	int num[1005];
//	int q;
//	while (scanf_s("%d", &n,sizeof(int)) != EOF) {
//		map<int, int> M;
//		for (int i = 0; i < n; i++) {
//			scanf_s("%d", &num[i], sizeof(int));
//			M[num[i]]++;
//		}
//		scanf_s("%d", &m, sizeof(int));
//		for (int i = 0; i < m; i++) {
//			scanf_s("%d", &q, sizeof(int));
//			if (M[q] != 0)
//				printf("YES\n");
//			else
//				printf("NO\n");
//		}
//	}
//	return 0;
//}