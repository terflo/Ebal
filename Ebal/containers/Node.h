template<typename T>
class Node {

public:
	Node* pNext;
	Node* pPrev;
	T data;

	Node(T data = T(), Node* pNext = nullptr, Node* pPrev = nullptr);
	Node();
	~Node();
};