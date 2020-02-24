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

	// ���� ��ȸ Current - Left - Right
	void preorder(Node<T>* current) 
	{
		if (!current)
		{
			visit(current);
			preorder(current->left);
			preorder(current->right);
		}
	}

	// ���� ��ȸ Left - Current - Right
	void inorder(Node<T>* current)
	{
		if (!current)
		{
			inorder(current->left);
			visit(current);
			inorder(current->right);
		}
	}

	// ���� ��ȸ Left - Right - Current
	void postorder(Node<T>* current)
	{
		if (!current)
		{
			postorder(current->left);
			postorder(current->right);
			visit(current);
		}
	}

	// ��� �߰�
	void insert(T data)
	{
		Node<T>* temp = root;

		while (true)
		{
			if (data < temp-> data) // ����
			{
				if (!temp-> data) // ������ ���ٸ� �߰�.
				{
					temp-> left = data;
					return;
				}
				else // �ִٸ� �ٽ�
				{
					temp = root-> left;
				}
			}
			else // ������
			{
				if (!temp-> data) // ������ ���ٸ� �߰�.
				{
					temp-> right = data;
					return;
				}
				else // �ִٸ� �ٽ�
				{
					temp = root-> right;
				}
			}
		}

	}
};