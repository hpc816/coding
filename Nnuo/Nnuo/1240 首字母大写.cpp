//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	char s[105];
//	int len = strlen(s);
//	scanf_s("%s", s, sizeof(s));
//	if (s[0] >= 'a' && s[0] <= 'z')
//		s[0] = s[0] - 'a' + 'A';
//	for (int i = 1; i < len; i++) {
//		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\r' || s[i] == '\n')
//			//if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
//				s[i + 1] = s[i + 1] - 'a' + 'A';
//	}
//	printf("%s", s);
//	for (int i = 0; i < len; i++) {
//		printf("%c", s[i]);
//	}
//	return 0;
//}