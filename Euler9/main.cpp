#include <iostream>
#include <vector>

//init variables
int a = 0;
int b = 0;
int c = 0;


int NumberstoCheck = 100;

std::vector<int> triplesCount;
void FindTriples()
{

	for (int i = 0; i < NumberstoCheck; i++)//numerator
	{



		if (a*a + b*b == c*c)
		{
			triplesCount.push_back(a);
			triplesCount.push_back(b);
			triplesCount.push_back(c);
		}
	}




}
int main()
{
	//set victory conditions

	FindTriples();
	//for (int i = 0; i < primeCount.size(); i++)
	//{
	//	std::cout << primeCount[i] << std::endl;
	//}
	for (int i = 0; i <  triplesCount.size(); i++)
	{
		a = triplesCount[i];
		b = triplesCount[i + 1];
		c = triplesCount[i + 2];
		std::cout << a << "  " << b << "  " << c << std::endl;
		if (a*a + b*b == c*c&&a + b + c == 1000)
		{
			std::cout << a << "  " << b << "  " << c << std::endl;
			goto hell;
		}

	}

hell:
	system("PAUSE");
}

