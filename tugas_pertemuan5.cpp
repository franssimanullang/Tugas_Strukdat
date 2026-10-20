#include <iostream>
using namespace std;

void urutinData (){
    
}

int binarysearch(int data[], int n, int target){
    int low=0;
    int high = n-1;

    while (low<=high){
        int mid = low+ (high-low)/2;
        
        if (target == data[mid]){
            return mid;
        }else if (target < data[mid]){
            high = mid-1;
        }else if (target > data[mid]){
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int data[] = {};
    int n = 7;
    int target;
    
    cout<<"masukan nilai yang ingin dicari: ";
    cin>>target;

    int hasil = binarysearch(data, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks ke- : " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}