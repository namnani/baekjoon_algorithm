#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> m;

	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));

	pair<int, int> p(9, 50);
	m.insert(p);

	m[11] = 200;
	m[12] = 200;
	m[13] = 40;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << "." << (*iter).second << ")" << " ";
	cout << endl;

	m[13] = 140;

	for (iter = m.begin(); iter != m.end(); ++iter) 
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	cout << endl;

	pair<map<int, int>::iterator, bool > pr;

	// insert ��� ����
	pr = m.insert(pair<int, int>(10, 30));
	if (true == pr.second)
		cout << "key : " << pr.first->first << ", value : " << pr.first->second << " ���� �Ϸ�!" << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;

	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	cout << endl;

	// insert ��� ���� (�ߺ� key ����)
	pr = m.insert(pair<int, int>(10, 40));
	if (true == pr.second)
		cout << "key : " << pr.first->first << ", value : " << pr.first->second << " ���� �Ϸ�!" << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;

}