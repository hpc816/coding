//#include <stdio.h>  
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    //上三角  
//    for (int i = 1; i <= n; i++) {//打印第1-n行
//        for (int j = 1; j <= n - i; j++)//先打印n-i个空格  
//            printf(" ");
//
//        for (int j = 0; j < 2 * i - 1; j++) //打印i个*
//            printf("*");
//        printf("\n"); //换行 
//    }
//    //下三角  下三角只需要将上三角反过来
//    for (int i = n - 1; i >= 1; i--) {//打印第n+1-2n-1行
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