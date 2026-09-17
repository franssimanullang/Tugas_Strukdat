#include <iostream>
using namespace std;

struct node{
    int nilai;
    node* next;
};

int main(){
    system("clear");
    //node 1-10
    node *node1 = new node();
    node1->nilai = 100;
    node1->next = nullptr;

    node *node2 = new node();
    node2->nilai = 92;
    node2->next = nullptr;

    node *node3 = new node();
    node3->nilai = 45;
    node3->next = nullptr;

    node *node4 = new node();
    node4->nilai = 87;
    node4->next = nullptr;

    node *node5 = new node();
    node5->nilai = 71;
    node5->next = nullptr;

    node *node6 = new node();
    node6->nilai = 99;
    node6->next = nullptr;

    node *node7 = new node();
    node7->nilai = 95;
    node7->next = nullptr;

    node *node8 = new node();
    node8->nilai = 60;
    node8->next = nullptr;

    node *node9 = new node();
    node9->nilai = 55;
    node9->next = nullptr;

    node *node10 = new node();
    node10->nilai = 88;
    node10->next = nullptr;

    //tail dan headnya
    node *head = node1;
    node *tail = node10;

    //skema urutan listnya
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
    node6->next=node7;
    node7->next=node8;
    node8->next=node9;
    node9->next=node10;
    
    //nampilin outputnya
    cout <<"Nilai-nilai listnya: "<<endl;
    node *temp=head;
    while (temp!=nullptr){
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    //menambah node list baru didepan
    node *node11 =new node();
    node11->nilai= 70;
    node11->next= nullptr;
    node11->next= head;
    head = node11;
    cout << "\nnilai list baru setelah ditambahkan di awal: "<<endl;
    cout<<endl;

    temp= head;
    while(temp != nullptr){
        cout<<temp->nilai<<" ";
        temp=temp->next;
    }

    //nambah list baru dibelakang
    node *node12 =new node();
    node12->nilai =50;
    node12->next =nullptr;
    node10->next =node12;
    tail = node12;
    cout << "\nnilai list setelah ditambahkan di akhir: "<<endl;
    cout<<endl;
    
    temp = head;
    while (temp != nullptr){
        cout<<temp->nilai<<" ";
        temp= temp->next;
    }
    
    //menyisipkan node baru di antara node" lain 
    node *node13= new node();
    node13->nilai = 0;
    node13->next = node4;
    node3->next =  node13;
    cout << "\nnilai list setelah disisipkan 0 setelah 45"<<endl;
    cout<<endl;

    temp = head;
    while (temp != nullptr){
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    // menghapus nilai 90
    temp = head;
    while(temp ->next->nilai!= 90){
        temp = temp ->next;
    }

    node* hapus = temp-> next;
    temp ->next = hapus -> next;
    delete hapus;

    cout << "\nnilai list setelah 90 dihapus : "<<endl;
    temp = head;
    while (temp != nullptr){
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    // menghapus nilai 60
    temp = head;
    while(temp ->next->nilai!= 60){
        temp = temp ->next;
    }

    hapus = temp;
    temp ->next = hapus -> next;
    delete hapus;

    cout << "\nnilai list setelah 90 dihapus : "<<endl;
    temp = head;
    while (temp != nullptr){
        cout << temp->nilai << " ";
        temp = temp->next;
    }

}
