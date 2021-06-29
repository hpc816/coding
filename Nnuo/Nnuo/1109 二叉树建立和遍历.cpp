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
////输入先序遍历序列，构建二叉树
//void CreateBitTree(BitTree& T) {
//	char c;
//	cin >> c;
//	if (c == '0') {
//		T = NULL;
//	}
//	else {
//		T = new node;
//		T->v = c;
//		CreateBitTree(T->lchild);//创建左子树节点 【左子树创建完才轮得到父节点的右子树】 
//		CreateBitTree(T->rchild);
//	}
//}
//
////先序遍历输出序列
//void PreOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		cout << T->v << ' ';
//		PreOrderTraverse(T->lchild);
//		PreOrderTraverse(T->rchild);
//	}
//
//}
//
////中序遍历输出序列
//void InOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		InOrderTraverse(T->lchild);
//		cout << T->v << ' ';
//		InOrderTraverse(T->rchild);
//	}
//
//}
//
////后序遍历输出序列
//void PostOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		PostOrderTraverse(T->lchild);
//		PostOrderTraverse(T->rchild);
//		cout << T->v << ' ';
//	}
//}
//
//
//queue<BitTree> q;//定义一个队列（放入层序遍历时的节点）
////层序遍历输出序列
//void CxOrderTraverse(BitTree T) {
//	if (T != NULL) {
//		q.push(T);
//	}
//	while (!q.empty()) {//队列非空
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
////二叉树深度
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
////二叉树叶子节点个数
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
//	CreateBitTree(T);//创建二叉树
//	PreOrderTraverse(T);//先序
//	cout << endl;
//	InOrderTraverse(T);//中序
//	cout << endl;
//	PostOrderTraverse(T);//后序
//	cout << endl;
//	CxOrderTraverse(T);//后序
//	cout << endl;
//	cout << ctnode(T) << endl;//叶子节点数
//	cout << depth(T) << endl;//层数
//	return 0;
//}