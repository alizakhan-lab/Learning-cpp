# include <iostream> 

int main()
{
	std::cout << "Please input a value: ";
	int value{};
	std::cin >> value;

	if (value == 67)
	{
		std::cout << "Your number is brainrot!" << '\n';
	}
	else if (value > 0) 
	{
		std::cout << "Your number is not brainrot!" << '\n';
		std::cout << "Your number is " << 67 - value << " integers away from brainrot";
	}
	else
	{
		std::cout << "Your number is not brainrot!" << '\n';
		std::cout << "Your number is " << value - 67 << " integers away from brainrot";
	}

	return 0;
}



