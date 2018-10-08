#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	vector<pair<int, string> > v;

	v.push_back(pair<int, string>(3, "Dok2"));
	v.push_back(pair<int, string>(6, "DMask"));
	v.push_back(pair<int, string>(1, "Tiger JK"));
	v.push_back(pair<int, string>(4, "Block"));
	v.push_back(pair<int, string>(2, "banana"));
	v.push_back(pair<int, string>(2, "apple"));

	cout << "=== After sort === " << endl;

	vector<pair<int, string> >::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "[" << iter->first << "," << iter->second << "]" << endl;
	}

	cout << endl;
	sort(v.begin(), v.end());
	cout << "=== After sort === " << endl;

	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "[" << iter->first << "," << iter->second << "]" << endl;
	}

	return 0;
}
