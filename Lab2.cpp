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
    int a, b, c;
    cout<<"Ingrese el primer lado: ";
    cin>>a;
    cout<<"Ingrese el segundo lado: ";
    cin>>b;
    cout<<"Ingrese el tercer lado: ";
    cin>>c;

    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
    cout<<"Forman un triángulo rectángulo"<<endl;
    }else{
        cout<<"No forman un triangulo rectangulo!!!"<<endl;
    }

}

int ElTres(){
	int n, d, k;
	int acum;

	cout<<"Ingrese el Número a utilizar."<<endl;
	cin>>n;
	k=0;
    int a = 0;
    int array[n];

    for(int i=0;i<=n;i++){
        if(n % i == 0){
            array[i]=i;
            cout<<array[i]<<endl;   
        }
    }
            

        /*for (int c = 1; c <array[n]; c++){
            if(n % c == 0){
                a++;                           
            }
            if(a != 2){
                d=((c+n)/c);
                k=d+c;
            }else{

            }
        }*/
	   //cout<<"/*/*/*/"<<d<<endl;
	   
	   
    			
	//cout<<"La suma de sus divisores es: "<<k<<endl;
return 0;
}
