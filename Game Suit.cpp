#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;


int  X, Y; 
COORD coord={X=0,Y=0};

void gotoxy(int x,int y){
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void loading(){
	for(int i=3;i>0;i--){
		gotoxy(52,14);
		cout << "Memuat.....";
		Sleep(250);
		system("cls");
		gotoxy(52,14);
		cout << "Memuat...";
		Sleep(250);
		system("cls");
		gotoxy(52,14);
		cout << "Memuat.";
		Sleep(250);
		system("cls");
	}
}


int main(){
	// Tipe Data
	system("color 3e");
	string pilihan[4] = {"1. GAJAH","2. SEMUT","3. ORANG","SILAHKAN PILIH (angka): "};
	int pilih, ulang, x, y;
	char lagi; 
	
	// Menu
	gotoxy(50,13); cout << " SELAMAT DATANG "<<endl;
	gotoxy(43,14); cout << "tekan enter untuk memulai game "<<endl;
	gotoxy(76,14);
	getch();
	    system ("cls");
	    loading();
	    
	// Menu Pilihan
	for(int i=0;i<4;i++){
		gotoxy(44,13+i);
		cout << pilihan[i] << endl;
	}
	
	// Input Pilihan
	gotoxy(68,16);
	cin >> pilih;
	    system ("cls");
		loading();
	
	// Random Komputer		
	if(pilih==1){
		gotoxy(45,13); cout << "Kamu     = GAJAH" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
            	gotoxy(44,15); cout << " KALAH ! " << endl;
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " MENANG " << endl;
            } cout << endl;
    }else if(pilih==2){
		gotoxy(45,13); cout << "Kamu     = SEMUT" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
            } cout << endl;
    }else if(pilih==3){
		gotoxy(45,13); cout << "Kamu     = ORANG" << endl;
        srand(time(NULL)); //random/acak
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
            }cout<< endl;
	}else
    		{
        		gotoxy(44,14); cout << "yang anda input salah !!" << endl;
    		}
        
	
	// Pilihan Bermain Lagi
	gotoxy(44,17); cout<<"INGIN MAIN LAGI?  (y/n) : ";
	cin>>lagi;
	switch (lagi){
		case 'y':
			system ("cls");
			loading();
			main();
			break;
		case 'n':
			system ("cls");
			loading();
	}
	
	system ("cls");
	getch();

}

