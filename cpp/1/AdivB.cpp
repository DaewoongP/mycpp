#include <iostream> 

int main(void)
{
	double A, B;
	
    std::cin >> A >> B;
	std::cout << std::fixed; //precision이 혼자 쓰이면 전체 자리에 영향이 가지만 
    std::cout.precision(10); //fixed와 함께 사용하여 소수점 밑 10자리까지 출력 가능하게 해준다.
    std::cout << A / B << std::endl;

    return 0;
}
