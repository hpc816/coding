//#include<stdio.h>
//#include<stack>
//#include<string.h>
//
//using namespace std;
//
//int main() {
//	char ss[105];
//	scanf("%s", ss);
//	int len = strlen(ss);
//	stack<char> s;
//	//s.push(ss[0]);
//	//for (int i = 1; i < len; i++) {
//	//	if (s.top() == '[' && ss[i] == ']') {
//	//		s.pop();//匹配成功，栈顶元素出栈
//
//	//	}
//	//	if (s.top() == '(' && ss[i] == ')') {
//	//		s.pop();//匹配成功，栈顶元素出栈
//	//	}
//	//	else
//	//		s.push(ss[i]);
//	//
//	//}
//	for (int i = 0; i < len; i++) {
//		if (!s.empty()) {
//			char now = s.top();
//			if (ss[i] == ')' && now == '(' || ss[i] == ']' && now == '[')
//				s.pop();
//			else s.push(ss[i]);
//		}
//		else s.push(ss[i]);
//	}
//
//	if (!s.empty()) {//最后栈非空，则没有正确匹配
//		printf("NO\n");
//	}
//	else
//		printf("YES\n");
//
//	return 0;
//}