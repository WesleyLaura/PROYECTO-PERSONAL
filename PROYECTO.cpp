/* 	PROYECTO X*/
#include <iostream>
 using namespace std;
 
 int matriz[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};


 int matriz1[3][3]={
 	{9,8,7},
	{6,5,4},
	{3,2,1}

 };
 
 int i,j;
 void mostrarMatriz(){
 	//mostrando la primera matriz
 system("cls");
 	cout<<"\nMATRIZ A\tMATRIZ B\n\n";
 	for( i=0; i<3; i++){
 		for(j=0;j<3;j++){
 			cout<<matriz[i][j]<<" ";
		}
		
 	cout<<"\t\t";
		for(j=0; j<3;j++){
		cout<<matriz1[i][j]<<" "; //imprimiendo segunda matriz
		}
		
		cout<<"\n";
	 }
system("pause");
 }


void sumaMatriz(){
	system("cls");
	
	
	
	
}
 
 
 int main(){

int op;

do{
	system("cls");
	cout<<"\n------OPERACIONES CON MATRICES---------\n\n";
	cout<<"1. MOSTRAR MATRICES\n";
	cout<<"2. SUMA DE MATRICES\n";
	cout<<"3. MULTIPL MATRICES DE ICACION DE MATRICES\n";
	cout<<"4.salir del programa\n";
	cout<<"\n\nESCRIBA LA OPCION: "; cin>>op;
	while(op<0 || op>4){
		cout<<"INGRESE UNA OPCION VALIDA : "; cin>>op;
	}
	
	switch(op){
	
		case 1:
			mostrarMatriz();
			break;
		case 2:
			sumaMatriz();
			break;
		case 3:
			//multiplicacionMatriz();
			break;
		case 4:
			cout<<"Saliendo del programa.....";
			break;			
	
	}
	
}while(op!=4);
 	
	 
 	return 0;
 }