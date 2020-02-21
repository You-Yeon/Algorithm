#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	// push
	st.push(3);
	st.push(2);
	st.push(1);

	// pop
	st.pop();

	// top
	cout << "top : " << st.top() << endl;

	// size
	cout << "size : "<< st.size() << endl;

	// empty
	cout << "empty : " << st.empty() << endl;

	return 0;
}