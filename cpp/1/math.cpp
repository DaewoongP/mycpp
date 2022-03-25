#include <iostream>

int main(void)
{
	int A = 0;
	int B = 0;
	std::cin >> A >> B;
	if (1 <= A,B <= 10000)
	{
		std::cout << A + B << std::endl;
		std::cout << A - B << std::endl;
		std::cout << A * B << std::endl;
		std::cout << A / B << std::endl;
		std::cout << A % B << std::endl;
	}
	else
		std::cout << "error!" << std::endl;
	return 0;
}