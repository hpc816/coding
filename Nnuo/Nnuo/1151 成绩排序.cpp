//#include <iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//struct Student {
//    string name;
//    int grade;
//}stu[1005];
////�Ӵ�С����  
//bool compareDesc(Student a, Student b) {
//    return a.grade > b.grade;
//}
////��С��������  
//bool compareAsc(Student a, Student b) {
//    return a.grade < b.grade;
//}
//
//
//int main() {
//    int n, order;
//    //ʹ��stable_sortʵ���ȶ�����
//    while (cin >> n) {
//        cin >> order;
//        for (int i = 0; i < n; i++) {
//            cin >> stu[i].name >> stu[i].grade;
//        }
//        if (order == 0)
//            stable_sort(stu, stu + n, compareDesc);
//        else
//            stable_sort(stu, stu + n, compareAsc);
//        for (int i = 0; i < n; i++) {
//            cout << stu[i].name << " " << stu[i].grade << endl;
//        }
//    }
//
//    return 0;
//}



//ʹ��sort���ж�������



//struct Student {
//    string name;
//    int grade, id;
//}stu[1005];
////�Ӵ�С����  
//bool compareDesc(Student a, Student b) {
//    if (a.grade == b.grade) return a.id < b.id; //���ʱ�����±���������±�С����ǰ�� 
//    return a.grade > b.grade;
//}
////��С��������  
//bool compareAsc(Student a, Student b) {
//    if (a.grade == b.grade) return a.id < b.id;
//    return a.grade < b.grade;
//}
//int main() {
//    int n, order;
//    while (cin >> n) {
//        cin >> order;
//        for (int i = 0; i < n; i++) {
//            cin >> stu[i].name >> stu[i].grade;
//            stu[i].id = i;//ͨ�����ID�����ж�  
//        }
//        if (order == 0)
//            sort(stu, stu + n, compareDesc);
//        else
//            sort(stu, stu + n, compareAsc);
//        for (int i = 0; i < n; i++) {
//            cout << stu[i].name << " " << stu[i].grade << endl;
//        }
//    }
//    return 0;
//}

