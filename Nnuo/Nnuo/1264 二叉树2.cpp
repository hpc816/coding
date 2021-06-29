//#include<iostream>
//
//using namespace std;
//
//int ctnode(int n, int m) {
//	int ct = 1;
//	if (m > n) return 0;
//	else {
//		if (2 * m+1 <= n)
//		{
//			return ct + ctnode(n, 2 * m+1)+ctnode(n,2*m);
//		}
//		else if (2 * m  <= n) {
//			return ct + ctnode(n, 2 * m);
//		}
//	}
//	return ct;
//}
//
//int main() {
//	int n, m;
//	int ct = 0;
//	while (cin >> m >> n) {
//		if (m > n)
//			cout << ct << endl;
//		else {
//			ct = ctnode(n, m);
//			cout << ct << endl;
//		}
//	}
//	return 0;
//}