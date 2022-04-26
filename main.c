#include<stdio.h>
#define batas 2

int pil, a=0;

struct mahasiswa
{
    int nrp;
	char nama[50];
	char alamat[50];
};

void menu(){
    printf("\n------ Menu ------\n");
    printf ("1. ADD\n");
    printf ("2. EDIT\n");
    printf ("3. VIEW\n");
    printf ("4. DELETE\n");
    printf ("5. EXIT\n");
    printf("Masukkan pilihan anda :");
    scanf("%i",&pil);
}


void tambah(struct mahasiswa data[]){
    int nrp;
    char nama[50], alamat[50];

	printf("Tambah\n");
	printf("Masukkan NRP :");
	scanf("%i",&nrp);
	fflush(stdin);
	printf("Masukkan Nama :");
	gets(nama);
	printf("Masukkan Alamat :");
	gets(alamat);

	strcpy(data[a].nrp, nrp);
	strcpy(data[a].nama, nama);
	strcpy(data[a].alamat, alamat);
    a++;

}

void edit(struct mahasiswa data[]){
	printf("Edit\n");
}

void tampil(struct mahasiswa data[]){
    int c=0;
	printf("Tampil\n");
	printf("NRP :",data[c].nrp);
	printf("Nama :",data[c].nama);
	printf("Alamat :",data[c].alamat);
	c++;
}

void hapus(struct mahasiswa data[]){
	printf("Hapus\n");
}



int main(){
	struct mahasiswa data[batas];

	while(pil!=5){
		menu();
		switch(pil){
		case 1:
			tambah(data);
		break;

		case 2:
			edit(data);
		break;

		case 3:
			tampil(data);
		break;

		case 4:
			hapus(data);
		break;

		case 5:
			printf("Terimakasih!\n");
		break;

		}
	}


}
