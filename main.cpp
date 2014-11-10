// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
  return mi_pila.top();//Funcion top retorna primer elemento de pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();//retorna el tamano de la pila
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    for(int i=0; i<mi_pila.size();i++)
    {
        if(str==mi_pila.top()){
            return true;     //si encuentra el string retorna true y para la funcion
        }
        mi_pila.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int valor=0;
    int mayor=0;
    int tamano = mi_pila.size();
    for(int i = 0;i<tamano;i++)
    {
        int valor = mi_pila.top();
        if(valor>mayor)    //si el valor es mayor al mayor anterioir es el nuevo mayor y al final se devuelve
        {
           mayor = valor;
        }
        mi_pila.pop();
    }
    return mayor;
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int valor=0;
    int menor=0;
    int tamano = mi_pila.size();
    for(int i = 0;i<tamano;i++)
    {
        int valor = mi_pila.top();
        //cout<<menor<<"Menor que:"<<valor<<endl;
        if(i==0){       //guarda el primer valor para poder comparar despues
            menor=valor;
        }else if(valor<menor)
        {
           menor = valor;//si el valor nuevo es menor al anterior lo guarda para devolverlo al final
        }

        mi_pila.pop();
    }
    //cout<<"El menor es:"<<menor<<endl;
    return menor;

}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
    int tamano= mi_pila.size();

    float promedio=0;
    for(int i=0; i<tamano;i++)
    {
        promedio=promedio +mi_pila.top();//acumula el valor a medida se mueve el ciclo
        //cout<<mi_pila.top()<<endl;
        mi_pila.pop();   //quita elemento de la pila
    }


     //cout<<promedio/tamano<<endl;
     //cout<<"Tam"<<tamano<<endl;
     //cout<<"Prom"<<promedio<<endl;
    return promedio/tamano; //la suma del primedio entre el tamano de la pila, es la formula estandar de average
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
