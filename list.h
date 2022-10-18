struct Node {
	int value = 0;
	Node* next = nullptr;
	Node* prev = nullptr;
};

struct List {
	Node* first = nullptr;
	Node* last = nullptr;
	size_t size_l = 0;

	void insert(int position, int value);
	void clear();
	void push_back(int value);
	void pop_back();
	void push_front(int value);
	void pop_front();
	void swap(int position1, int position2);
	void erase(int position);
	int size();
	int operator[] (const int index);
	bool is_empty();
	int operator= (List input_list);
	void sort();
};