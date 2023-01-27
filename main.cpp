//PRACTICA 1 - EDA
//RENATO AGUSTIN MONTENEGRO PALMA

#include <iostream>
#include <vector>

using namespace std;

void exercise5()
{
    cout << endl << "Numeros del 1 al 10:" << endl;
    for(int i=1; i<=10; ++i){
        cout << i << endl;
    }
    cout << endl;
}

void exercise4()
{
    int num = 0;
    int count = 0;
    cout << endl << "Introduce numeros enteros y para terminar ingresa 0:" << endl;
    do{
        cin>>num;
        ++count;
    }while(num!=0);
    cout << "La cantidad de numeros introducidos es " << count-1 << "." << endl; //Ya que el 0 es la condicion de parada no se incluye en la cuenta.
    cout << endl;
}

void exercise3()
{
    int num = 0;
    do{
        cout << endl << "Introduce un numero para saber si es par/impar: (0 -> Salir)" << endl;
        cin>>num;
        if(num==0){
            break;
        }else if(num%2==0){
            cout << "El numero " << num << " es par." << endl;
        }else{
            cout << "El numero " << num << " es impar." << endl;
        }
        cout << endl;
    }while(true);

}

void exercise2()
{
    int num = 0;
    int op = 0;
    vector<int> vec;
    do{
        int result = 0;
        cout << endl << "Introduce 1 para sumar dos numeros y 0 para salir: ";
        cin>>op;
        if(op==0){
            break;
        }else{
            cout << "Introduce dos numeros:" << endl;
            for(int i=0; i<2; ++i){
                cin>>num;
                vec.push_back(num);
            }
            for(int elem: vec){
                result += elem;
            }
            vec.clear();
            cout << "La suma de estos numeros es: " << result << endl;
            cout << endl;
        }
    }while(true);
}

void exercise1()
{
    cout << "Hola mundo" << endl;
    cout << endl;
}

int main()
{
    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();
    return 0;
}
