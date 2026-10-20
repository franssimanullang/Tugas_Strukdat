#include <iostream>
#include <vector>
using namespace std;

//kita pakai teknik bubble sort untuk mengurutkan datanya 
void urutinData (vector<int>& data ){//vectornya pakai "&" karena vector ini nantinya sebagairefrensi untuk data di mainnya 
    int n = data.size();
    for (int i=0; i < n-1; i ++){
        for (int j=0; j<n-i-1;j++){
            //kalau yang kiri lebih besar dari kanman maka ditukar posisinya
            if (data[j]>data[j+1]){//jadi kalau data index 0 lebih besar dari data index 1 maka
                int temp = data[j]; // nilai data index 0 menjadi temp 
                data[j]=data[j+1];//dan data index 0 tadi akan diubah posisinya menjadi data index 1 
                data[j+1]=temp;// nah data index ke 1 dijadikan temp untuk bandingin dengan nilai lainnya lagi sampai data ke terakhir
            }
        }
    }
}

int binarysearch(vector <int>& data, int target){
    int low=0;
    int high = data.size()-1;

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
    int n,target;

    cout<<"Masukan jumlah data : ";
    cin >>n;

    vector<int>data(n);//kita pakai di main karena kita mau nentuin maksimum isi dari vektornya sesuai dengan yang diinput user

    //user input 
    cout<<"Masukan datanya dengan angka acak(bebas), tapi harus sebanyak "<<n<<" data!"<<endl;
    for (int i=0;i<n;i++){
        cout<<"Masukan data ke-"<<i+1<<" : ";
        cin>>data[i];
    }

    //baru setelah user masukin datanya kita sortir dulu dengan prosedur bubble sort yang sudah kita buat 
    urutinData(data);

    //setelah disortir akan jadi seperti ini
    cout<<"\n data yang udah disortir secara ascending: ";
    for (int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout << endl;
    
    cout<<"masukan nilai yang ingin dicari: ";//user input nilai yang ingin dicari
    cin>>target;

    int hasil = binarysearch(data, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks ke- : " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
