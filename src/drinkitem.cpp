/*
 * drinkitem.cpp
 *
 *  Created on: Sep 24, 2016
 *      Author: Dylan Yu
 */

#include "drinkitem.h"
#include <iostream>
DrinkItem::DrinkItem()
{
	name = "";
	price = 0.0;
	quantity = 0;
	purchased = 0;
	sales = 0;
}
DrinkItem::DrinkItem(std::string name, double price, unsigned int quantity)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	purchased = 0;
	sales = 0;
}
std::string DrinkItem::getName() const
{
	return name;
}
void DrinkItem::setName(std::string newName)
{
	name = newName;
}
double DrinkItem::getPrice() const
{
	return price;
}
void DrinkItem::setPrice(double newPrice)
{
	price = newPrice;
}
unsigned int DrinkItem::getQuantity() const
{
	return quantity;
}
unsigned int DrinkItem::getPurchased() const
{
	return purchased;
}
double DrinkItem::getSales() const
{
	return sales;
}
void DrinkItem::addDrinks(unsigned int amount)
{
	quantity += amount;
}
bool DrinkItem::purchase()
{
	if (!quantity > 0)
		return false;
	quantity--;
	std::cout<<name<<": "<<quantity<<"\n";
	purchased++;
	sales += price;
	return true;
}

