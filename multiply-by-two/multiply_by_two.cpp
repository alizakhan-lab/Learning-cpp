#include <iostream>

int main()
{
	int num{}; // initializes variable num 

	std::cout << "Please input an integer:"; /* prompts the user to input a number
	[doesn't need  \n because the user will press enter when they input their number] */

	std::cin >> num; // assigns user input to variable num

	std::cout << num << " x 2 = " << num * 2 << '\n'; /* prints the result of multiplying num by 2 and
	ensures next input will be on a different line */

	return 0;
}