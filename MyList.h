#pragma once
#include <string>
#include<iostream>


struct figure{
	figure(std::string n1, std::string n2) : name1(n1), name2(n2) {}
	std::string name1;
	std::string name2;
};

template<class T>
struct node 
{
	node(T data) : data(data), next(nullptr) {}
	T data;
	node *next;
};

template<class T>
class MyList
{
	node<T> *head;

public:
	MyList() : head(nullptr) {};
	~MyList() {};
	bool insert(T dat) {

		if (!head)
		{
			head = new node<T>(dat);
			return true;
		}
		node<T> *tmp = head;
		if (dat < head->data)
		{
			head = new node<T>(dat);
			head->next = tmp;
			return true;
		}
		while (tmp)
		{
			if (tmp->next && dat > tmp->next->data)
				tmp = tmp->next;
			else
			{
				node<T> *newNode = new node<T>(dat);
				newNode->next = tmp->next;
				tmp->next = newNode;
				return true;
			}
		}
		return false;
	};

	friend std::ostream& operator<<(std::ostream& os, MyList & mylist) {
		node<T> *tmp = mylist.head;
		while (tmp) {
			os << tmp->data << " ";
			tmp = tmp->next;
		}
		return os;
	};

	node<T> *getHead() 
	{
		return head;
	};
};

template<class T>
class expandedList:public MyList<T>
{
public:
	int elementsNumber(){
		int num=0;
		node<T> *tmp = MyList<T>::getHead();
	while (tmp) {
		num++;
		tmp = tmp->next;
	}
	return num;
	};
};

template<>
class MyList<figure>
{
	node<figure> *head;

public:
	MyList() : head(nullptr) {};
	~MyList() {};
	bool insert(figure dat) {

		if (!head)
		{
			head = new node<figure>(dat);
			return true;
		}
		node<figure> *tmp = head;
		if (dat.name1 < head->data.name1)
		{
			head = new node<figure>(dat);
			head->next = tmp;
			return true;
		}
		while (tmp)
		{
			if (tmp->next && dat.name1 > tmp->next->data.name1)
				tmp = tmp->next;
			else
			{
				node<figure> *newNode = new node<figure>(dat);
				newNode->next = tmp->next;
				tmp->next = newNode;
				return true;
			}
		}
		return false;
	};

	friend std::ostream& operator<<(std::ostream& os, MyList & mylist) {
		node<figure> *tmp = mylist.head;
		while (tmp) {
			os << "(" << tmp->data.name1 << "," << tmp->data.name2 << ")" << " ";
			tmp = tmp->next;
		}
		return os;
	};
};