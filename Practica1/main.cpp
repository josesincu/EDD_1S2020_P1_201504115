#include <iostream>
#include <string>


#include <ncurses.h>

#include "Doubly_Linked_List.h"
#include "Stack.h"
#include "myWin.h"
#include "file_Graphviz.h"

using namespace std;

void inputData();
void menu();
void lista_Doble(int , Doubly_Linked_List **);
//Variables
Doubly_Linked_List *doubly_List = new Doubly_Linked_List();
file_Graphviz *graf = new file_Graphviz();

int main()
{
////////////////////////
myWin miventana;
miventana.createWindows();
    //////////////////////////////////
    //menu();

    /*
    doubly_List->insert_Node('a',1);
    doubly_List->insert_Node('b',2);
    doubly_List->insert_Node('c',3);
    doubly_List->insert_Node('d',4);
    doubly_List->insert_Node('e',4);
    doubly_List->insert_Node('f',4);
    graf->createFile_Double_Linked_list(&doubly_List);
    system("dot -Tpng datos.dot -o output.png");
    system("eog output.png");
    */
    return 0;
}



































void menu()
{
cout<<"Bienvenidos Escoja Una Opcion"<<endl;
cout<<"1. Lista Doble"<<endl;
cout<<"2. Pila"<<endl;
cout<<"3. Lista Circular"<<endl;
int opcion;
cin>>opcion;
Doubly_Linked_List *lisDoubll = new Doubly_Linked_List();
lista_Doble(opcion,&lisDoubll);

}

void lista_Doble(int option , Doubly_Linked_List **d_Linked)
{
Doubly_Linked_List *newDoubly =  new Doubly_Linked_List();
newDoubly = *d_Linked;
//cout<<"Bienvenidos Escoja Una Opcion"<<endl;
cout<<"1. Ingresar"<<endl;
cout<<"2. Mostrar"<<endl;
cout<<"3. Salir"<<endl;

while(option!=3)
{

switch(option)
{
case 1:
char caracter;
int id;
cout<<"1. Ingresa un Caracter:"<<endl;
cin>>caracter;
cout<<"2. Ingresa un ID"<<endl;
cin>>id;
newDoubly->insert_Node(caracter,id);
break;
case 2:
newDoubly->display_forward();
break;
default:
break;

}
cin>>option;
}

}


