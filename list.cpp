#include "list.h"
#include <iostream>

void List::insert(int position, int value)
{
	Node* new_node = new Node;
	new_node->value = value;
	Node* cur_node = first;
	int pos = 0;
	while (!(cur_node == nullptr))
	{
		if (position == pos)
		{
			if (cur_node == first)
				push_front(value);
			else
			{
				new_node->next = cur_node;
				new_node->prev = cur_node->prev;
				cur_node->prev = new_node;
				new_node->prev->next = new_node;
				size_l ++;
			}
			return;
		}
		pos++;
		cur_node = cur_node->next;
	}
	std::cout << "Error in insert(): out of range!" << std::endl;
	return;
}

void List::clear()
{
	if (size_l == 0)
	{
		std::cout << "Error: list is empty!" << std::endl;
	}
	else if (first == last)
	{
		delete first;
		first = nullptr;
		last = nullptr;
		size_l = 0;
	}
	else
	{
		while (first != nullptr)
		{
			Node* tmp_node = first->next;
			delete first;
			first = tmp_node;
		}
		last = nullptr;
		first = nullptr;
		size_l = 0;
	}
	
}

void List::push_back(int value)
{
	Node* new_node = new Node;
	new_node->value = value;
	if ((first == 0) && (last == 0))
	{
		first = new_node;
		last = new_node;
		size_l = 1;
	}
	else
	{
		new_node->prev = last;
		last->next = new_node;
		last = new_node;
		size_l++;
	}
}

void List::pop_back()
{
	if (size_l == 0)
	{
		std::cout << "Error: list is empty!" << std::endl;
	}
	else if (first == last)
	{
		delete first;
		first = nullptr;
		last = nullptr;
		size_l = 0;
	}
	else
	{
		last = last->prev;
		delete last->next;
		last->next = nullptr;
		size_l -= 1;
	}
}

void List::push_front(int value)
{
	Node* new_node = new Node;
	new_node->value = value;
	if ((first == 0) && (last == 0))
	{
		first = new_node;
		last = new_node;
		size_l = 1;
	}
	else
	{
		new_node->next = first;
		first->prev = new_node;
		first = new_node;
		size_l++;
	}
}

void List::pop_front()
{
	if (size_l == 0)
	{
		std::cout << "Error: list is empty!" << std::endl;
	}
	else if (first == last)
	{
		delete first;
		first = nullptr;
		last = nullptr;
		size_l = 0;
	}
	else
	{
		first = first->next;
		delete first->prev;
		first->prev = nullptr;
		size_l -= 1;
	}
}

void List::swap(int position1, int position2)
{
	int max = (position1 > position2) ? position1 : position2;
	int min = position1 + position2 - max;
	int pos = 0;
	Node* cur_node = first;
	Node* node1 = new Node;
	while (cur_node != nullptr)
	{
		if (pos == min)
			node1 = cur_node;
		if (pos == max)
		{
			int reserv = cur_node->value;
			cur_node->value = node1->value;
			node1->value = reserv;
			return;
		}
		pos++;
		cur_node = cur_node->next;
	}
	std::cout << "Error in swap(): out of range!" << std::endl;
}

void List::erase(int position)
{
	int pos = 0;
	Node* cur_node = first;
	while (cur_node != nullptr)
	{
		if (pos == position)
		{
			if (cur_node == first)
			{
				pop_front();
			}
			else if (cur_node == last)
			{
				pop_back();
			}
			else
			{
				cur_node->prev->next = cur_node->next;
				cur_node->next->prev = cur_node->prev;
				delete cur_node;
				size_l -= 1;
			}
			return;
		}
		cur_node = cur_node->next;
		pos++;
	}
	std::cout << "Error: out of range!" << std::endl;
}

int List::size()
{
	return size_l;
}

int List::operator[] (const int index)
{
	Node* cur_node = first;
	int pos = 0;
	while (!(cur_node == nullptr))
	{
		if (index == pos) {
			return cur_node->value;
		}
		pos++;
		cur_node = cur_node->next;
	}
	std::cout << "Error: out of range";
	return 0;
}

bool List::is_empty()
{
	if (size_l == 0)
		return true;
	return false;
}
