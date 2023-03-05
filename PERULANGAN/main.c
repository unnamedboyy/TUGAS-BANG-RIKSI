#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ESC 27

typedef char string [1000];


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Deklarasi
	
	string username, pass;
	int menu = 1, atas=0, syarat1 = 0, syarat2 = 0, login, barang1, barang2, barang3, harga1 = 0, harga2 = 0, harga3 = 0;
	int tambah1, tambah2, tambah3, lelang, pilihlelang, tertinggi, pemenang, x, y;
	int a = 200, b = 186, c = 187, d = 188, e = 201, f = 205;

	
		// Memilih Menu
		do{
			system("cls");
			
			printf("\n %c",e);
			atas = 0;
			while (atas<31){
				printf("%c",f);
				atas++;}
				printf("%c", c);
			printf("\n %c \t   TOKO CINA \t\t %c" ,b,b );
			printf("\n %c [1] Login \t\t\t %c",b,b,b);
			printf("\n %c [2] Input Stok \t\t %c",b,b );
			printf("\n %c [3] Tampil Barang \t\t %c",b,b );
			printf("\n %c [4] Pelelangan \t\t %c",b,b);
			printf("\n %c [5] Pelelangan Auto (Tugas) \t %c",b,b);
			printf("\n %c [0] Exit \t\t\t %c \n %c",b,b,a); 
			atas=0;
			while (atas<31){
				printf("%c",f);
				atas++;}
				printf("%c", d);
			printf("\n >>>"); scanf("%d", &menu); 
			
			switch(menu){
				
				case 1:
					printf("\n\t ---=== HALAMAN LOGIN ===--- ");
					
					do {
						
						printf("\n\n Masukan Username: "); fflush(stdin); gets(username);
						if (strcmp(username, "kay") == 0) { 
							login=1;
						} else {
							login=0;
							printf("\n [!] Username Tersebut Tidak Valid [!] \n");
						}
					} while (login == 0);
					
					do {
						printf(" Masukan Password: "); fflush(stdin); gets(pass);
						if (strcmp(pass, "1836") == 0) { 
							login=1;
							syarat1 = 1;
							printf("\n [!] Selamat Datang Bosquuu... [!]");
						} else {
							login=0;
							printf("[!] Password Tersebut Tidak Valid [!] \n");
						}
					} while (login == 0); syarat1 = 1;
					break;
					
				case 2:
					
					if (syarat1 != 1) {
						printf("[!] Login Terlebih Dahulu... [!]");
					} else {
						printf("\n\t ---=== HALAMAN INPUT BARANG ===--- ");
						
						do {
						printf("\n\n Masukan Jumlah Stok Untuk Barang 1 \n Jumlah Stok: "); scanf("%d", &barang1);
						} while (barang1 <= 0);
						
						do {
						printf("\n\n Masukan Jumlah Stok Untuk Barang 2 \n Jumlah Stok: "); scanf("%d", &barang2);
						} while (barang2 <= 0);
						
						do {
						printf("\n\n Masukan Jumlah Stok Untuk Barang 3 \n Jumlah Stok: "); scanf("%d", &barang3);
						} while (barang3 <= 0);	
						
						syarat2 = 1;
						printf("\n [!] Inputan Berhasil [!]");
					} 
		
					break;
					
				case 3:
					
					if (syarat1 != 1) {
						printf("[!] Login Terlebih Dahulu... [!]");
					} else if (syarat2 != 1) {
						printf("[!] Input Data Terlebih Dahulu... [!]");
					} else {
						printf("\n\t ---=== HALAMAN TAMPIL DATA ===--- ");
						
						printf("\n\n Nama Barang 1: Barang 1");
						printf("\n Stok Barang: %d", barang1); 
						
						printf("\n\n Nama Barang 2: Barang 2");
						printf("\n Stok Barang: %d", barang2); 
						
						printf("\n\n Nama Barang 3: Barang 3");
						printf("\n Stok Barang: %d", barang3); 
					} 
					printf("\n\n");
					system ("pause");
					
					break;
					
				case 4:
					
					harga1 = 0;
					harga2 = 0;
					harga3 = 0;
					
					if (syarat1 != 1) {
						printf("[!] Login Terlebih Dahulu... [!]");
					} else if (syarat2 != 1) {
						printf("[!] Input Data Terlebih Dahulu... [!]");
					} else {
						
						int i;
						for (i=0;i<5;i++) {
							
						system("cls");
						printf("\n\t ---=== HALAMAN LELANG MANUAL ===--- ");
							
						printf("\n [1] Harga Barang 1 Saat Ini: %d", harga1); 
						printf("\n [2] Harga Barang 2 Saat Ini: %d", harga2); 
						printf("\n [3] Harga Barang 3 Saat Ini: %d", harga3);
						
						printf("\n\n Pilih Barang Yang Ingin Anda Bid (1-3): "); scanf("%d", &pilihlelang);
						
						switch(pilihlelang) {
							
							case 1 :
			
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah1);
								harga1 = harga1 + tambah1;
								lelang = lelang + 1;
								break;
								
							case 2 :
								
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah2);
								harga2 = harga2 + tambah2;
								lelang = lelang + 1;
								break;
								
							case 3 :
								
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah3);
								harga3 = harga3 + tambah3;
								lelang = lelang + 1;
								break;
									
							} getch();
						}
						
						// Perhitungan
						tertinggi = (harga1 > harga2 && harga1 > harga3) ? (harga1) : ((harga2 > harga3) ? (harga2) : (harga3));				
						
						if(tertinggi ==  harga1){
							pemenang = 1;
						} else if (tertinggi == harga2){
							pemenang = 2;
						} else if (tertinggi == harga3){
							pemenang = 3;
						}
						
						printf("\n\t ---=== PEMENANG LELANG DITEMUKAN ===--- ");
						printf("\n\n Barang %d Menang Lelang Dengan Harga: Rp %d", pemenang, tertinggi); 
						printf("\n");
						system ("pause");
						
					break;
					
				case 5:
					
					harga1 = 0;
					harga2 = 0;
					harga3 = 0;
					
					if (syarat1 != 1) {
						printf("[!] Login Terlebih Dahulu... [!]");
					} else if (syarat2 != 1) {
						printf("[!] Input Data Terlebih Dahulu... [!]");
					} else {
						
						int i;
						for (i=0;i<5;i++) {
							
						system("cls");
						printf("\n\t ---=== HALAMAN LELANG MANUAL ===--- ");
							
						printf("\n [1] Harga Barang 1 Saat Ini: %d", harga1); 
						printf("\n [2] Harga Barang 2 Saat Ini: %d", harga2); 
						printf("\n [3] Harga Barang 3 Saat Ini: %d", harga3);
						
						printf("\n\n Pilih Barang Yang Ingin Anda Bid (1-3): "); scanf("%d", &pilihlelang);
						
						switch(pilihlelang) {
							
							case 1 :
			
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah1);
								
								srand(time(NULL));
									x = rand()%10000;
									y = rand()%10000;						
								harga1 = harga1 + tambah1;
								harga2 = harga2 + x;
								harga3 = harga3 + y;
								lelang = lelang + 1;
								break;
								
							case 2 :
								
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah2);
								
								srand(time(NULL));
									x = rand()%10000;
									y = rand()%10000;						
								harga2 = harga2 + tambah2;
								harga1 = harga1 + x;
								harga3 = harga3 + y;
								lelang = lelang + 1;
								break;
								
							case 3 :
								
								printf("\n Masukan Uang Yang Anda Pasang: Rp. "); scanf("%d", &tambah3);
								
								srand(time(NULL));
									x = rand()%10000;
									y = rand()%10000;						
								harga3 = harga3 + tambah1;
								harga2 = harga2 + x;
								harga1 = harga1 + y;
								lelang = lelang + 1;
								break;
									
							} getch();
						}
						
						// Perhitungan
						tertinggi = (harga1 > harga2 && harga1 > harga3) ? (harga1) : ((harga2 > harga3) ? (harga2) : (harga3));				
						
						if(tertinggi ==  harga1){
							pemenang = 1;
						} else if (tertinggi == harga2){
							pemenang = 2;
						} else if (tertinggi == harga3){
							pemenang = 3;
						}
						
						printf("\n\t ---=== PEMENANG LELANG DITEMUKAN ===--- ");
						printf("\n\n Barang %d Menang Lelang Dengan Harga: Rp %d", pemenang, tertinggi); 
						printf("\n");
						system ("pause");
						
						
					
					break;
				
			} getch ();
			
		} } } while (menu != 0);
	
	return 0;
}
