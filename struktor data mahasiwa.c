#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum gender {
    Laki_laki,
    Perempuan
};

// Perbaikan pada struktur
typedef struct Infojenny {  // Tambahkan nama struct di sini
    int NIM;
    char nama[50];
    char kampus[50];
    char prodi[50];
    int semester;
    enum gender kelamin;
} Infojenny;

int main() {  // Ubah void main menjadi int main
    // Perbaikan pada alokasi memori
    Infojenny *mahasiswa = (Infojenny*)malloc(sizeof(Infojenny)*100);
    
    if (mahasiswa == NULL) {
        printf("Alokasi memori gagal\n");
        return 1;
    }
    
    mahasiswa->NIM = 71231043;
    strcpy(mahasiswa->nama, "Orikonba fresli ronsumbre");
    strcpy(mahasiswa->kampus, "Universitas Kristen Duta Wacana");
    strcpy(mahasiswa->prodi, "Informatika");
    mahasiswa->semester = 3;
    mahasiswa->kelamin = Laki_laki;
    
    printf("NIM             : %d\n", mahasiswa->NIM);  // Fixing the printf statement
    printf("Nama            : %s\n", mahasiswa->nama);
    printf("Jenis Kelamin   : %s\n", mahasiswa->kelamin == Perempuan ? "Perempuan" : "Laki_laki");
    printf("Kampus          : %s\n", mahasiswa->kampus);
    printf("Prodi           : %s\n", mahasiswa->prodi);
    printf("Semester        : %d\n", mahasiswa->semester);
    
    free(mahasiswa);
    return 0;
}
