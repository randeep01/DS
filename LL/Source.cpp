#include<iostream>
#include<stdio.h>
using namespace std;
class Node {
public:
	int data;
	Node* ptr;

	Node(int data) {
		this->data = data;
	}
};
class LL {
public:
	Node* head = NULL;

	void add(int i)
	{
		Node*  temp = new Node(i);
		if (head==NULL) {
			head = temp;
		}
		else {
			head->ptr = temp;
			temp->ptr = head;
		}
	}
};

int main() {
	LL l;
	l.add(1);
	l.add(2);
	l.add(3);

	Node* head = l.head;

	while (head != nullptr) {

		cout << head->data << endl;
		head = head->ptr;
	}

	return 0;
}