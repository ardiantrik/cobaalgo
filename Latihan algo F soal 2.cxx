#include <iostream>
#include <iomanip>
using namespace std;
void banyakPecahan(long uang_kembali, long pecahan[]);
//===============================================
//BTW ini contoh penerapan soal 2 yak, ini pokonya tentang kasir2, solusi soal 2 ada di fungsi void banyakPecahan
//===============================================
int main()
{
	long harga[5], total_bayar=0,uang_bayar,uang_kembali, pecahan[9]={50000,20000,10000,5000,2000,1000,500,200,100};
	char barang[5][100], y_n;
	int pil, p=0;
	do{
		system("cls");
		cout<<"1. Input Belanjaan\n2. Hitung Kasir"<<endl;
		cout<<"Pilihan: ";cin>>pil;
		switch (pil)
		{
			case 1:
			{
				total_bayar=0;
				p=0;
				do{
					cout<<"Barang : ";cin>>barang[p];
					cout<<"Harga  : ";cin>>harga[p];
					total_bayar=total_bayar+harga[p];
					p++;
					cout<<"Lagi?";cin>>y_n;
				}while(y_n=='y');
			}
			
			case 2:
			{
				if (p != 0)
				{
					cout<<"========================="<<endl;
					cout<<setw(10)<<"Barang"<<"||"<<setw(10)<<"Harga"<<endl;
					cout<<"========================="<<endl;
					for (int x = 0; x < p; x++)
					{
						cout<<setw(10)<<barang[x]<<"||"<<setw(10)<<harga[x]<<endl;
					}
					cout<<"========================="<<endl;
					cout<<"Total Bayar: ";cout<<total_bayar<<endl;
					cout<<"Uang Bayar : ";cin>>uang_bayar;
					uang_kembali=uang_bayar-total_bayar;
					if (uang_kembali>0)
					{
						cout<<"Uang Kembali: ";cout<<uang_kembali<<endl;
						cout<<"Rincian uang kembali: "<<endl;
						banyakPecahan(uang_kembali,pecahan);
					}else if(uang_kembali==0)
					{
						cout<<"Duitmu PAS"<<endl;
					}else cout<<"Duitmu Kurang"<<endl;
				}else
				{
					cout<<"Belum Ada Data"<<endl;
				}
			}break;
			
			default:cout<<"Pilihan Salah"<<endl;
		}
		cout<<"Perintah Kembali: ";cin>>y_n;
	}while(y_n=='y');
	
	
	return 0;
}

void banyakPecahan(long uang, long pecahan[])
{
	for (int i = 0; i < 9; i++)
	{
		int j=0;//catet jumlah pecahan
		while (uang >= pecahan[i])//nyari pecahan uang
		{
			uang=uang-pecahan[i];j++;
		}
		if (j!=0)//cek jumlah pecahan
		{
			cout<<j<<" lembar uang "<<pecahan[i]<<endl;
		}
	}
}















































































































































//=====================================LATORESU=========================

