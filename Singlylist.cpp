#include "Singlylist.h"

void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.First;
    if (P == Nil) {
        cout << "(list kosong)" << endl;
        return;
    }
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

address findElm(List L, infotype x) {
    address P = L.First;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

/* ---------- DELETE ---------- */

void delFirst(List &L, address &P) {
    if (L.First == Nil) {
        P = Nil;                    // list kosong
    } else {
        P = L.First;
        L.First = P->next;
        P->next = Nil;
    }
}

void delLast(List &L, address &P) {
    if (L.First == Nil) {
        P = Nil;                    // list kosong
    } else if (L.First->next == Nil) {
        P = L.First;                // hanya 1 elemen
        L.First = Nil;
    } else {
        address Q = L.First;
        while (Q->next->next != Nil) {
            Q = Q->next;            // Q = elemen sebelum terakhir
        }
        P = Q->next;
        Q->next = Nil;
    }
}

void delAfter(List &L, address &P, address Prec) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    } else {
        P = Nil;                    // tidak ada elemen setelah Prec
    }
}

void delAll(List &L) {
    address P;
    while (L.First != Nil) {
        delFirst(L, P);
        dealokasi(P);
    }
}

/* ---------- UPDATE ---------- */

void updateElm(List &L, infotype lama, infotype baru) {
    address P = findElm(L, lama);
    if (P != Nil) {
        P->info = baru;
    } else {
        cout << "Elemen " << lama << " tidak ditemukan" << endl;
    }
}