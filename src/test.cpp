/*
 * test.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: Tiffany
 */

#include "DoubleLinkedList.h"
#include "OrderedDoubleLinkedList.h"
#include <iostream>
int main()
{
	std::cout<<"what am i doing\n";
	DoubleLinkedList<int> list = DoubleLinkedList<int>();
	list.push_front(5);
	list.push_front(2);
	list.pop_back();
	list.push_back(8);
	list.insert_before(list.find(8),7);
	list.insert_after(list.find(8),9);
	//list.erase(2);
	//list.print();
	std::cout<<"no crash\n";
	//list.debug(std::cout);
	return 0;
}