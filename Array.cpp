#include <iostream>
#include <string>
using namespace std;

int main () {
    // deklarasi dengan inisialisasi
    int aku[5] = {10,20,30,40,50};
    //deklarasi array tanpa inisialisasi
    int kamu [5];
    //tampilkan data
    cout << "Data Pada Index 1 =" << aku [1] << endl;
    // ganti index ke 1
    aku [1] =200;
    cout << endl;
    cout << "data pada index 1 =" << aku [1] << endl;
        //mengisi satu persatu
    cout << "data pada index 0 =";
    cin >> kamu[0];
    cout << "data pada index 1 =";
    cin >> kamu[1];
    cout << "data pada index 2 =";
    cin >> kamu[2];
    cout << "data pada index 3 =";
    cin >> kamu[3];
    cout << "data pada index 4 =";
    cin >> kamu[4];
    cout << endl;
        // menampilkan satu persatu
    cout << "Data Pertama = " << kamu[0] << endl;
    cout << "Data Kedua = " << kamu[1] << endl;
    cout << "Data Ketiga = " << kamu[2] << endl;
    cout << "Data Keempat = " << kamu[3] << endl;
    cout << "Data Kelima = " << kamu[4] << endl;
    cout << endl;
    //mengisi dengan menggunakan perulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "data index ke-" << i << " = ";
        cin >> kamu[i];
    }
    cout << endl;
    // menampilkan  dengan perulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke -" << i+1 << " = " << kamu [i] << endl;
    }

}
