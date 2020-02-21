#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq; 

	dq.push_back(1);  // dq의 뒤에 값을 넣는다.
	dq.push_front(1);  // dq의 앞에 값을 넣는다.

	dq.pop_back();  // dq의 back을 삭제한다.
	dq.pop_front();  // dq의 front를 삭제한다.

	dq.begin();
	dq.end();  // dq의 시작과 끝을 iterator로 리턴합니다.

	dq.front();  // dq의 front를 리턴한다.(peek기능)
	dq.back();  // dq의 back를 리턴한다. (peek기능)

	dq.at(0);  // dq의 n번째 요소를 리턴한다.

	dq.clear();  // dq의 구성요소를 모두 제거한다.

	dq.size();  // dq의 크기를 리턴한다.

	dq.empty();  // dq가 비어있으면 1 리턴하고 비어있지 않으면 0을 리턴한다.
	
	return 0;

}