#include <iostream>
#include <string>
#include <vector>
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
