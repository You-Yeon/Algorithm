#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	vector<int> a[10];

	a[0].push_back(1);

	for (vector<int>::iterator i = a->begin(); i < a->end(); ++i)
		cout << *i << endl;


	//set<string> s;

	//// insert(element)
	//s.insert("abc");
	//s.insert("def");
	//s.insert("ghi");
	//s.insert("jkl");

	//// erase(element)
	//s.erase("jkl");

	//// empty(), size()
	//if (!s.empty()) cout << "s size : " << s.size() << '\n';

	//// find(element)
	//cout << *s.find("abc") << '\n';
	//cout << *s.find("def") << '\n';

	//// count(element)
	//cout << "abc count : " << s.count("abc") << '\n';

	return 0;
}
