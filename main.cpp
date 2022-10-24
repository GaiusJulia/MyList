#include <iostream>
#include "list.h"


int main(int argc, char** argv)
{	
	std::cout << "push_back" << std::endl;
	// push_back
	{
		List list;
		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.clear();
	}

	std::cout << std::endl << "push_front" << std::endl;
	// push_front
	{
		List list;
		list.push_front(1);
		list.push_front(2);
		list.push_front(3);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.clear();
	}

	std::cout << std::endl << "swap" << std::endl;
	// swap
	{
		List list;
		list.push_front(1);
		list.push_front(2);
		list.push_front(3);
		list.push_front(4);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.swap(0, 2);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.swap(3, 1);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.clear();
	}

	std::cout << std::endl << "insert" << std::endl;
	// insert
	{
		List list;
		list.insert(0, 1);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";

		list.push_back(1);
		list.insert(0, 2);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;

		list.insert(list.size_l - 1, 3);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;

		list.insert(1, 4);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
	}

	std::cout << std::endl << "pop_back" << std::endl;
	// pop_back
	{
		List list;

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_back();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_back();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_back();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_back();
	}

	std::cout << std::endl << "pop_front" << std::endl;
	// pop_front
	{
		List list;

		list.push_front(1);
		list.push_front(2);
		list.push_front(3);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_front();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_front();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_front();
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.pop_front();
	}

	// clear
	{
		List list;
		list.clear();
		list.push_back(1);
		list.clear();
		list.push_back(1);
		list.push_back(2);
		list.clear();
		list;
	}

	std::cout << std::endl << "erase" << std::endl;
	// erase
	{
		List list;
		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		list.push_back(4);
		list.push_back(5);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.erase(0);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.erase(list.size_l - 1);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;
		list.erase(1);
		for (int i = 0; i < list.size_l; i++)
			std::cout << list[i] << " ";
		std::cout << std::endl;

		list.clear();
	}

	std::cout << std::endl << "is_empty, size" << std::endl;
	// is_empty, size
	{
		List list;
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		list.push_back(1);
		list.push_back(1);
		list.insert(1, 1);
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		list.push_front(1);
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		list.erase(2);
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		list.pop_back();
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		list.pop_front();
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
		
		list.clear();
		std::cout << "is empty: " << list.is_empty() << "; size = " << list.size() << std::endl;
	}
	return 0;
}
