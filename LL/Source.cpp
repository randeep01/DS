#include<iostream>
#include<stdio.h>
using namespace std;
class Node {
public:
	int data;
	Node* ptr;

	Node(int data) :ptr{ nullptr }, data{ 0 } {
		this->data = data;
	}
};
class LL {
public:
	Node* head = NULL;

	void add(int i)
	{
		Node*  temp = new Node(i);
		temp->ptr = head;
		head = temp;
	}
	void insertAfter(Node* prev, int data) {
		if (prev == nullptr) {
			cout << "prev can't be null\n";
			return;
		}

		Node* node = new Node(data);
		node->ptr = prev->ptr;

		prev->ptr = node;


	}


	void addAtEnd(int i) {
		Node* temp = new Node(i);
		
		Node* last = head;
		if(head == nullptr) {
			head = temp;
			return;
		}
		while (last != nullptr) {
			last = last->ptr;
		}
		last->ptr = temp;

		return;

	}
	void print() {
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->ptr;
		}
	}

};

int main() {
	LL l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.add(4);
	l.add(5);
	l.add(6);

	Node* head = l.head;

	while (head != nullptr) {

		cout << head->data << endl;
		head = head->ptr;
	}

	return 0;
}