#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(int p, std::vector<int>& v)
{
	int i, n = (int)sqrt(p);
	for(i = 0; v[i] <= n; ++i)
	{
		if( p % v[i] == 0)
			return false;
	}
	return true;
}

int main()
{
	std::vector<int> prime;
	int bottom, top;
	bool finded = false;
	std::cin >> bottom >> top;

	prime.push_back(2);
	
	if(2 >= bottom && 2 <= top)
	{
		finded = true;
		std::cout << 2 << " ";
	}
	int i; 
	for(i = 3; i <= top; ++i)
	{
		if(isPrime(i, prime))
		{
			prime.push_back(i);
			
			if( i >= bottom)
			{
				finded = true;
				std::cout << i << " ";
			}
		}
	}
	if(!finded) std::cout << "Absent";
	return 0;
}
