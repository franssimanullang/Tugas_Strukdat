#include <iostream>
using namespace std;

char stack[100];
int top =-1;
void push(char data){
    if (top == 99) {
        cout << "Stack penuh!" << endl;
        return;
    }
    top++;
    stack[top] = data;
}

char pop(){
    if (top == -1) {
        cout << "Stack kosong!" << endl;
        return '\0';
    }
    char data = stack[top];
    top--;
    return data;
}
int main(){
    string kata;
    cout << "Masukkan kata: ";
    cin >>kata;

    // push semua karakter
    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    // pop semua karakter, susun jadi kata terbalik
    string hasil = "";
    while (top != -1) {
        hasil += pop();
    }

    cout << "Kata terbalik: " << hasil << endl;
    return 0;
}