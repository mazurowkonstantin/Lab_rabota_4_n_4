#include <iostream>

int fibonachi(int x) {
	if (x == 0)
		return 0;
	if (x == 1)
		return 1;
	return fibonachi(x - 1) + fibonachi(x - 2);
}

int main() 
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cout << fibonachi(i) << std::endl;
	}
	system("pause");
	return 0;
}
