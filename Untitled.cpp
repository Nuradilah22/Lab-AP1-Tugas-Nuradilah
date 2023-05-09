//nomor 2
#include <iostream>
#include <vector>

using namespace std;

int frekuensi(vector<int> array, int angka) {
    int frek = 0;
    for (int j = 0; j < array.size(); j++) {
        if (array[j] == angka) {
            frek++;
        }
    }
        if (frek > 0){
        return frek;
    } else {
        cout << "Angka tidak ditemukan" << endl;
        return -1;
    }
}

int main() {
    vector<int> array = {1, 2, 2, 3, 3, 3, 5};
    int angka;
    cout << "angka yang ingin dicari frekuensinya: ";
    cin >> angka;
    int frek = frekuensi(array, angka);
    if (frek != -1) {
        cout << "Frekuensi dari angka " << angka << " di dalam array adalah " << frek << endl;
    }
    return 0;
}
