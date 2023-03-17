#include <iostream>
using namespace std;

int a[20];				// Deklarasi array a dengan ukuran 20
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array 

void input() {			// Prosedur untuk input
	while (true) {		// Looping
		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n;		// Input dari pengguna 
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// Keluar dari Loop
		else {			// Jikan n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output 
		}
	}
	cout << endl;							// Output baris kosong 
	cout << "==========" << endl;			// Output ke layar
	cout << "Masukan Elemen Array" << endl;	// Output ke layar
	cout << "==========" << endl;			// Output ke layar

	for (int i = 0; i < n; i++) {	// Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	// Output ke layar
		cin >> a[i];
	}
}  
int main() {


}

void bubblesortArray() {	//prosedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {	//Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {	// Looping dengan j dimulai dari 0 hingga n-i
			if (a[j] > a[j + 1]) {		// Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];		// Simpan nilai [j] ke variabel sementara temp
				a[j] = a[j + 1];		// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;		// assign nilai temp ke a[j+1]
			}
		}
	}
}