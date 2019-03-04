#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 100000

//找到100000以下所有素数

void getPrime(vector<int>&primes) {
	for (int i = 2; i < MAX_SIZE; i++) {
		int flag = 1;
		for (int k = 2; k*k <= i; k++) {
			if (i%k == 0) {
				flag = 0;
				break;
			}			
		}
		if(flag) primes.push_back(i);
	}
}

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}


int main() {

	vector<bool> numbers(MAX_SIZE, true);       //初始化，默认都是质数true
	vector<int> primes;
	
	getPrime(primes);
	/*
	for (int i = 2; i < MAX_SIZE; i++) {
		if (isPrime(i)) primes.push_back(i);
	}*/

	int count = 0;
	for (vector<int>::iterator it = primes.begin(); it != primes.end(); it++) {
		cout << *it << " ";
		if (++count % 10 == 0) {
			cout << endl;
		}
	}

	cout << endl;
	return 0;
}
