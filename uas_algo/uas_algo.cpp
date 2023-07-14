Ujian Akhir Semester
Mata Kuliah Algoritma dan Struktur Data
Haris Setiawan, S.T., M.Eng.
Tahun 2022 / 2023 Ganjil
SOAL A1
1. Manajemen Data Mahasiswa
Di sebuah universitas, terdapat seorang administrator akademik bernama Budi yang
bertanggung jawab untuk mengelola data mahasiswa.Setiap tahun, universitas tersebut
menerima banyak mahasiswa baru sebanyak 100 mahasiswa dan Budi harus memastikan
data mahasiswa terorganisir dengan baik.Budi ingin memiliki aplikasi yang dapat
menampilkan, mengurutkan, dan mencari data mahasiswa dengan mudah.Data yang ingin
Budi simpan untuk setiap mahasiswa adalah NIM, nama, jurusan, dan tahun masuk.Budi
berharap aplikasi ini dapat membantu mencari data mahasiswa berdasarkan NIM dan
menampilkan semua data mahasiswa yang masuk berdasarkan tahun masuk secara terurut.
Berdasarkan kasus diatas, buatlah program yang sesuai dengan kebutuhan Budi!(40 Poin)
#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}