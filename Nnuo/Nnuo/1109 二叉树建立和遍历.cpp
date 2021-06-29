//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//typedef struct node {
//	char v;
//	struct node* lchild, * rchild;
//}*BitTree;
//
//
////��������������У�����������
//void CreateBitTree(BitTree& T) {
//	char c;
//	cin >> c;
//	if (c == '0') {
//		T = NULL;
//	}
//	else {
//		T = new node;
//		T->v = c;
//		CreateBitTree(T->lchild);//�����������ڵ� ����������������ֵõ����ڵ���������� 
//		CreateBitTree(T->rchild);
//	}
//}
//
////��������������
//void PreOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		cout << T->v << ' ';
//		PreOrderTraverse(T->lchild);
//		PreOrderTraverse(T->rchild);
//	}
//
//}
//
////��������������
//void InOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		InOrderTraverse(T->lchild);
//		cout << T->v << ' ';
//		InOrderTraverse(T->rchild);
//	}
//
//}
//
////��������������
//void PostOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		PostOrderTraverse(T->lchild);
//		PostOrderTraverse(T->rchild);
//		cout << T->v << ' ';
//	}
//}
//
//
//queue<BitTree> q;//����һ�����У�����������ʱ�Ľڵ㣩
////��������������
//void CxOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		q.push(T);
//	}
//	while (!q.empty()) {//���зǿ�
//		BitTree n = q.front();
//		cout << n->v << ' ';
//		q.pop();
//		if (n->lchild != NULL)
//			q.push(n->lchild);
//		if (n->rchild != NULL)
//			q.push(n->rchild);
//	}
//}
//
//
////���������
//int depth(BitTree T) {
//	if (T == NULL)
//		return 0;
//
//	int ld = depth(T->lchild);
//	int rd = depth(T->rchild);
//	return 1 + max(ld, rd);
//}
//
//
////������Ҷ�ӽڵ����
//int ctnode(BitTree T) {
//	int ct;
//	if (T == NULL)
//		return 0;
//	if (T->lchild == NULL && T->rchild == NULL)
//		return 1;
//	return ctnode(T->lchild) + ctnode(T->rchild);
//}
//
//
//int main() {
//	BitTree T;
//	CreateBitTree(T);//����������
//	PreOrderTraverse(T);//����
//	cout << endl;
//	InOrderTraverse(T);//����
//	cout << endl;
//	PostOrderTraverse(T);//����
//	cout << endl;
//	CxOrderTraverse(T);//����
//	cout << endl;
//	cout << ctnode(T) << endl;//Ҷ�ӽڵ���
//	cout << depth(T) << endl;//����
//	return 0;
//}