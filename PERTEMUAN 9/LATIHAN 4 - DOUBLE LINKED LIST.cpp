#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

void inputData();
void insert_head(int data);
void traverse();

int main(){
    inputData();

    int tambah;
    cout << "\nMasukkan data yang ditambahkan di awal: ";
    cin >> tambah;
    insert_head(tambah);

    cout << "\nData setelah ditambah di awal:" << endl;
    traverse();

    cin.ignore();
    cin.get();
    return 0;
}

//SINGLE LINKED LIST
//void inputData(){
//	int n, nilai;
//	cout << "Masukkan jumlah data: ";
//	cin >> n;
//
//	for(int i = 1; i <= n; i++){
//		cout << "Masukkan data ke " << i << ": ";
//		cin >> nilai;
//
//		Node *nodeBaru = new Node;
//		nodeBaru->data = nilai;
//		nodeBaru->next = NULL;
//
//		if(head == NULL){
//			head = nodeBaru;
//			tail = nodeBaru;
//		}
//		else{
//			tail->next = nodeBaru;
//			tail = nodeBaru;
//		}
//	}
//}
//
//void insert_head(int data){
//	Node *nodeBaru = new Node;
//	nodeBaru->data = data;
//	nodeBaru->next = head;
//	head = nodeBaru;
//}
//
//void traverse(){
//	Node *temp = head;
//	while(temp != NULL){
//		cout << temp->data;
//		if(temp->next != NULL){
//			cout << " -> ";
//		}
//		temp = temp->next;
//	}
//	cout << " -> NULL" << endl;
//}

//DOUBLE LINKED LIST - SINGULAR
//void inputData(){
//	int n, nilai;
//	cout << "Masukkan jumlah data: ";
//	cin >> n;
//
//	for(int i = 1; i <= n; i++){
//		cout << "Masukkan data ke " << i << ": ";
//		cin >> nilai;
//
//		Node *nodeBaru = new Node;
//		nodeBaru->data = nilai;
//		nodeBaru->next = NULL;
//		nodeBaru->prev = NULL;
//
//		if(head == NULL){
//			head = nodeBaru;
//			tail = nodeBaru;
//		}
//		else{
//			nodeBaru->prev = tail;
//			tail->next = nodeBaru;
//			tail = nodeBaru;
//		}
//	}
//}
//
//void insert_head(int data){
//	Node *nodeBaru = new Node;
//	nodeBaru->data = data;
//	nodeBaru->next = head;
//	nodeBaru->prev = NULL;
//	head->prev = nodeBaru;
//	head = nodeBaru;
//}
//
//void traverse(){
//	Node *temp = head;
//	while(temp != NULL){
//		cout << temp->data;
//		if(temp->next != NULL){
//			cout << " -> ";
//		}
//		temp = temp->next;
//
//	}
//	cout << " -> NULL" << endl;
//}

//DOUBLE LINKED LIST - CIRCULAR
void inputData(){
	int n, nilai;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;

        Node *nodeBaru = new Node;
        nodeBaru->data = nilai;

        if(head == NULL){
            nodeBaru->next = nodeBaru;
            nodeBaru->prev = nodeBaru;
            head = nodeBaru;
            tail = nodeBaru;
        }
		else{
            nodeBaru->next = head;
            nodeBaru->prev = tail;
            tail->next = nodeBaru;
            head->prev = nodeBaru;
            tail = nodeBaru;
        }
    }
}

void insert_head(int data){
    Node *nodeBaru = new Node;
    nodeBaru->data = data;
    nodeBaru->next = head;
    nodeBaru->prev = tail;
    head->prev = nodeBaru;
    tail->next = nodeBaru;
    head = nodeBaru;
}

void traverse(){
    Node *temp = head;
    while(temp != tail){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << tail->data << " -> head" << endl;
}
