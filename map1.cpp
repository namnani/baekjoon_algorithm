#include <iostream>
#include <map>
#include <functional>
#include <string>
using namespace std;

int main() {

	// greater 정렬 기준의 key:int, value:string 타입의 map 생성
	map<int, string> m;

	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";

	map<int, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << iter->first << ',' << iter->second << ") ";
	cout << endl;

	// key가 5인 요소 찾기
	iter = m.find(5);
	if (iter != m.end())
		cout << "key 5에 매핑된 value : " << iter->second << endl;

	// key가 5인 요소의 첫번째 요소 / 마지막의 다음 요소 찾기
	map<int, string>::iterator lower_iter;
	map<int, string>::iterator upper_iter;
	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);

	cout << "lower_iter : " << lower_iter->second << endl;
	cout << "upper_iter : " << upper_iter->second << endl;

	// key가 5인 요소의 범위  찾기
	pair<map<int, string>::iterator, map<int, string>::iterator> iter_pair;
	iter_pair = m.equal_range(5);

	for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
		cout << "(" << iter->first << ',' << iter->second << ") ";
	cout << endl;

	return 0;
}

