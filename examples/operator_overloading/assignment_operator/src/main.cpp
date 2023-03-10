/**
 * @file main.cpp
 * @author Behnam Moradi (behnammoradi026@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <string> 

class Test
{
	public:
	Test();
	Test(int id, std::string name);
	void print();
	const Test& operator=(const Test& other); // The assignment operator
	Test(const Test& other); // The copy constructor
	
	
	private:
	int id_;
	std::string name_;
};

// The copy constrctor

Test::Test(const Test& other)
{
	*this = other;
}

// The assignment oprator is defined here.
const Test& Test::operator=(const Test& other)
	{
		id_ = other.id_;
		name_ = other.name_;
		return *this;
	}
 
Test::Test(): id_(0), name_("")
{

}

Test::Test(int id, std::string name): id_(id), name_(name)
{

}

void Test::print()
{
	std::cout << id_ << " : " << name_ << std::endl;
}

int main() {
	
	Test test1(10, "holly");
	test1.print();

	Test test2(20, "Mike");

	test2 = test1;
	test2.print();

	Test test3;
	test3.operator=(test2);

	test3.print();
	return 0;
}
