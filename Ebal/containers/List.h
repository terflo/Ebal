#pragma once

#include "../containers/Node.h"

template <typename T>
class List {
private:
	int Size;
	Node<T>* Head;
	Node<T>* Tale;

public:
	List();
	~List();
	void push_back(T data);
	void push_front(T data);
	void pop_back();
	void pop_front();
	void removeAt(int index);
	void removeAt(T get);
	void removeAll();
	void addAt(int index);
	bool find(T get);
	int getSize();
	T get(int index);
};
