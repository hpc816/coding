//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//struct node {
//	int w;
//	node(int a) { w = a; }
//};
//
//bool operator <(const node& a, const node& b) {
//	return a.w > b.w;
//}
//
//
//int main() {
//	priority_queue<node> q;
//	int n, w;
//	while (cin >> n) {
//		for (int i = 0; i < n; i++) {
//			cin >> w;
//			q.push(w);//��β���
//		}
//		int ans = 0;//����������Ȩֵ
//		while (q.size() > 1) {
//			node num1 = q.top();
//			q.pop();
//			node num2 = q.top();
//			q.pop();
//			ans += (num1.w + num2.w);
//			q.push(node(num1.w + num2.w));
//		}
//		cout << ans<<endl;
//		q = priority_queue<node>();//���ŵ����һ������
//	}
//
//	return 0;
//}