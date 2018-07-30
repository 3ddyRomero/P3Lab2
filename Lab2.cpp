#include <iostream>
#include <math.h>

using namespace std;

int menu();
int Eluno();
int ElDos();
int ElTres();

int main(){
    char ejecucion = 'y';
    do{
        switch (menu()){
        case 1:{
            Eluno();
            break;
        }
        case 2:{
            ElDos();
            break;
        }
        case 3:{
            ElTres();
            break;
        }
        case 4:
            ejecucion = 'n';
            cout << " La ejecución ha finalizado " << endl;
            cout << "****\\\\Buen dia//****" << endl;
            break;

        } //end switch
    } while (ejecucion != 'n');

    return 0;
}



int menu(){
    int opcion=0;
    cout<<"Bienvenido al Laboratorio 2 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Ejercicio 1." << endl;
    cout << "2. Ejercicio 2." << endl;
    cout << "3. Ejercicio 3." << endl;
    cout << "4. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;
}

int Eluno(){
int limite, cubo=0,n;

cout<<"Defina el numero limite: " ;
cin >> limite;
int acum=1;
int impar = 1;
        while(acum<=limite){
                cubo = 0;
                cout<<"\n"<<acum<<"^3 = ";
        for (int i = 0; i < acum; i++){
                cout<<impar;
        if(i < acum - 1)
                cout<<"+";
                cubo = cubo + impar;
        impar = impar+2;}
        cout<<"="<<cubo<<endl;
        acum++;
        }

return 0;


}

int ElDos(){

}

int ElTres(){
	int n, d, k;
	int acum;

	cout<<"Ingrese el Número a utilizar."<<endl;
	cin>>n;
	k=0;
	for(int i=1;i<=n;i++){
		if(n % i == 0){
			cout<<i<<endl<<endl;
			acum = i;
			d = ((i + n)/i);

cout<<d<<endl;			
			
		}
		
	}			
	//cout<<"La suma de sus divisores es: "<<d<<endl;

}