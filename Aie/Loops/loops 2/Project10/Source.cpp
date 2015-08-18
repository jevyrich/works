#include<iostream>
int main()
{
	for (int i = 100; i >= 0; i--)
	{
		if (i%3==0)
		{
			std::cout << "fizz";
		}
		if (i % 5 == 0)
		{
			std::cout << "buzz";
		}
		std::cout << i << std::endl;

	}
	std::cin.get();
}