#pragma once
#include <iostream>

class Node
{
public:
	Node() = delete;
	Node(unsigned long long int num);

public:
	unsigned long long int data;
	Node* previous;
};

class Stack
{
public:
	Stack();
	~Stack();

private:
	Node* end;

public:
	void push_back(unsigned long long int num);
	void delete_node();
	void print();



};

