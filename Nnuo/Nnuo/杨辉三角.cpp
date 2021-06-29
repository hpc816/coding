//#include <stdio.h>  
//int main() {
//    int a[21][21] = { 0 };//数组里的所有值初始化为0  【n<=20,故数组大小设置为21够用】
//    int n;  //行数
//    while (scanf_s("%d", &n) != EOF) {  //多组输入
//        if (n == 0) break;  //终止条件
//        a[1][1] = 1;  //第一行第一个数
//        for (int i = 2; i <= n; i++) {//2-n行  
//            for (int j = 1; j <= i; j++) {
//                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//每个数等于肩上两数之和  
//            }
//        }
//        //输出
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= i; j++) {
//                printf("%d ", a[i][j]);
//            }
//            printf("\n");
//        }
//        //输出（棱形）【怎么弄？】
//
//
//    }
//    return 0;
//}