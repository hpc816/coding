//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//bool comp(int a, int b) {
//	if (a % 2 == b % 2) {
//		if (a % 2 == 1)
//			return a > b;
//		else
//			return a < b;
//	
//	}	
//	else
//		return a % 2 > b % 2;
//}
//
//
//int main() {
//	int num[11];
//	while (cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6] >> num[7] >> num[8] >> num[9])
//	{
//		sort(num, num + 10, comp);
//		for (int i = 0; i < 10; i++) {
//			cout << num[i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}