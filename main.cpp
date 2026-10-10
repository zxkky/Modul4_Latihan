#include <iostream>
#include "Singlylist.h"
using namespace std;

int main() {
    List L;
    address P, Prec;

    CreateList(L);

    insertFirst(L, alokasi(2));
    insertFirst(L, alokasi(0));
    insertFirst(L, alokasi(8));
    insertFirst(L, alokasi(12));
    insertFirst(L, alokasi(9));

    cout << "List awal        : ";
    printInfo(L);

    delFirst(L, P);
    cout << "Setelah delFirst : ";
    printInfo(L);
    dealokasi(P);

    delLast(L, P);
    cout << "Setelah delLast  : ";
    printInfo(L);
    dealokasi(P);

    Prec = findElm(L, 12);
    delAfter(L, P, Prec);
    cout << "Setelah delAfter (setelah 12): ";
    printInfo(L);
    dealokasi(P);

    updateElm(L, 0, 5);
    cout << "Setelah update 0 -> 5 : ";
    printInfo(L);

    delAll(L);
    cout << "Setelah delAll   : ";
    printInfo(L);

    return 0;
}