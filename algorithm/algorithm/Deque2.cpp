#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq; 

	dq.push_back(1);  // dq�� �ڿ� ���� �ִ´�.
	dq.push_front(1);  // dq�� �տ� ���� �ִ´�.

	dq.pop_back();  // dq�� back�� �����Ѵ�.
	dq.pop_front();  // dq�� front�� �����Ѵ�.

	dq.begin();
	dq.end();  // dq�� ���۰� ���� iterator�� �����մϴ�.

	dq.front();  // dq�� front�� �����Ѵ�.(peek���)
	dq.back();  // dq�� back�� �����Ѵ�. (peek���)

	dq.at(0);  // dq�� n��° ��Ҹ� �����Ѵ�.

	dq.clear();  // dq�� ������Ҹ� ��� �����Ѵ�.

	dq.size();  // dq�� ũ�⸦ �����Ѵ�.

	dq.empty();  // dq�� ��������� 1 �����ϰ� ������� ������ 0�� �����Ѵ�.
	
	return 0;

}