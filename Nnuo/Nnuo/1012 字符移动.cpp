//#include<stdio.h>
//#include<string.h>
//
//char s[6];
//
//int main() {
//	//gets_s(s);
//	scanf_s("%s", s);
//	int len = strlen(s);
//	for (int i = 0; i < len; i++) {
//		while (s[i] >= '0' && s[i] <= '9') {
//			//将数字字符移动到非数字字符之后【和后面一个字符交换位置】
//			char t = s[i];
//			s[i] = s[i + 1];
//			s[i + 1] = t;
//		}
//	}
//	//puts(s);
//	printf("%s", s);
//	return 0;
//}