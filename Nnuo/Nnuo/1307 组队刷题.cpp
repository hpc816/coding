//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//struct Question {
//	double w, m;
//}Q[1005];
//
//bool cmp(Question a, Question b) {
//	return (a.m / a.w) < (b.m / b.w);
//}
//
//
//int main() {
//	int n;
//	double m;
//	while (scanf_s("%lf %d", &m, &n,sizeof(int)+sizeof(double)+1) != EOF) {
//		if (m == -1 && n == -1)
//			break;
//		for (int i = 0; i < n; i++) {
//			scanf_s("%lf %lf", &Q[i].w, &Q[i].m,1+2*sizeof(double));
//		}
//		sort(Q, Q + n, cmp);
//		double ct = 0;
//		for (int i = 0; i < n; i++) {
//			if (m >= Q[i].m) {
//				ct += Q[i].w;
//				m -= Q[i].m;
//			}
//			else {
//				ct += m * Q[i].w / Q[i].m;
//				break;
//			}
//		}
//		printf("%.3lf\n", ct);
//	}
//
//	return 0;
//}