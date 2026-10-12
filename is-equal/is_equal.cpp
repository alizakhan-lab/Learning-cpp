# include <iostream> // allows use of io stream header file

bool isEqual(int x, int y) //function that checks whether two integers are the same
{
	return x == y; //returns true if x=y and returns false otherwise
}

int main()
{
	std::cout << "Please input an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Plese input another integer: ";
	int y{};
	std::cin >> y;

	if (isEqual(x, y)) // calls isEqual and runs if it is true
		std::cout << x << " and " << y << " are equal";
	else // executes if the isEqual call is NOT true
		std::cout << x << " and " << y << " are not equal";
}



