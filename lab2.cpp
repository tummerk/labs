#include <iostream>
#include <cmath>
void main()
{
	int a, b, c;
	std::cout << "enter a,b,c" << std::endl;
	std::cin >> a >> b >> c;
	double p = (a + b + c);
	p = p / 2;
	if ((a+b<c) || (a+c<b) || (c+b<a)){
		std::cout << "error, triangle not exists" << std::endl;
	}else{
		double s = pow(p * (p - a) * (p - b) * (p - c), 0.5);
		std::cout << s << std::endl;
	}
	

}