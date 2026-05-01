#include <iostream>
using namespace std;

struct Node{
	int data;
	
	struct Node *next;
	struct Node *prev;
};

int main(){
	//SINGLE LINKED LIST
//	Node *node1 = NULL;
//	Node *node2 = NULL;
//	Node *node3 = NULL;
//	
//	node1 = new Node;
//	node2 = new Node;
//	node3 = new Node;
//	
//	node1->data = 10;
//	node1->next = node2;
//	
//	node2->data = 20;
//	node2->next = node3;
//	
//	node3->data = 30;
//	node3->next = NULL;
//
//	Node *nodeSekarang = node1;
//	int i = 0;
//	int max = node1->data;
//	
//	while(nodeSekarang != NULL){
//		if(nodeSekarang->data > max){
//			max = nodeSekarang->data;
//		}
//		cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
//		nodeSekarang = nodeSekarang->next;
//		i++;
//    }
//    cout << "Terbesar adalah: " << max << endl;
	
	//DOUBLE LINKED LIST - SINGULAR
//	Node *node1 = NULL;
//	Node *node2 = NULL;
//	Node *node3 = NULL;
//	
//	node1 = new Node;
//	node2 = new Node;
//	node3 = new Node;
//	
//	node1->data = 10;
//	node1->next = node2;
//	node1->prev = NULL;
//	
//	node2->data = 20;
//	node2->next = node3;
//	node2->prev = node1;
//	
//	node3->data = 30;
//	node3->next = NULL;
//	node3->prev = node2;
//	
//	//Traversal Forward
//	Node *nodeSekarang = node1;
//	int i = 0;
//	int max = node1->data;
//	
//	cout << "Traversal Forward\n";
//	while(nodeSekarang != NULL){
//		if(nodeSekarang->data > max){
//			max = nodeSekarang->data;
//		}
//		cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
//		nodeSekarang = nodeSekarang->next;
//		i++;
//    }
//    
//    //Traversal Backward
//	nodeSekarang = node3;
//	i = 0;
//	
//	cout << "\nTraversal Backward\n";
//	while(nodeSekarang != NULL){
//		cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
//		nodeSekarang = nodeSekarang->prev;
//		i++;
//    }
//    
//    cout << "\nTerbesar adalah: " << max << endl;

	//DOUBLE LINKED LIST - CIRCULAR
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	node1->prev = node3;
	
	node2->data = 20;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 30;
	node3->next = node1;
	node3->prev = node2;
	
	//Traversal Forward
	Node *nodeSekarang = node1;
	int i = 0;
	int max = node1->data;
	
	cout << "Traversal Forward\n";
	while(nodeSekarang != NULL){
		if(nodeSekarang->data > max){
			max = nodeSekarang->data;
		}
		cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
		nodeSekarang = nodeSekarang->next;
		i++;
		if(nodeSekarang == node1){
			break;
		}
    }
    
    //Traversal Backward
	nodeSekarang = node3;
	i = 0;
	
	cout << "\nTraversal Backward\n";
	while(nodeSekarang != NULL){
		cout << "Data ke " << i + 1<< ": " << nodeSekarang->data << endl;
		nodeSekarang = nodeSekarang->prev;
		i++;
		if(nodeSekarang == node3){
			break;
		}
    }
    
    cout << "\nTerbesar adalah: " << max << endl;
    
//    //Traversal Forward
//	Node *nodeSekarang = node1;
//	int i = 0;
//	int max = node1->data;
//
//	cout << "Traversal Forward\n";
//	do{
//		if(nodeSekarang->data > max){
//			max = nodeSekarang->data;
//		}
//    	cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
//    	nodeSekarang = nodeSekarang->next;
//    	i++;
//	}while(nodeSekarang != node1);
//
//	//Traversal Backward
//	nodeSekarang = node3;
//	i = 0;
//	
//	cout << "\nTraversal Backward\n";
//	do{
//    	cout << "Data ke " << i + 1 << ": " << nodeSekarang->data << endl;
//    	nodeSekarang = nodeSekarang->prev;
//    	i++;
//	}while(nodeSekarang != node3);
//	
//	cout << "\nTerbesar adalah: " << max << endl;
	
	cin.get();
	return 0;
}
