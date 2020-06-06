#pragma once

#include "Node.h"

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
	void remove(int index);
	void removeAll();
	void addAt(int index);
	bool find(T get);
	int getSize();
	T get(int index);
	T& operator[](const int index);
};

template<typename T>
List<T>::List() {
	Size = 0;
	Head = nullptr;
	Tale = nullptr;
}

template<typename T>
List<T>::~List() {
	removeAll();
}

template<typename T>
void List<T>::removeAll() {
	while (Size) {
		pop_front();
	}
}

template<typename T>
void List<T>::push_back(T data) {
	if (Tale == nullptr) {
		Tale = new Node<T>(data, nullptr, nullptr);
		Head = Tale;
	}
	else {
		Tale->pNext = new Node<T>(data, Tale, nullptr);
		Tale = Tale->pNext;
	}
	Size++;
}

template<typename T>
void List<T>::push_front(T data) {
	if (Head == nullptr) {
		Head = new Node<T>(data, nullptr, nullptr);
		Tale = Head;
	}
	else {
		Head->pPrev = new Node<T>(data, nullptr, Head);
		Head = Head->pNext;
	}
	Size++;
}

template<typename T>
void List<T>::pop_back() {
	if (Tale != nullptr) {
		Node<T>* ptr = Tale;
		Tale = Tale->pPrev;
		delete ptr;
		Size--;
	}
}

template<typename T>
void List<T>::pop_front() {
		Node<T>* ptr = Head;
		Head = Head->pNext;
		delete ptr;
		Size--;
}

template<typename T>
void List<T>::remove(int index) {

}

template<typename T>
void List<T>::addAt(int index) {

}

template<typename T>
bool List<T>::find(T get) {
	for (Node<T>* ptr = Head; ptr != nullptr; ptr = ptr->pNext) {
		if (ptr->data == get) return true;
	}
	return false;
}

template<typename T>
int List<T>::getSize() {
	return Size;
}

template<typename T>
T List<T>::get(int index) {
	int index2 = 0;
	for (Node<T>* ptr = Head; ptr!= nullptr; ptr = ptr->pNext) {
		if (index2 == index) return ptr->data;
		index2++;
	}
	return T();
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int count = 0;
	Node<T>* ptr = this->Head;
	while (ptr != nullptr)
	{
		if (count == index)
		{
			return ptr->data;
		}
		ptr = ptr->pNext;
		count++;
	}
}