#include <iostream>
using namespace std;
//************************************************************6.1
/*const int N_max = 10000;
int sumOfDigits(int N) {
	int sum = 0;
	while (N != 0) {
		sum += N % 10;
		N /= 10;
	}
	return sum;
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void read(int mas[N_max], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
bool isNeedSort(int mas[N_max], int& n) {
	for (int i = 0; i < n; i++) {
		if (sumOfDigits(mas[i]) == 12) {
			return true;
		}
	}return false;
}
void sort(int mas[N_max], int& n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mas[i] > mas[j]) {
				swap(mas[i], mas[j]);
			}
		}
	}
}
void write(int mas[N_max], int& n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i]<<endl;
	}
}
void main(){
	int n;
	int mas[N_max];
	read(mas, n);
	if (isNeedSort) {
		sort(mas, n);
	}
	write(mas, n);
}*/
//************************************************************6.2
/*const int N_max = 1000;
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int sumOfDigits(int N) {
	int sum = 0;
	while (N != 0) {
		sum += (N % 10);
		N /= 10;
	}
	return sum;
}
int multOfDigits(int N) {
	int mult = 0;
	while (N != 0) {
		mult *= (N % 10);
		N /= 10;
	}
	return mult;
}
void sort(int mas[N_max], int& n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (multOfDigits(mas[i]) > multOfDigits(mas[j])) {
				swap(mas[i], mas[j]);
			}
			else if (multOfDigits(mas[i]) == multOfDigits(mas[j])) {
				if (sumOfDigits(mas[i]) > sumOfDigits(mas[j])) {
					swap(mas[i], mas[j]);
				}
				else if (sumOfDigits(mas[i]) == sumOfDigits(mas[j])) {
					if (mas[i] > mas[j]) {
						swap(mas[i], mas[j]);
					}
				}
			}
		}
	}
}
void read(int mas[N_max], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
void write(int mas[N_max], int& n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
}
void main() {
	int n;
	int mas[N_max];
	read(mas, n);
	sort(mas, n);
	write(mas, n);
}*/
//*********************************************************6.3
/*void write(int mas[100][100], int& n, int& m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}cout << endl;
	}
}
void read(int mas[100][100], int& n, int& m) {
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> mas[i][j];
	}
}
int count3(int mas[100][100],int st,int n) {
	int count = 0;
	for (int i=0; i < n; i++) {
		if (mas[i][st] % 10 == 3) {
			count++;
		}
	}
	return count;
}
void main() {
	int n,m;
	int mas[100][100];
	int mincount = 100;
	int minInd = 0;
	read(mas, n, m);
	write(mas, n, m);
	for (int j = 0; j < m; j++) {
		minInd = mincount > count3(mas, j, n) ? j : minInd;
		mincount = mincount > count3(mas, j, n) ? count3(mas, j, n) : mincount;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (j == minInd) {
				continue;
			}
			else { mas[i][j] = -17; }
	}
	write(mas, n, m);
}*/
//*********************************************************6.5
const int N_max = 10000;
void read(int mas[N_max], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
int multOfDigits(int N) {
	int mult = 0;
	while (N != 0) {
		mult *= (N % 10);
		N /= 10;
	}
	return mult;
}
void write(int mas[N_max], int& n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
}
void main() {
	int mas[N_max];
	int n;
	int j = 0;
	read(mas, n);
	for (int i = 0; i < n; i++) {
		cout << (multOfDigits(mas[i]) % 70);
		if ((multOfDigits(mas[i]) % 70) != 0) {
			mas[j] = mas[i];
			j++;
		}
	}
	cout << j;
	n = j;
	write(mas, n);
}
