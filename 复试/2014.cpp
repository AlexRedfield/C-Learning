#include<iostream>
#include<iomanip>
using namespace std;

//������ת��Ϊ�ַ���
void intToStr(int a, char *s);

int main() {
	int num = 123456;
	char c[22];
	intToStr(num, c);
	cout << c << endl;

	double a = 123.456;

	cout <<fixed<<setprecision(1)<< a<< endl;		//�Ӹ�fixed��ʾsetprecision������ֻ��ʾС����

	
	return 0;
}

void intToStr(int a, char *s) {
	int count = 0;
	while (a != 0) {
		s[count++] = a % 10 + '0';
		a /= 10;
	}
	s[count] = '\0';
	int left = 0;
	int right = count - 1;
	while (left < right) {
		int t = s[left];
		s[left] = s[right];
		s[right] = t;
		left++;
		right--;
	}

}
