#include <iostream>
#include <string>
using namespace std;
//menambahkan struct orang
struct orang
{
    string nama;
    string alamat;
    int umur;
};
// menambahkan input data ke struct orang
int main() {
    orang mhs;
    cout << "Nama : " ;
    cin >> mhs.nama;
    cout << "alamat : " ;
    cin >> mhs.alamat;
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;

    // Tampilan
    cout << " Nama : " << mhs.nama << endl;
    cout << " Nama : " << mhs.alamat << endl;
    cout << " Nama : " << mhs.umur << endl;

}