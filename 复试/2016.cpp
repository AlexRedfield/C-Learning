#pragma warning(disable:4996)	


//输入一行文本，求文本中的每个单词的长度

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#pragma warning(disable:4996)

int main() {
	string s;
	getline(cin, s);

	char* str = new char[s.length()];
	strcpy(str, s.c_str());	//const char*不能直接赋值到char*

	//法一：
	string word;
	cout << setw(6) << "word" << setw(8) << "length" << endl;
	while (!s.empty()) {
		if (s.find(" ") == s.npos) //find函数找不到指定值时返回string::npos
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

	//法二：使用strtok()
	char *w = strtok(str, " ");

	while (w) {
		cout << w << " " << strlen(w) << endl;
		w = strtok(NULL, " ");
	}

	return 0;
}