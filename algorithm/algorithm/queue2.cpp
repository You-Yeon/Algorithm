#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> qu;

	// push
	qu.push(3);
	qu.push(2);
	qu.push(1);

	// pop
	qu.pop();

	// front
	cout << "front : " << qu .front() << endl;

	// back
	cout << "back : " << qu.back() << endl;

	// size
	cout << "size : " << qu.size() << endl;

	// empty
	cout << "empty : " << qu.empty() << endl;

	return 0;
}