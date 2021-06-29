//#include <stdio.h>
//#include  <stdlib.h>
//
//
//int main() {
//	int i = 0;
//	char s[7];//声明一个字符数组
//	for (int i = 0; i < 64; i++) {
//		//_itoa_s(i, s, 2);
//		int ct = 0;//记录有效位数
//		int j = i;
//		while (j != 0) {
//			s[ct++] = j % 2+'0';//先取模
//			j =j/ 2;//后整除
//		}
//		if (ct <= 6) {
//			for (int k = ct; k <= 6; k++) {
//				s[k] = 0 +'0';
//			}
//		}
//		//逆序输出
//		for (int k = 5; k >= 0; k--) {
//			printf("%c", s[k]);
//		}
//		//printf("%s\n", s);
//		printf("\n");
//	}
//	return 0;
//}