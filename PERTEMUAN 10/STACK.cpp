#include <iostream>
using namespace std;

#define MAX_TEKS 200

struct Node{
    char data[MAX_TEKS];
    Node *next;
};

Node *top = NULL;

void salinTeks(char tujuan[], const char sumber[]){
    int i = 0;
    while(sumber[i] != '\0'){
        tujuan[i] = sumber[i];
        i++;
    }
    tujuan[i] = '\0';
}

void gabungTeks(char tujuan[], const char tambahan[]){
    int i = 0;
    while(tujuan[i] != '\0') i++;
    if(i > 0){
        tujuan[i] = ' ';
        i++;
    }
    int j = 0;
    while(tambahan[j] != '\0'){
        tujuan[i] = tambahan[j];
        i++;
        j++;
    }
    tujuan[i] = '\0';
}

bool isEmpty(){
    return top == NULL;
}

void push(const char teks[]){
    Node *nodeBaru = new Node;
    salinTeks(nodeBaru->data, teks);
    nodeBaru->next = top;
    top = nodeBaru;
}

void pop(){
    if(!isEmpty()){
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void tampilMenu(){
    cout << "===== TEXT EDITOR =====" << endl;
    cout << "1. Ketik Teks" << endl;
    cout << "2. Undo" << endl;
    cout << "3. Tampilkan Dokumen" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih: ";
}

int main(){
    char dokumenSaatIni[MAX_TEKS] = "";
    char inputTeks[MAX_TEKS];
    int pilihan;

    push(dokumenSaatIni);

    do {
        system("cls");
        tampilMenu();
        cin >> pilihan;
        cin.ignore();
        cout << endl;

        switch(pilihan){
            case 1:
                cout << "Masukkan teks : ";
                cin.getline(inputTeks, MAX_TEKS);

                char versiBaru[MAX_TEKS];
                salinTeks(versiBaru, dokumenSaatIni);
                gabungTeks(versiBaru, inputTeks);

                push(versiBaru);
                salinTeks(dokumenSaatIni, versiBaru);

                cout << "Teks berhasil ditambahkan!" << endl;
                break;
            case 2:
                if(top == NULL || top->next == NULL){
                    cout << "Tidak ada perubahan yang bisa di-undo!" << endl;
                }else{
                    pop();
                    salinTeks(dokumenSaatIni, top->data);
                    cout << "Undo berhasil!" << endl;
                }
                break;
            case 3:
                cout << "=== Isi Dokumen ===" << endl;
                if(dokumenSaatIni[0] == '\0'){
                    cout << "(Dokumen kosong)" << endl;
                }else{
                    cout << dokumenSaatIni << endl;
                }
                break;
            case 4:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        if(pilihan != 4){
            cout << endl << "Tekan Enter untuk melanjutkan...";
            cin.get();
        }

    }while(pilihan != 4);

    while (!isEmpty())pop();
	
	cin.get();
    return 0;
}
