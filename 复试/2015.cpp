#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;

/*
q1:递归逆序输出数字
q2:随机掷骰子
q3:替换字符
*/

void output(string);
void q2();
void FindRepStr(char str[], const char findStr[], const char replaceStr[]);

int main() {
	string test1 = "1 x 2 y z 3 d h 4 g 5";
	string test2 = "3 x 9 0 z k k 1 0 d m h 1 g 8";
	cout << "************Question 1************" << endl;
	output(test1);
	cout << endl;
	output(test2);
	cout << endl;
	cout << "************Question 2************" << endl;
	q2();
	cout << "************Question 3************" << endl;
	char s1[] = "Gao m za Enza za";
	char s2[] = "za";
	char s3[] = "Van";

	FindRepStr(s1, s2, s3);

	return 0;
}

void output(string input) {
	if (input.length() > 1) {
		output(input.substr(1));	//从1开始，到结尾
		output(input.substr(0, 1));
	}
	else if (input.length() == 1) {
		const char* c = input.c_str();
		int n = *c - '0';
		if (n >= 0 && n <= 9) cout << n;
	}
}

void q2() {
	srand((unsigned(time(0))));
	int B[13] = {0};
	for (int i = 1; i <= 500; i++) {
		int a = rand() % 6 + 1;	//1~6
		int b = rand() % 6 + 1;
		B[a + b]++;
	}
	for (int i = 1; i < 13; i++) {
		cout << setw(2) << i << ":" << setw(2) << B[i] << endl;
	}
}

void FindRepStr(char str[], const char findStr[], const char replaceStr[]) {
	string s1(str);
	string s2(findStr);
	string s3(replaceStr);

	size_t pos = s1.find(s2);
	while (pos != string::npos) {
		s1.replace(pos, s2.length(), s3);
		pos = s1.find(s2, pos);	//从pos号位开始匹配
	}
	cout << s1<<endl;
}