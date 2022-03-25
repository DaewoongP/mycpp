#include <iostream>

int main(){
	
	int a,b;
	
	std::cin >> a;
	std::cin >> b;
	
	if (99 < a,b < 1000){
		int b1, b10, b100;
		int buf;
		
		b100 = b / 100; //b의 백의자리
		buf = b % 100; //백의자리 나머지
		b10 = buf / 10; //b의 십의자리
		buf = buf % 10; //십의자리 나머지
		b1 = buf / 1; //b의 일의자리
		
		std::cout << a*b1 << std::endl;
		std::cout << a*b10 << std::endl;
		std::cout << a*b100 << std::endl;
		std::cout << a*b << std::endl;
	}
	else std::cout << "not hundreds" << std::endl;
	
	return 0;
}