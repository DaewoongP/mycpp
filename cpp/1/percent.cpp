#include <iostream>

int main(){
	
	int A,B,C;
	
	std::cin >> A >> B >> C;
	
	if(2<= A,B,C <= 10000){
		std::cout << (A+B)%C << std::endl;
		std::cout << ((A%C)+(B%C))%C << std::endl;
		std::cout << (A*B)%C << std::endl;
		std::cout << ((A%C)*(B%C))%C << std::endl;
		
	}
	else std::cout << "error" << std::endl;
	
	return 0;
}