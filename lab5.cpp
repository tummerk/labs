#include <iostream>
using namespace std;
int main() {
	int min1 = INT_MAX;
	int min1index;
	int Aj[]{ 1,2,3,4,5,6,11,8,42 };
	for (int i = 0; i < (sizeof(Aj) / 4); i++) {
		if ((Aj[i] % 10) == 1) {
			Aj[i] = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i < (sizeof(Aj) / 4); i++) {
		sum += Aj[i];
	}
	for (int i = 0; i < (sizeof(Aj) / 4); i++) {
		if (min1 > Aj[i]) {
			min1 = Aj[i];
			min1index = i;
		}
	}
	cout << "sum-" << sum << endl;
	cout << "min-" << min1 << endl;
	cout << "min ind-" << min1index << endl;


	//*********************************************
	int N;
	int min2 = INT_MAX;
	int mindig;
	cout << "enter N" << endl;
	cin >> N;
	int digits[10]{};
	while (N > 0) {
		int dig;
		dig = N % 10;
		digits[dig]++;
		N /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if ((digits[i] < min2) && (digits[i] != 0)) {
			min2 = digits[i];
			mindig = i;
		}
	}
	cout << mindig;
	return 0;
}
