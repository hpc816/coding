//#include <stdio.h>
//#include  <stdlib.h>
//
//
//int main() {
//	int i = 0;
//	char s[7];//����һ���ַ�����
//	for (int i = 0; i < 64; i++) {
//		//_itoa_s(i, s, 2);
//		int ct = 0;//��¼��Чλ��
//		int j = i;
//		while (j != 0) {
//			s[ct++] = j % 2+'0';//��ȡģ
//			j =j/ 2;//������
//		}
//		if (ct <= 6) {
//			for (int k = ct; k <= 6; k++) {
//				s[k] = 0 +'0';
//			}
//		}
//		//�������
//		for (int k = 5; k >= 0; k--) {
//			printf("%c", s[k]);
//		}
//		//printf("%s\n", s);
//		printf("\n");
//	}
//	return 0;
//}