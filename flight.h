#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define first(L) L.first

struct jadwalPenerbangan {
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    string kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;

struct elemenJadwal {
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};

void createListJadwal_1301213279(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301213279(infotype x);
void insertLastJ_1301213279(ListJadwal &L, adr_jadwalP P);
void showJadwal_1301213279(ListJadwal L);
void DeleteFirstJ_1301213279(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP SearchJ_1301213279 (ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
