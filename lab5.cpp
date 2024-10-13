#include <iostream>
#include <string>
#include <vector>
using namespace std;
int countDigit(int N, int i) {
	int count = 0;
	while (N>0){
		if (N%10==i){
			count++;
		}
		N /= 10;
	}
	return count;
}
int main() {
	int S = 0;
	int min = INT_MAX;
	int m = 0;
	int i,index=0;
	while (cin >> i) {
		if (i == 0) {
			cout << "Sum is equal " << S << endl;
			cout << "Min value is " << min << endl;
			cout << "Index of min value is " << index << endl;
			break;
		}
		if (i % 10 != 1) {
			S = S + i;
			index = i < min ? m : index;
			min = min > i ? i : min;
		}
		
		m++;
	}
	int N;
	int min1=10;
	int minDig=100;
	cout << "enter N " << endl;
	cin >> N;
	for (int i = 0; i < 10; i++) {
		if (countDigit(N, i)>0) {
			minDig = min1 < countDigit(N, i) ? minDig : i;
			min1 = min1 > countDigit(N, i) ? countDigit(N, i) : min1;
			
		}
	}
	cout<<minDig;
	return 0;
}
