#pragma once

#include "Node.h"

template<typename T>
Node<T>::Node(T data, Node* pNext, Node* pPrev) {
	this.data = data;
	this.pNext = pNext;
	this.pPrev = pPrev;
}

template<typename T>
Node<T>::Node() {
	data = T();
	pNext = nullptr;
	pPrev = nullptr;
}

template<typename T>
Node<T>::~Node() {}