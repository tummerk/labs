#include <iostream>
using namespace std;
int main() {
	int Aj[9]{1,2,3,4,5,6,11,8,42};
	int num[]{0};
	for (int i = 0; i < (sizeof(Aj)/4); i++) {
		cout << i << endl;
		if ((Aj[i] % 10) != 1) {
			num[i] = Aj[i];
		}
		else {
			num[i] = 0;
		}
	}
	
	for (int i = 0; i < 9; i++) {

		cout << num[i] << i;
	}
	return 0;
}