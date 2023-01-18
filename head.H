/*
  Pembuat    : Refsa Nur intan
  Nis	       : 222310567
  Email      : Refsanurintan27@gmail.com
  Kontak     : 083170786882
  Pembimbing : Devi Rodiana
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (revsa,ravsap)
*/
#include <conio.h>
#include <iostream.h>

head(char jud[50]=""){
	cout<<"***************************************************************"<<endl;
   cout<<".....................::PEGADAIAN SYARIAH::....................."<<endl;
	cout<<"                       "<<jud<<endl;
  	cout<<"***************************************************************"<<endl;
   if(strcmp(jud,"LOGIN APLIKASI")==0){
    	cout<<"JUDUL     : APP PEGADAIAN SYARIAH"<<endl;
   	cout<<"PEMBUAT   : Revsa Nur Intan"<<endl;
   	cout<<"NIs       : 22231567"<<endl;
   	cout<<"KELAS     : X PPLG"<<endl;
   	cout<<"VERSI APP : 1.1 (BUILD FULL WITH BORLAND C++)"<<endl;
      cout<<"NOTE      : Gunakan (Username:ravsa) dan (Password:ravsap)"<<endl;
   	cout<<"***************************************************************"<<endl;
   }
}