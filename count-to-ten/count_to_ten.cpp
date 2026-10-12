#include <iostream>

int main()
{
	int count{ 1 }; // initialize count to 1
	while (count <= 10) // loop while count is less than or equal to 10
    {
        std::cout << count << ' ';
		++count; // increment count by 1
    }

    std::cout << "done!\n";

    return 0;
}
