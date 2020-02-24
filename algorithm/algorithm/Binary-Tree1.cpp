#include <iostream>

using namespace std;

template<typename T>
class Node
{
public:
	T data;
	Node* left;
	Node* right;

	Node(T _data = 0, Node* _left = NULL, Node* _right  = NULL) : data(_data), left(_left), right(_right)
	{

	}

	~Node()
	{
		left = NULL;
		right = NULL;
	}
};

template<typename T>
class Binary_Tree
{
public:
	int size;
	Node<T>* root;

	Binary_Tree(T data = 0)
	{
		root = new Node<T>(data, NULL, NULL);
	}


	~Binary_Tree()
	{
		delete root;
	}

	Node<T>* Getroot()
	{
		return root;
	}

	void visit(Node<T>* current)
	{
		cout << current-> data << endl;
	}

	// 전위 순회 Current - Left - Right
	void preorder(Node<T>* current) 
	{
		if (!current)
		{
			visit(current);
			preorder(current->left);
			preorder(current->right);
		}
	}

	// 중위 순회 Left - Current - Right
	void inorder(Node<T>* current)
	{
		if (!current)
		{
			inorder(current->left);
			visit(current);
			inorder(current->right);
		}
	}

	// 후위 순회 Left - Right - Current
	void postorder(Node<T>* current)
	{
		if (!current)
		{
			postorder(current->left);
			postorder(current->right);
			visit(current);
		}
	}

	// 노드 추가
	void insert(T data)
	{
		Node<T>* temp = root;

		while (true)
		{
			if (data < temp-> data) // 왼쪽
			{
				if (!temp-> data) // 데이터 없다면 추가.
				{
					temp-> left = data;
					return;
				}
				else // 있다면 다시
				{
					temp = root-> left;
				}
			}
			else // 오른쪽
			{
				if (!temp-> data) // 데이터 없다면 추가.
				{
					temp-> right = data;
					return;
				}
				else // 있다면 다시
				{
					temp = root-> right;
				}
			}
		}

	}
};