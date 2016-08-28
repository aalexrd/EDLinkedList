#include "LinkedList.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(nullptr));
	LinkedList<int> list;
	for (int i = 0; i < 5; ++i)
		list.add(rand() % 100);
	std::cout << "List: \n" << list.toString();
	std::cin.get();
	list.reverse();
	std::cout << "List: \n" << list.toString();
	std::cin.get();
	return 0;
}
