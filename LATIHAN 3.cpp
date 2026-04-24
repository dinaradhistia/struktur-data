#include <iostream>
using namespace std;

struct Node{
	int data;
	
	struct Node *next;
};

void traverse(struct Node *temp);

int main(){
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	
	node2->data = 20;
	node2->next = node3;
	
	node3->data = 30;
	node3->next = NULL;

	traverse(node1);
	
	cin.get();
	return 0;
}

void traverse(struct Node *temp){
	int i = 0;
	int total = 0;
	while(temp != NULL){
		cout << "Data ke " << i + 1 << ": " << temp->data << endl;
		total += temp->data;
		temp = temp->next;
		i++;
    }
    cout << "Total nilai adalah: " << total << endl;
}
