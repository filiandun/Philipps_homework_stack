#include "stack.h"

Node::Node(unsigned long long int num)
{
	this->data = num;
	this->previous = nullptr;
}

Stack::Stack() 
{
	this->end = nullptr;
}

Stack::~Stack()
{
	while (this->end != nullptr)
	{
		delete_node();
	}
}

void Stack::push_back(unsigned long long int num)
{
	Node* new_node = new Node(num);

	if (this->end != nullptr)
	{
		new_node->previous = this->end;
	}
	this->end = new_node;
}

void Stack::delete_node()
{
	if (this->end == nullptr)
	{
		std::cerr << "Ошибка: стек пустой!";
		return;
	}

	Node* temp = this->end->previous;
	delete this->end;
	this->end = temp;
}

void Stack::print()
{
	Node* temp = this->end;

	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->previous;
	}
}

