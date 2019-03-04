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
		stoi 头文件<string> 参数是const string*   
		atoi 头文件<cstdlib> 参数是const char*,对于字符串需调用c_str()转换
		long int strtol(const char *nptr, char **endptr, int base)
		将nptr指向的字符串，根据进制数base转换为long int，第一个非法字符的地址会被赋值给*endptr
		*/
		month = stoi(line.substr(0, 2));
		day= stoi(line.substr(3, 2));
		year= stoi(line.substr(6, 4));

		cout << setw(4) << left << setfill(' ') << myMonth[month]<<" ";
		cout << setw(2) << right << setfill(' ') << day << "," << year << endl;

	}
	system("pause");
}