//Program RESPONSI
/* Program ini menerapkan semua materi yang ada dari modul algo1
 * Edisi males ribet ehehe, maka dari itu tak bikin maksimal input 10 matkul
 */

#include <iostream> //buat aktifin perintah kaya cin() dan cout()
#include <string.h> //buat akfitin perintah kaya strcpy()
#include <conio.h> //buat aktifin perintah kaya getche()
#include <iomanip> //buat aktifin setw()
using namespace std;

//deklarasi fungsi2 yang dipake
bool cekLogin(string user, string pass);
void masukLogin(), inputData(), outputData();

//deklarasi variabel global
/* TRIVIA ...
 * kenapa pake variabel global?
 * biar enak nyimpen nilainya hehe, ini cara orang males sebenere
 * cara yang rapi tetep passing nilai pakai parameter fungsi,
 * tp karena aku pengen as simple as possible ya bikin aja kayagini :v
 * Jadi nilai yang disimpen divariabel bisa dipake semua fungsi tanpa perlu deklarasi lagi
 * dan ga perlu passing lewat parameter
 * 
 * TAPI ini sebenernya cara yang tidak rapi :v
 */
int total_matkul=0; //apa fungsi variabel di kiri ini? clue : habis dioutput masih bisa input tanpa yang sebelumnya hilang
float uts[10], uas[10], kuis[10], akhir[10];
char matkul[10][10], nilai[10];

int main()
{
	bool ulang=false;
	do //kenapa pake perulangan? biar bisa berulang2, agar bisa input banyak
	{	
		system("cls");//gunanya cuma untuk membersihkan layar
		
		//persiapan Login
		string username, password;
		cout<<"LOGIN ADMIN"<<endl;
		cout<<"ID/Username \t:";cin>>username;
		cout<<"Password \t:";cin>>password;
		
		//proses cek user dan pass ke fungsi cekLogin
		if(cekLogin(username, password)==true)
		{
			//bila user dan pass benar, maka bisa masuk
			system("cls");
			masukLogin();
			ulang=false;
		}else{
			cout<<"Login Gagal"<<endl;
			getche();
			ulang=true;
		}
	}while(ulang); //jika ulang bernilai true maka perulangan masih berjalan, sebaliknya apabila false perulangan berhenti
	return 0;
}

bool cekLogin(string user, string pass)
{
	//tempat ngecek login
	if (user == "admin" && pass == "123")
	{
		return true;
	}else
	{
		return false;
	}
}

void masukLogin()
{
	do
	{
		system("cls");
		int pilih;
		cout << "==========================" << endl;
		cout << "           MENU           " << endl;
		cout << "==========================" << endl << endl;
		cout << "1. Input Data" << endl;
		cout << "2. Output Data" << endl;
		cout << "3. Keluar" << endl << endl;
		cout << "Pilihan : "; cin >> pilih;
		cout << endl;
		switch(pilih)
		{
			case 1 :
			{
				inputData();
				continue; //continue agar loncat looping, jadi habis ini langsung ngulang do-while lagi
			}//kenapa disetiap case ga ada break? karena didalem udah ada perintah continue, nanti break diabaikan
			case 2 :
			{
				outputData();
				getche(); //agar ada buffer/delay/jeda (untuk lanjut tekan enterkalau program udah jalan)
				continue;
			}
			case 3 :
				break; //ini cuman buat ngebreak switch-case
			default :
			{
				cout << "Maaf menu yang Anda pilih tidak tersedia.";
				getche();
				continue;
			}
		}
		break;// ini buat ngebreak loop do-while
		getche();
	}while(true);
}

void inputData()
{
	//input data di sebelah siniii
	int z, jml_matkul;
	cout << "==========================" << endl;
	cout << "        INPUT DATA        " << endl;
	cout << "==========================" << endl << endl;
	cout << "Masukkan banyak mata kuliah : "; cin >> jml_matkul;
	cout << endl;
	for(int i=0; i<jml_matkul; i++)
	{
		z=total_matkul+i;
		cout << "Mata Kuliah	: "; cin >> matkul[z];
		cout << "Nilai UTS	: "; cin >> uts[z];
		cout << "Nilai UAS	: "; cin >> uas[z];
		cout << "Nilai Kuis	: "; cin >> kuis[z];
		cout << endl << "==========================" << endl << endl;
	}
	total_matkul=total_matkul+jml_matkul;
}

void outputData()
{
	//output data di siniii
	int min=9999, max=-9999;
	char maxMatkul[10], minMatkul[10];
	
	cout << "============================================================================================================" << endl;
	cout << "                                               OUTPUT DATA            " << endl;
	cout << "============================================================================================================" << endl;
	cout<<setw(20)<<"Nama Matkul"<<"||"<<setw(15)<<"Nilai UTS"<<"||"<<setw(15)<<"Nilai UAS"<<"||"<<setw(15)<<"Nilai Kuis";
	cout<<"||"<<setw(15)<<"Nilai Akhir"<<"||"<<setw(15)<<"Predikat"<<endl;
	cout << "============================================================================================================" << endl;
	for(int i=0; i<total_matkul; i++)
	{
		
		cout <<setw(20) << matkul[i] << "||";
		cout <<setw(15) << uts[i] << "||";
		cout <<setw(15) << uas[i] << "||";
		cout <<setw(15) << kuis[i] << "||";
		akhir[i]= ((0.35*uts[i])+(0.35*uas[i])+(0.3*kuis[i]));
		cout <<setw(15) << akhir[i] << "||";
		if(akhir[i]>=80)
		{
			nilai[i]='A';
		}
		else if((akhir[i]>=60)&&(akhir[i]<80))
		{
			nilai[i]='B';
		}
		else if((akhir[i]>=40)&&(akhir[i]<60))
		{
			nilai[i]='C';
		}
		else
		{
			nilai[i]='D';
		}
		cout <<setw(15) << nilai[i] << endl;
		
		//bawah ini buat menghitung perbandingan mana nilai akhir paling tinggi dan rendah
		if (akhir[i]>max)
		{
			max=akhir[i];
			strcpy(maxMatkul,matkul[i]);
		}
		if (akhir[i]<min)
		{
			min=akhir[i];
			strcpy(minMatkul,matkul[i]);
		}
	}
	cout << "============================================================================================================" << endl;
	cout<<"\nNilai akhir tertinggi ada pada matkul :"<<maxMatkul<<endl;
	cout<<"Sedangkan nilai akhir terendah ada pada matkul :"<<minMatkul<<endl;
}
