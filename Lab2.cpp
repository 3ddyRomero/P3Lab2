#include <iostream>
#include <math.h>
#include <iomanip>

#define PI  3.1415926535897

using namespace std;

int menu();
int Eluno();
int ElDos();
int ElTres();
bool Primo(int);
void dimensiones(double, double, double);
void dimensionesb(double, double, double);

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
            cout<<setw(20)<< "La ejecución ha finalizado " << endl;
            cout<<setw(20)<< "****\\\\Buen dia//****" << endl;
            break;

        } //end switch
    } while (ejecucion != 'n');

    return 0;
}



int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 2 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Ejercicio 1." << endl;
    cout << "2. Ejercicio 2." << endl;
    cout << "3. Ejercicio 3." << endl;
    cout << "4. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

int Eluno(){
int limite, cubo=0,n;

cout<<"Defina el numero limite: " ;
cin >> limite;
cout<<endl<<endl;
int acum=1;
int impar = 1;
        while(acum<=limite){
                cubo = 0;
                cout<<setw(18)<<acum<<"^3 = ";
        for (int i = 0; i < acum; i++){
                cout<<impar;
        if(i < acum - 1)
                cout<<"+";
                cubo = cubo + impar;
            impar = impar+2;
        }
        cout<<"="<<cubo<<endl;
        acum++;
        }
        cout<<endl<<endl;

return 0;


}

int ElDos(){
    double a, b, c, s, area;
    cout<<"Ingrese el primer lado: ";
    cin>>a;
    cout<<"Ingrese el segundo lado: ";
    cin>>b;
    cout<<"Ingrese el tercer lado: ";
    cin>>c;
    cout<<endl<<endl;

    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        cout<<"******\\Forman un triángulo rectángulo/******"<<endl<<endl;
        s=((a+b+c)/2);
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        cout<<"El área del triangulo es: "<<area<<endl<<endl;

        cout<<"Angulos Formados utilizando la formula: "<<endl;
        cout<<"**************"<<endl;
        dimensiones(a,b,c);
        dimensiones(b,a,c);
        dimensiones(c,b,a);
        cout<<"**************"; 

        

    }else{
        cout<<"No forman un triangulo rectangulo!!!"<<endl<<endl;
    }cout<<endl<<endl;
}

void dimensiones(double x, double y, double z){
    double angle = 0.0;
    angle = acos(((x*x*-1)+y*y+z*z)/(2*y*z));
    angle = (angle*180.0)/PI;
    cout<<angle<<endl;
}

/*void dimensionesb(double x, double y, double z){
    double angle = 0.0;
    
    angle = acos(((y*y*-1)+x*x+z*z)/(2*x*z));
    angle = (angle*180.0)/PI;
    cout<<angle<<endl;
}*/

int ElTres(){
    int a = 0;
    int n, d, k;
    int acum = 0;
    cout<<"Ingrese el Número a utilizar."<<endl;
    cin>>n;
    cout<<endl<<endl;
    k=0;
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            cout<<i<<"(Divisor)"<<endl<<endl;
            //acum = i;
            d = ((i + n)/i);

            if (Primo(d)){
                cout<<"Sumo Un Primo."<<endl;
                acum+=d;
                cout<<"***"<<d<<"***"<<endl;  
            }else{
                cout<<"No Sumo Ningún Primo."<<endl;  
            }
                   
            

            
        }
        
    }
    cout<<endl;           
    cout<<"La suma de sus divisores es: "<<acum<<endl<<endl;


            

return 0;
}

bool Primo(int n){

    //if(n % 2 == 0) return false;

    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

