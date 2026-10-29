#include <iostream>
#include <string>
#include <vector>
#include <cctype> //untuk pakai syntax tolower di fungsi lowercase
#include <sstream> // untuk pakai syntax stringstream di main program
using namespace std;

//fungsi ini untuk kita ubah dulu semua katanya menjadi huruf kecil karena dalam ASCII huruf besar nilainya < huruf kecil
string lowercase(string kecil)
{
    for (int i = 0; i < kecil.length(); i++)
    {
        kecil[i] = tolower(kecil[i]);
    }
    return kecil;
}

// Parameternya pakai "&" supaya vector aslinya ikut berubah.
void insertionSort(vector<string>& data)
{
    int n = data.size();

    // Indeks 0 dianggap sudah terurut, jadi loop mulai dari indeks 1.
    for (int i = 1; i < n; i++){
        string key = data[i];
        int j = i - 1;

        cout << "Langkah " << i << ": key = \"" << key << "\"" << endl;

        //kalau ada elemen yang lebih besar di sebelah kiri di geser ke sebelah kanan
        while (j >= 0 && lowercase(data[j]) > lowercase(key)){
            cout << "   Geser \"" << data[j] << "\" dari indeks " << j
                 << " ke indeks " << j + 1 << endl;
            data[j + 1] = data[j];
            j--;
        }

        // Loop berhenti: posisi yang tepat untuk key adalah j + 1.
        data[j + 1] = key;
        cout << "   Sisipkan \"" << key << "\" di indeks " << j + 1 << endl;

        cout << "   Hasil langkah " << i << ": ";
        list(data);
        cout << endl;
    }
}

//prosedur untuk mengisi vectornya
void list(const vector<string>& data){
    cout << "[";
    for (int i = 0; i < data.size(); i++){
        cout << data[i];
        if (i < data.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    system("clear");
    string kalimat,kata;
    vector<string> data;

    a:
    cout << "Masukkan beberapa kata (pisahkan dengan spasi): ";
    getline(cin, kalimat);//supaya bisa baca spasinya jga

    stringstream tiapkata(kalimat);//stringstream fungsinya untuk menginput sebuah data namun datanya bisa diambil dari sebuah variabel lain 
    while (tiapkata >> kata){
        data.push_back(kata); //untuk nambahin tiap katanya menjadi sebuah data baru di vectornya
    }

    //kondisi ketika nggak ada data yang dimasukkan
    if (data.empty())
    {
        cout << "Mana data yang mau diurutkan bes?." << "\n coba Inputkan lagi lah bes"<<endl;
        goto a;
    }

    cout << endl << "Data awal : ";
    list(data);
    cout << endl;

    insertionSort(data);

    cout << "Data akhir (A-Z): ";
    list(data);

    return 0;
}
