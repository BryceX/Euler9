#include <iostream>
#include <vector>
#include <algorithm>


//initialize my vars
int a = 0;
int b = 0;
int size = 1000;
int main()
{
	for (int i = 1; i < size;i++)
	{
		a = i;
		for (int j = 1; j < size; j++)
		{
			b = j;
			if (a + b + sqrt(a*a + b*b) == size&&a<b) //sqrt(a^2+b^2) is basically c, don't need to make another variable here
			{
				//only need my if statement here, rather than all over the place before
				std::cout << a << "  " << b << "  " << sqrt(a*a + b*b) << std::endl;
				std::cout << (long)(a * b *sqrt(a*a + b*b)) << std::endl; // cast as long otherwise it shows as exponents
				break;
			}
		}
	}
	system("PAUSE");
}

