#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class octN
{
private:
	std::vector<int> arr;
			
public: 
	octN(std::vector<int> inputArr) {
		std::vector<int>::iterator i = inputArr.end();
		cout << "It's the class" << endl;
		int tmp = 0, digit = 0;
		while (i != inputArr.begin())
		{
			--i;
			digit = digit + *i;
			//cout << digit << endl;
			if (digit <= 7)
			{
				arr.push_back(digit);
				digit = 0;
			}
			else if (digit > 7)
			{
				digit = digit - 7;
				arr.push_back(digit);
			}
		}
		if (digit != 0) 
		{
			arr.push_back(digit);
			digit = 0;
		}
		i = arr.end();
		while (i != arr.begin())
		{
			--i;
			cout << *i << " ";
		}
		std::reverse(arr.begin(), arr.end());
	};
};

int main()
{
	std::vector<int> inputArr{9, 9, 9, 3};
	/*for (int i = 0; i < 9; i++)
	{
		inputArr.push_back(i);
		cout << "It's counter " << i << endl;
	}*/
	octN a(inputArr);
};