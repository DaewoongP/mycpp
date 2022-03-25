#include <iostream>

int main()
{
	int y, seogi;
	int bangkok = 543;
	
	std::cin >> y;
	if (1000 <= y <= 3000)
	{
		seogi = y-bangkok;
		std::cout << seogi << std::endl;
	}
	else std::cout << "error!" << std::endl;
	return 0;
}	