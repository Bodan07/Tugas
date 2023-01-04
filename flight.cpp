#include "flight.h"

void createListJadwal_1301213279(ListJadwal &L){
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_1301213279(infotype x){
    adr_jadwalP P;
    P = new elemenJadwal;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertLastJ_1301213279(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP q;


    if (first(L) == NULL){
        first(L) = P;
    } else {
        q = first(L);
        while (next(q) != NULL){
            q = next(q);
        }
        next(q) = P;
    }
}

void showJadwal_1301213279(ListJadwal L){
    adr_jadwalP q;
    q = first(L);
    if (q == NULL) {
        cout << "List Kosong" <<endl;
    } else {
        while (q != NULL) {
            cout << "Kode Penerbangan : " << info(q).kode << " - "
                 << "Jenis Penerbangan: " << info(q).jenis << " - "
                 << "Tanggal Penerbangan: " << info(q).tanggal << " - "
                 << "Waktu Penerbangan: " << info(q).waktu << " - "
                 << "Asal Penerbangan: " << info(q).asal << " - "
                 << "Tujuan Penerbangan: " << info(q).tujuan << " - "
                 << "Kapasitas : " << info(q).kapasitas<<endl;
            cout << endl;

            q = next(q);
        }
    }
}

void DeleteFirstJ_1301213279(ListJadwal &L, adr_jadwalP &P){
    P = first(L);
    if (next(first(L)) == NULL){
        first(L) = NULL;
    } else {
        first(L) = next(first(L));
        next(P) = NULL;
    }
}

adr_jadwalP SearchJ_1301213279 (ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP q = first(L);

    if (first(L) == NULL){
        cout << "List Kosong" <<endl;
    } else {
        while (q != NULL && info(q).asal != dari && info(q).tujuan != ke && info(q).tanggal != tanggal){
            q = next(q);
        }
        return q;
    }
}
