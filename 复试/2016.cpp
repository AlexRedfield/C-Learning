#pragma warning(disable:4996)	


//����һ���ı������ı��е�ÿ�����ʵĳ���

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#pragma warning(disable:4996)

int main() {
	string s;
	getline(cin, s);

	char* str = new char[s.length()];
	strcpy(str, s.c_str());	//const char*����ֱ�Ӹ�ֵ��char*

	//��һ��
	string word;
	cout << setw(6) << "word" << setw(8) << "length" << endl;
	while (!s.empty()) {
		if (s.find(" ") == s.npos) //find�����Ҳ���ָ��ֵʱ����string::npos
		{
			//string substr (size_t pos = 0, size_t len = npos) const;
			word = s;
			cout << setw(6) << word << setw(8) << word.length() << endl;
			break;
		}
		word = s.substr(0, s.find(" "));
		cout << setw(6) << word << setw(8) << word.length() << endl;
		s.erase(0, s.find(" ") + 1);
	}

	//������ʹ��strtok()
	char *w = strtok(str, " ");

	while (w) {
		cout << w << " " << strlen(w) << endl;
		w = strtok(NULL, " ");
	}

	return 0;
}