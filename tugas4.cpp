#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* tambah(Node* root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
        return root;
    }

    if (data > root->data) {
        root->kanan = tambah(root->kanan, data); 
    }
    else if (data < root->data) {
        root->kiri = tambah(root->kiri, data);
    }
    
    return root;
}

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    int angka;
    
    cout << "Masukkan angka pertama untuk root (0 = stop) : ";
    cin >> angka;

    while (angka != 0) {
        root = tambah(root, angka);
        cout << "Masukkan angka selanjutnya (0 = stop) : ";
        cin >> angka;
    }

    //output nya
    cout << "In-order   : ";
    inOrder(root);
    cout << endl;

    cout << "Pre-order  : ";
    preOrder(root);
    cout << endl;
    
    cout << "Post-order : ";
    postOrder(root);
    cout << endl;

    return 0;
}