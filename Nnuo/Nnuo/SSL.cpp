#include<stdio.h>
#include<iostream>
#include<algorithm>  
using namespace std;

int cmp(int a, int b) {
    return a > b;
}


////排序sort
//int a[105];
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &a[i]);
//    }
//    printf("原始数组：");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    //从小到大排序
//    printf("从小到大排序:");
//    sort(a, a + n);  //传入的排序的起点和终点都是位置
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//    //从大到小排序
//    printf("从大到小排序");
//    sort(a, a + n, cmp);
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}



////查找lower_bound(), upper_bound() 【都是使用二分查找在一个排好序的数组中进行查找】
//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int cmp(int a, int b) {  //比较函数，a>b是返回真
//    return a > b;
//}
//
//int main() {
//    int num[6] = { 1,2,4,7,15,34 };
//    for (int i = 0; i < 6; i++) {
//        cout << num[i] << " ";
//    }
//    cout << endl;
//
//    sort(num, num + 6);  //按【从小到大排序】  
//    //返回数组中【第一个大于或等于被查数】的值的位置【减去begin后得到索引】  
//    int pos1 = lower_bound(num, num + 6, 7) - num;//传入的是地址而不是索引      
//    //返回数组中【第一个大于被查数】的值 
//    int pos2 = upper_bound(num, num + 6, 7) - num;
//
//    cout << "位置："<<pos1+num<<"索引：" << pos1 <<" " << "数值： " << num[pos1] << endl;
//    cout << "位置：" << pos2 + num << "索引：" << pos2 << " " << "数值： " << num[pos2] << endl;
//
//
//    sort(num, num + 6, cmp);       //按从大到小排序  【注意使用方式】
//    //返回数组中第一个小于或等于被查数的值  
//    int pos3 = lower_bound(num, num + 6, 7, greater<int>()) - num; //重载比较方式   
//     //返回数组中第一个小于被查数的值  
//    int pos4 = upper_bound(num, num + 6, 7, greater<int>()) - num;
//
//    cout << "位置：" << pos3 + num << "索引：" << pos3 << " " << "数值： " << num[pos3] << endl;
//    cout << "位置：" << pos4 + num << "索引：" << pos4 << " " << "数值： " << num[pos4] << endl;
//    return 0;
//}


//优先队列priority_queue<type>
//#include <queue>  
//using namespace std;
//int main() {
//    priority_queue<int> q;//定义一个优先队列  【int定义队列中每个元素都要是整型】
//    q.push(1);//入队  
//    q.push(2);
//    q.push(3);
//    while (!q.empty()) {//判读队列不为空  
//        cout << q.top() << endl;//队首元素  
//        q.pop();//出队  
//    }
//    return 0;
//}



//队列queue<type>
//#include <iostream>  
//#include <queue>  
//using namespace std;
//int main() {
//    queue<int> q;//定义一个队列  
//    q.push(1);//入队  
//    q.push(2);
//    q.push(3);
//    while (!q.empty()) {//当队列不为空  
//        cout << q.front() << endl;//取出队首元素  
//        q.pop();//出队  
//    }
//    return 0;
//}





////栈stack<type>
//#include <iostream>  
//#include <stack>  
//using namespace std;
//stack<int> S;//定义一个栈  
//int main() {
//    S.push(1);//入栈  
//    S.push(10);
//    S.push(7);
//    while (!S.empty()) {//当栈不为空  
//        cout << S.top() << endl;//输出栈顶元素  
//        S.pop();//出栈  
//    }
//    return 0;
//}



//向量verctor<type>
//#include <iostream>    
//#include <vector>    
//using namespace std;
//int main() {
//    vector<int> v;//定义一个空的vector  
//    for (int i = 1; i <= 10; ++i) {
//        v.push_back(i * i); //加入到vector中  
//    }
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";  //访问vecotr的元素  
//    }
//    cout << endl;
//    return 0;
//}



//映射map<type1,type2>
//#include <iostream>  
//#include <string>  
//#include <map>  
//using namespace std;
//int main() {
//    map<string, int> dict;//定义一个map 【键是字符串类型，值是整型】 
//    dict["Tom"] = 1;//定义映射关系  
//    dict["Jone"] = 2;
//    dict["Mary"] = 1;
//
//    if (dict.count("Mary")) {//查找map  
//        cout << "Mary is in class " << dict["Mary"];
//    }
//    //使用迭代器遍历map的key和value  
//    for (map<string, int>::iterator it = dict.begin(); it != dict.end(); ++it) {
//        cout << it->first << " is in class " << it->second << endl;
//    }
//    dict.clear();//清空map  
//    return 0;
//}





//集合set<type>
//#include <iostream>  
//#include <set>  
//using namespace std;
//int main() {
//    set<string> country;//定义一个存放string的集合  
//    country.insert("China");//插入操作  
//    country.insert("America");
//    country.insert("France");
//    set<string>::iterator it;
//    //使用迭代器遍历集合元素  
//    for (it = country.begin(); it != country.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout << endl;
//    country.erase("American");//删除集合内的元素  
//    country.erase("England");
//    if (country.count("China")) {//统计元素个数  
//        cout << "China in country." << endl;
//    }
//    country.clear();//清空集合  
//    return 0;
//}
