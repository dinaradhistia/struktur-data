#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void inputData();
void insert_tail(int data);
void traverse();

int main() {
    inputData();

    int tambah;
    cout << "\nMasukkan data yang ditambahkan di akhir: ";
    cin >> tambah;
    insert_tail(tambah);

    cout << "\nData setelah ditambah di akhir:" << endl;
    traverse();

    cin.ignore();
    cin.get();
    return 0;
}

void inputData() {
    int n, nilai;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;

        Node *nodeBaru = new Node;
        nodeBaru->data = nilai;
        nodeBaru->next = NULL;

        if (head == NULL) {
            head = nodeBaru;
            tail = nodeBaru;
        } else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }
}

void insert_tail(int data) {
    Node *nodeBaru = new Node;
    nodeBaru->data = data;
    nodeBaru->next = NULL;

    if (head == NULL) {
        head = nodeBaru;
        tail = nodeBaru;
    } else {
        tail->next = nodeBaru;
        tail = nodeBaru;
    }
}

void traverse() {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}
