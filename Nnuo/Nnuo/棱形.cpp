//#include <stdio.h>  
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    //������  
//    for (int i = 1; i <= n; i++) {//��ӡ��1-n��
//        for (int j = 1; j <= n - i; j++)//�ȴ�ӡn-i���ո�  
//            printf(" ");
//
//        for (int j = 0; j < 2 * i - 1; j++) //��ӡi��*
//            printf("*");
//        printf("\n"); //���� 
//    }
//    //������  ������ֻ��Ҫ�������Ƿ�����
//    for (int i = n - 1; i >= 1; i--) {//��ӡ��n+1-2n-1��
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (int j = 0; j < 2*i-1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}