#include "flight.h"

int main()
{
    ListJadwal L;
    int n,i = 0;
    infotype x;
    adr_jadwalP P;
    createListJadwal_1301213279(L);

    // Minta inputan sebanyak n kali
    cout<<"Masukkan jumlah data: ";
    cin>>n;

    while (i < n){
        cout << "Kode Penerbangan : ";
        cin >> x.kode;
        cout << "Jenis Penerbangan: ";
        cin >> x.jenis;
        cout << "Tanggal Penerbangan: ";
        cin >> x.tanggal;
        cout << "Waktu Penerbangan: ";
        cin >> x.waktu ;
        cout << "Asal Penerbangan: ";
        cin >> x.asal;
        cout << "Tujuan Penerbangan: ";
        cin >> x.tujuan;
        cout << "Kapasitas : ";
        cin >> x.kapasitas;
        cout <<endl;

        P = createElemenJadwal_1301213279(x);
        insertLastJ_1301213279(L, P);

        i++;
    }
    cout <<"====================================List Jadwal Penerbangan===================================="<<endl;
    showJadwal_1301213279(L);
    cout <<"====================================List Jadwal Setelah di Delete===================================="<<endl;
    // Delete Jadwal Penerbangan
    DeleteFirstJ_1301213279(L, P);
    showJadwal_1301213279(L);
    cout <<"====================================Data yang Dicari===================================="<<endl;
    P = SearchJ_1301213279(L, "Surabaya(SUB)", "Malang(MLG)", "9-12-2022");
    cout << P <<endl;
}
