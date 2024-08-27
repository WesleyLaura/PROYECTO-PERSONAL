/* 	PROYECTO X*/
#include <iostream>
#include <windows.h>
#include <conio.h>
 using namespace std;
 
 
 //Valores globales
 
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
 
 int i,j,k;
 //---------------------------------------------------------------------------------------------------------
 void mostrarMatriz(){
 	//mostrando la primera matriz
 system("cls");
 	cout<<"\nMATRIZ A\tMATRIZ B\n\n";
 	for( i=0; i<3; i++){
 		for(j=0;j<3;j++){
 			cout<<matriz[i][j]<<" ";//imprimiendo la primera matriz
		}
		
 	cout<<"\t\t";
		for(j=0; j<3;j++){
		cout<<matriz1[i][j]<<" "; //imprimiendo segunda matriz
		}
		
		cout<<"\n";
	 }
system("pause");
	
 }
//-----------------------------------------------------------------------------------------------------------
void sumaMatriz(){
	system("cls");
	int matrizSuma[3][3];
	cout<<"\nMATRIZ A:\tMATRIZ B:\t MATRIZ SUMA:\n";
	//inicializamos la matrizsuma
	 
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		matrizSuma[i][j]=0;
		 }
	 }
	//algoritmo  de suma de matrices
	for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		matrizSuma[i][j]+=matriz[i][j] + matriz1[i][j];
		 }
	 }
	 //mostrar  las matrices
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";//imprimiedo la primera matriz
		
		}
		cout<<"\t\t";
		for(j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";//imprimiendo  la segunda matriz
		}
		cout<<"\t\t";
		
	for(j=0;j<3;j++){
		cout<<matrizSuma[i][j]<<" "; //	imprimiendo la suma de la matriz A y B
	}
	cout<<"\n";
	}
	
	system("pause");
}
 //--------------------------------------------------------------------------------------------------------
void  multiplicacionMatriz(){
	system("cls");
	int matrizMultiplicacion[3][3];
	cout<<"\nMATRIZ A:\tMATRIZ B:\tRESULTADO:\n";
	//inicializamos la matrizsuma
	 
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		matrizMultiplicacion[i][j]=0;
		 }
	 }
	//	ALGORITMO DE MULTIPLICACIONM DE MATRICES
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		 	for(k=0;k<3;k++){
	 		matrizMultiplicacion[i][j]+=matriz[i][k] * matriz1[k][j];
		 	}	
		}
	 }
	 //mostrar  las matrices
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";//imprimiedo la primera matriz
		
		}
		cout<<"\t\t";
		for(j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";//imprimiendo  la segunda matriz
		}
		cout<<"\t\t";
		
		for(j=0;j<3;j++){
		cout<<matrizMultiplicacion[i][j]<<" "; //	imprimiendo la multiplicacio de la matriz A y B
		}
	cout<<"\n";
	}
	system("pause");
}
//---------------------------------------------------------------------------------------------------------
void transpuesta(){
	system("cls");
	cout<<"\nMATRIZ A:\tMATRIZ B:\tTRANSPUESTA A:\tTRANSPUESTA B:\n";
	int transpuestaA[3][3];
	int transpuestaB[3][3];
	//Copia de las matrices para no alterar las matrices iniciales
	 int copiaMatriz[3][3];
	 int copiaMatriz1[3][3];
	 //copia de la primera matriz
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		copiaMatriz[i][j]=matriz[i][j];
		 }	 
	 }
	//copia de la segunda matriz
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		copiaMatriz1[i][j]=matriz1[i][j];
		 }	 
	 }
	

	//algoritmo  la matriz transpuesta
	for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		transpuestaA[j][i]=copiaMatriz[i][j]; 	
		 }
	 }
	 
	 //algoritmo  la matriz1 transpuesta
	for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		transpuestaB[j][i]=copiaMatriz1[i][j]; 	
		 }
	 }
	 
	 
	 //mostrar  las matrices
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";//imprimiedo la primera matriz
		
		}
		cout<<"\t\t";
		for(j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";//imprimiendo  la segunda matriz
		}
		cout<<"\t\t";
		
		for(j=0;j<3;j++){
		cout<<transpuestaA[i][j]<<" "; //	imprimiendo TRANSPUESTA DE LA MATRIZ
		}
		cout<<"\t\t";
	
		for(j=0;j<3;j++){
		cout<<transpuestaB[i][j]<<" "; //	imprimiendo transpuesta de la matriz1
		}
	
		cout<<"\n";
	}
	
	system("pause");
	
}
//-----------------------------------------------------------------------------------------------------
 int main(){
SetConsoleOutputCP(CP_UTF8);
int op;
do{
	system("cls");
	cout<<"\n------OPERACIONES CON MATRICES---------\n\n";
	cout<<"1. MOSTRAR MATRICES\n";
	cout<<"2. SUMA DE MATRICES\n";
	cout<<"3. MULTIPLICACIÓN DE MATRICES\n";
	cout<<"4. TRANSPUESTA DE UNA MATRIZ \n";
	cout<<"5. TRAZA DE UNA MATRIZ\n";
	cout<<"6.salir del programa\n";
	cout<<"\n\nESCRIBA LA OPCION: "; cin>>op;
	while(op<0 || op>6){
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
			multiplicacionMatriz();
			break;
		case 4:
			transpuesta();
			break;
		case 5:
			//traza();
			break;
		case 6:
			cout<<"Saliendo del programa.....";
			break;			
	}
}while(op!=6);
	getch();
 	return 0;
 }