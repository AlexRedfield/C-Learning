#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream file("MyDate.txt");		//   01/28/2017
	if (!file) {
		cerr << "File cannot be opened!" << endl;
		exit(EXIT_FAILURE);
	}

	string myMonth[13] = { "","Jan","Feb","Mar","Apr","May","June","July","Aug","Sept","Oct","Nov","Dec" };
	string line;
	int month, day, year;

	while (file >> line) {
		/*
		stoi ͷ�ļ�<string> ������const string*   
		atoi ͷ�ļ�<cstdlib> ������const char*,�����ַ��������c_str()ת��
		long int strtol(const char *nptr, char **endptr, int base)
		��nptrָ����ַ��������ݽ�����baseת��Ϊlong int����һ���Ƿ��ַ��ĵ�ַ�ᱻ��ֵ��*endptr
		*/
		month = stoi(line.substr(0, 2));
		day= stoi(line.substr(3, 2));
		year= stoi(line.substr(6, 4));

		cout << setw(4) << left << setfill(' ') << myMonth[month]<<" ";
		cout << setw(2) << right << setfill(' ') << day << "," << year << endl;

	}
	system("pause");
}