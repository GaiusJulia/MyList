#include <iostream>
#include "list.h"


int main(int argc, char** argv)
{
	List list;
	list.push_front(3);
	list.push_front(2);
	list.push_front(1);
	list.swap(0, 2);
	for (int i = 0; i < list.size_l; i++)
		std::cout << list[i] << " ";
	list.clear();
	return 0;
}
