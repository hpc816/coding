#include<stdio.h>
#include<iostream>
#include<algorithm>  
using namespace std;

int cmp(int a, int b) {
    return a > b;
}


////����sort
//int a[105];
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &a[i]);
//    }
//    printf("ԭʼ���飺");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    //��С��������
//    printf("��С��������:");
//    sort(a, a + n);  //���������������յ㶼��λ��
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//    //�Ӵ�С����
//    printf("�Ӵ�С����");
//    sort(a, a + n, cmp);
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}



////����lower_bound(), upper_bound() ������ʹ�ö��ֲ�����һ���ź���������н��в��ҡ�
//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int cmp(int a, int b) {  //�ȽϺ�����a>b�Ƿ�����
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
//    sort(num, num + 6);  //������С��������  
//    //���������С���һ�����ڻ���ڱ���������ֵ��λ�á���ȥbegin��õ�������  
//    int pos1 = lower_bound(num, num + 6, 7) - num;//������ǵ�ַ����������      
//    //���������С���һ�����ڱ���������ֵ 
//    int pos2 = upper_bound(num, num + 6, 7) - num;
//
//    cout << "λ�ã�"<<pos1+num<<"������" << pos1 <<" " << "��ֵ�� " << num[pos1] << endl;
//    cout << "λ�ã�" << pos2 + num << "������" << pos2 << " " << "��ֵ�� " << num[pos2] << endl;
//
//
//    sort(num, num + 6, cmp);       //���Ӵ�С����  ��ע��ʹ�÷�ʽ��
//    //���������е�һ��С�ڻ���ڱ�������ֵ  
//    int pos3 = lower_bound(num, num + 6, 7, greater<int>()) - num; //���رȽϷ�ʽ   
//     //���������е�һ��С�ڱ�������ֵ  
//    int pos4 = upper_bound(num, num + 6, 7, greater<int>()) - num;
//
//    cout << "λ�ã�" << pos3 + num << "������" << pos3 << " " << "��ֵ�� " << num[pos3] << endl;
//    cout << "λ�ã�" << pos4 + num << "������" << pos4 << " " << "��ֵ�� " << num[pos4] << endl;
//    return 0;
//}


//���ȶ���priority_queue<type>
//#include <queue>  
//using namespace std;
//int main() {
//    priority_queue<int> q;//����һ�����ȶ���  ��int���������ÿ��Ԫ�ض�Ҫ�����͡�
//    q.push(1);//���  
//    q.push(2);
//    q.push(3);
//    while (!q.empty()) {//�ж����в�Ϊ��  
//        cout << q.top() << endl;//����Ԫ��  
//        q.pop();//����  
//    }
//    return 0;
//}



//����queue<type>
//#include <iostream>  
//#include <queue>  
//using namespace std;
//int main() {
//    queue<int> q;//����һ������  
//    q.push(1);//���  
//    q.push(2);
//    q.push(3);
//    while (!q.empty()) {//�����в�Ϊ��  
//        cout << q.front() << endl;//ȡ������Ԫ��  
//        q.pop();//����  
//    }
//    return 0;
//}





////ջstack<type>
//#include <iostream>  
//#include <stack>  
//using namespace std;
//stack<int> S;//����һ��ջ  
//int main() {
//    S.push(1);//��ջ  
//    S.push(10);
//    S.push(7);
//    while (!S.empty()) {//��ջ��Ϊ��  
//        cout << S.top() << endl;//���ջ��Ԫ��  
//        S.pop();//��ջ  
//    }
//    return 0;
//}



//����verctor<type>
//#include <iostream>    
//#include <vector>    
//using namespace std;
//int main() {
//    vector<int> v;//����һ���յ�vector  
//    for (int i = 1; i <= 10; ++i) {
//        v.push_back(i * i); //���뵽vector��  
//    }
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";  //����vecotr��Ԫ��  
//    }
//    cout << endl;
//    return 0;
//}



//ӳ��map<type1,type2>
//#include <iostream>  
//#include <string>  
//#include <map>  
//using namespace std;
//int main() {
//    map<string, int> dict;//����һ��map �������ַ������ͣ�ֵ�����͡� 
//    dict["Tom"] = 1;//����ӳ���ϵ  
//    dict["Jone"] = 2;
//    dict["Mary"] = 1;
//
//    if (dict.count("Mary")) {//����map  
//        cout << "Mary is in class " << dict["Mary"];
//    }
//    //ʹ�õ���������map��key��value  
//    for (map<string, int>::iterator it = dict.begin(); it != dict.end(); ++it) {
//        cout << it->first << " is in class " << it->second << endl;
//    }
//    dict.clear();//���map  
//    return 0;
//}





//����set<type>
//#include <iostream>  
//#include <set>  
//using namespace std;
//int main() {
//    set<string> country;//����һ�����string�ļ���  
//    country.insert("China");//�������  
//    country.insert("America");
//    country.insert("France");
//    set<string>::iterator it;
//    //ʹ�õ�������������Ԫ��  
//    for (it = country.begin(); it != country.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout << endl;
//    country.erase("American");//ɾ�������ڵ�Ԫ��  
//    country.erase("England");
//    if (country.count("China")) {//ͳ��Ԫ�ظ���  
//        cout << "China in country." << endl;
//    }
//    country.clear();//��ռ���  
//    return 0;
//}
