
template <typename T>
class List {
private:
	int Size;
	Node<T>* Head;
	Node<T>* Tale;

	template <typename T>
	class Node<T> {
	public:
		T data;
		Node<T> pNext;
		Node<T> pPrev;
	};

public:
	List();
	~List();
	void push_back(T data);
	void push_front(T data);
	void pop_back();
	void pop_front();
	void removeAt(int index);
	void removeAt(T get);
	void addAt(int index);
	bool find(T get);
	int getSize();
	T get(int index);
};