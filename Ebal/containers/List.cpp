#include "List.h"

List::List() {
	Size = 0;
	Head = nullptr;
	Tale = nullptr;
}

List::~List() {
	while (Size) {
		pop_front();
	}
}

template<typename T>
void List<T>::push_back(T data) {
	Tale->pNext = data;
	Tale = Tale->pNext;
	Size++;
}

template<typename T>
void List<T>::push_front(T data) {
	Head->pPrev = data;
	Head = Head->pPrev;
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

}

template<typename T>
void List<T>::removeAt(T get) {

}

template<typename T>
void List<T>::addAt(int index) {

}

template<typename T>
bool List<T>::find(T get) {

}

template<typename T>
int List<T>::getSize() {
	return Size;
}

template<typename T>
T List<T>::get(int index)
{
	return T();
}
