#include <iostream>
using namespace std;
void main() {
	//1 задание
	int a, b, c;
	cout << "enter A B C" << endl;
	cin >> a >> b >> c;
	if (((a + b) % c == 0) && ((c % b) == 0)) {
		cout << (a + b) / c - c / b << endl;
	}
	else if (((a + b) % c == 0) && ((c % b) != 0)) {
		cout << (a + b) / c + c * b << endl;
	}
	else {
		cout << a - b + c << endl;
	}
	//2 задание
	int N;

	cout << "enter N (number from 1 to 5)" << endl;
	if ((cin >> N).good()){
		if (N>5||N<1){ cout << "incorrect input" << endl; }
		else {
			switch (N)
			{
			case(1):cout << "1-milk" << endl; break;
			case(2):cout << "2-meat" << endl; break;
			case(3):cout << "3-butter" << endl; break;
			case(4):cout << "4-bread" << endl; break;
			case(5):cout << "5-cheese" << endl; break;
			}
		}
	}
	else { cout << "incorrect input" << endl; }
	//3 задание
	int num;
	cout << "enter number" << endl;
	cin >> num;
	int x;
	x = num / fabs(num);
	if (x == -1) { cout << "negative number" << endl; }
	else { cout <<"positive number"  << endl; }
}