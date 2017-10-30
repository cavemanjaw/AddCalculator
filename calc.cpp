#include <iostream>
#include <limits>

// Handle the limit cases
// Do overloads for this functions, that is for natural and two's complemet arithmetics
unsigned Add(unsigned first, unsigned second)
{
	return first + second;
}

unsigned Subtract(unsigned first, unsigned second)
{
	return std::numeric_limits<int>::max();
}

unsigned Multiply(unsigned first, unsigned second)
{
	unsigned product = 0;
	for (int i = 0; i < second; ++i)
	{
		product += first;
	}
	return product;
}


int main(int argc, char** argv)
{

	return 0;
}
