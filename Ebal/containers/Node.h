template<typename T>
class Node {

public:
	Node* pNext;
	Node* pPrev;
	T data;

	Node(T data = T(), Node* pPrev = nullptr, Node* pNext = nullptr);
	Node(T data);
	Node();
	~Node();
};

template<typename T>
Node<T>::Node(T data, Node* pPrev, Node* pNext) {
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}

template<typename T>
Node<T>::Node(T data) {
	this->data = data;
	this->pNext = nullptr;
	this->pPrev = nullptr;
}

template<typename T>
Node<T>::Node() {
	data = T();
	pNext = nullptr;
	pPrev = nullptr;
}

template<typename T>
Node<T>::~Node() {}