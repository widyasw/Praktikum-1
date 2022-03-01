#include <iostream>
using namespace std;

int main() {
	int data[] = {5, 2, 4, 4, 5};
	int total = 0;
    
    cout << "Nilai ke-1: " << data[0] << endl;
    cout << "Nilai ke-2: " << data[1] << endl;
    cout << "Nilai ke-3: " << data[2] << endl;
    cout << "Nilai ke-4: " << data[3] << endl;
    cout << "Nilai ke-5: " << data[4] << endl;
    
    int panjang_array = sizeof(data) / sizeof(*data);
    int jumlah = sizeof(data);
    int rata_rata = jumlah / panjang_array;
    
    for(int i = 0; i < panjang_array; i++) {
 
        total += data[i];
    }
    
    cout << "Banyak Data = " << panjang_array << endl;
    cout << "Rata-rata = " << rata_rata << endl;
    cout << "Jumlah = " << total;
    
	return 0;
}
