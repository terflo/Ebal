#include "List.h"

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
		Tale = new Node<T>(data);
	}
	else {
		Tale->pNext = new Node<T>(data);
		Tale = Tale->pNext;
	}
	Size++;
}

template<typename T>
void List<T>::push_front(T data) {
	if (Head == nullptr) {
		Head = new Node<T>(data);
	}
	else {
		Head->pPrev = data;
		Head = Head->pPrev;
	}
	Size++;
}

template<typename T>
void List<T>::pop_back() {
	Node<T>* ptr = Tale;
	Tale = Tale->pPrev;
	delete ptr;
	Size--;
}

template<typename T>
void List<T>::pop_front() {
	Node<T>* ptr = Head;
	Head = Head->pNext;
	delete ptr;
	Size--;
}

template<typename T>
void List<T>::removeAt(int index) {
	int index2 = 0;
	for (Node<T> *ptr = Head; ptr != Tale; ptr = ptr->pNext) {

	}
}

template<typename T>
void List<T>::removeAt(T get) {

}

template<typename T>
void List<T>::addAt(int index) {

}

template<typename T>
bool List<T>::find(T get) {
	for (Node<T> *ptr = Head; ptr != Tale; ptr = ptr->pNext) {
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
	for (Node<T> *ptr = Head; ptr != Tale; ptr = ptr->pNext) {
		if (index2 == index) return ptr->data;
		index2++;
	}
	return 0;
}
