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
////从大到小排序  
//bool compareDesc(Student a, Student b) {
//    return a.grade > b.grade;
//}
////从小到大排序  
//bool compareAsc(Student a, Student b) {
//    return a.grade < b.grade;
//}
//
//
//int main() {
//    int n, order;
//    //使用stable_sort实现稳定排序
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



//使用sort进行二级排序



//struct Student {
//    string name;
//    int grade, id;
//}stu[1005];
////从大到小排序  
//bool compareDesc(Student a, Student b) {
//    if (a.grade == b.grade) return a.id < b.id; //相等时根据下标进行排序，下标小的在前面 
//    return a.grade > b.grade;
//}
////从小到大排序  
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
//            stu[i].id = i;//通过标记ID进行判断  
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

