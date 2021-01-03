#include <iostream>
#include <iomanip>
using namespace std;

void basicAttack()
{
	int pilihan, panjang_garis, dimensi;
	cout<<"BASIC ATTACK"<<endl;
	cout<<"1. LINE\n2. SQUARE"<<endl;
	cout<<"Pilihan: ";cin>>pilihan;
	switch (pilihan)
	{
		case 1:
		{
			cout<<"Memuat Garis"<<endl;
			cout<<"Masukkan Panjang Garis: ";cin>>panjang_garis;
			for (int i = 0; i < panjang_garis; i++)
			{
				cout<<"* ";
			}
		}break;
		
		case 2:
		{
			cout<<"Membuat Kotak"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 0; i < dimensi; i++)
			{
					for (int j = 0; j < dimensi; j++)
					{
						cout<<"* ";
					}
				cout<<endl;
			}
		}break;
		
		default:
			cout<<"Pilihan salah"<<endl;
	}
	
}

void skillSatu()
{
	int pilihan, dimensi;
	cout<<"SKILL 1"<<endl;
	cout<<"1. Diagonal\n2. Reverse Diagonal\n3. Half Triangle\n4. Full Triangle"<<endl;
	cout<<"Pilihan: ";cin>>pilihan;
	switch (pilihan)
	{
		case 1:
		{
			cout<<"membuat diagonal"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 0; i < dimensi; i++)
			{
				for (int j = 0; j < dimensi; j++)
				{
					if (i==j)
					{
						cout<<"X ";
					}else
					{
						cout<<"O ";
					}
				}
				cout<<endl;
			}
		}break;
		
		case 2:
		{
			cout<<"membuat versi terbalik dari diagonal"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 0; i < dimensi; i++)
			{
				for (int j = dimensi-1; j >= 0; j--)
				{
					if (i==j)
					{
						cout<<"X ";
					}else
					{
						cout<<"O ";
					}
				}
				cout<<endl;
			}
		}break;
		
		case 3:
		{
			cout<<"membuat segitiga siku-siku"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 0; i < dimensi; i++)
			{
				for (int j = 0; j <= i; j++)
				{
					cout<<"O ";
				}
				cout<<endl;
			}
		}break;
		
		case 4:
		{
			cout<<"membuat segitiga full"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 0; i < dimensi; i++)
			{
				for (int j = dimensi; j >= i; j--)
				{
					cout<<" ";
				}
				
				for (int k = 0; k <= i; k++)
				{
					cout<<"O ";
				}
				cout<<endl;
			}
		}break;
		
		default:
			cout<<"Pilihan salah"<<endl;
	}
}

void skillDua()
{
	int pilihan, dimensi;
	cout<<"SKILL 2"<<endl;
	cout<<"1. Diamond\n2. Crown\n3. Chess"<<endl;
	cout<<"Pilihan: ";cin>>pilihan;
	switch (pilihan)
	{
		case 1:
		{
			cout<<"Membuat Wajik"<<endl;
			cout<<"Masukkan Dimensi (bilangan ganjil): ";cin>>dimensi;
			for (int i = 1; i <= dimensi; i++)
			{
				if (i%2==1)
				{
					for(int j = dimensi; j >=i; j--)
					{
						
						cout<<" ";
					}
					
					for(int k = 1; k <=i; k++)
					{
						
						cout<<"O ";
					}
					cout<<endl;
				}
			}
			for (int i = 2; i <= dimensi; i++)
			{
				if (i%2==1)
				{
					for(int k = 1; k <=i; k++)
					{
						
						cout<<" ";
					}
					
					for(int j = dimensi; j >=i; j--)
					{
						
						cout<<"O ";
					}
					
					cout<<endl;
				}
			}
		}break;
		
		case 2:
		{
			cout<<"Membuat Mahkota"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 1; i <= dimensi; i++)
			{
				for(int j = 1; j <=i; j++)
				{
					
					cout<<"O ";
				}
				
				for(int j = dimensi; j >i; j--)
				{
					
					cout<<"   ";
				}
				
				for(int j = 1; j <=i; j++)
				{
					
					cout<<"O ";
				}
				
				for(int j = dimensi; j >i; j--)
				{
					
					cout<<"   ";
				}
				
				for(int j = 1; j <=i; j++)
				{
					
					cout<<"O ";
				}
				cout<<endl;
			}
		}break;
		
		case 3:
		{
			cout<<"membuat papan catur"<<endl;
			cout<<"Masukkan Dimensi: ";cin>>dimensi;
			for (int i = 1; i <= dimensi; i++)
			{	
				if(i%2==0)
				{
					for(int j = 1; j <=dimensi; j++)
					{
						if (j%2==1 )
						{
							cout<<" #";
						}else cout<<" O";
					}
				}else
				{
					for(int j = 1; j <=dimensi; j++)
					{
						if (j%2==1 )
						{
							cout<<" O";
						}else cout<<" #";
					}
				}
				cout<<endl;
			}
		}break;
		
		default:
			cout<<"Pilihan salah"<<endl;
	}
}

void skillUlti()
{
	int pilihan, jumlah_ayam, M, N;
	cout<<"Ultimate"<<endl;
	cout<<"1. Chicken\n2. Number List"<<endl;
	cout<<"Pilihan: ";cin>>pilihan;
	switch (pilihan)
	{
		case 1:
		{
			cout<<"Ayam Tekotek"<<endl;
			cout<<"Masukkan jumlah anak ayam: ";cin>>jumlah_ayam;
			cout<<"Tekotekotek koteeeek ..."<<endl<<endl;
			for (int i=jumlah_ayam; i > 0; i--)
			{
				if (i==1)
				{
					cout<<"anak ayam turun "<<i<<", mati 1 tinggal kenangan :v"<<endl;
				}else
				{
					cout<<"anak ayam turun "<<i<<", mati 1 tinggal "<<i-1<<endl;
				}
			}
		}break;
		
		case 2:
		{
			cout<<"BARIS BILANGAN"<<endl;
			int akumulasi=0;
			cout<<"Masukkan dimensi baris: ";cin>>M;
			cout<<"Masukkan dimensi kolom: ";cin>>N;
			int nomor[M][N];
			
			//contoh implementasi array :) ini aja yak, yg lain bisa dioba2 sendiri :v
			for (int baris = 0; baris < M; baris++)
			{
				 for (int kolom = 0; kolom < N; kolom++)
					{
						akumulasi++;
						nomor[baris][kolom] = akumulasi;
					}
			}
			
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{
					//setw() digunakan biar rapi aja
					//kalau mau pake setw pastikan nambah library iomanip
					cout << setw(3) << nomor[i][j];
				}
				cout<<endl;
			}
			
		}break;
		
		default:
			cout<<"Pilihan salah"<<endl;
		
	}
}

int main()
{
	string ulang;
	do
	{
		system("cls");
		int pilihan;
		cout<<"Pilih kuy"<<endl;
		cout<<"1. Basic Attack\n2. Skill 1\n3. Skill 2\n4. Ultimate"<<endl;
		cout<<"Pilihan : ";cin>>pilihan;
		switch (pilihan)
		{
			case 1:
				basicAttack();
				break;
			
			case 2:
				skillSatu();
				break;
				
			case 3:
				skillDua();
				break;
				
			case 4:
				skillUlti();
				break;
			
			default:
				cout<<"depolt"<<endl;
		}
		
		cout<<"\n\nLagi? <y/n> ";cin >> ulang;
	}while(ulang=="y");
	
	
	return 0;
}

