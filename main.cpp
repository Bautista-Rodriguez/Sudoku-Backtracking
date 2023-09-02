#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>

using namespace std;

void inicializarTabla();
void generarTabla();
void mostrarTabla();

bool insertarNumero(int,int);
bool numeroValido(int,int,int);


int vecNum[]={1,2,3,4,5,6,7,8,9};
int espaciosLibres=0;
int tabla[9][9];

int main()
{
    int opcion;
    while(true)
    {
        cout<<
        "Bienvenido/a al programa de generacion y resolucion de Sudokus.\n"
        "1-Generar sudoku.\n"
        "2-Mostrar sudoku.\n"
        "3-Resolver sudoku.\n"
        "4-Salir.\n\n"
        "Ingrese su opcion: ";
        cin>>opcion;
        cout<<endl;
        switch(opcion)
        {
        case 1:
            generarTabla();
            break;
        case 2:
            mostrarTabla();
            break;
        case 3:
            insertarNumero(0,0);
            break;
        case 4:
            return 0;
        default:
            cout<<"ERROR: opcion invalida."<<endl;
        }
        cout<<"Presione una tecla para continuar...";
        getch();
        system("cls");
    }
    return 0;
}

void inicializarTabla(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            tabla[i][j]=0;
        }
    }
}

void generarTabla(){
    srand(time(NULL));
    inicializarTabla();
    for(int i=0;i<9;i++)
    {
        int nuevo = rand()%9;
        int aux = vecNum[nuevo];
        vecNum[nuevo]=vecNum[i];
        vecNum[i]=aux;
    }
    int randNum1=rand()%8+1;
    int randNum2=randNum1;

    while(randNum1==randNum2)
    {
        randNum2=rand()%8+1;
    }
    int valor1 = rand()%3;
    int valor2 = rand()%3;
    int valor3 = rand()%3;
    for(int i=0;i<9;i++)
    {
        tabla[0+valor1][i]=vecNum[i];
        tabla[3+valor2][i]=vecNum[(i+randNum1)%9];
        tabla[6+valor3][i]=vecNum[(i+randNum2)%9];
    }
    espaciosLibres=54;
    insertarNumero(0,0);
    while(espaciosLibres!=63)
    {
        int indexFila = rand()%9;
        int indexCol = rand()%9;
        if(tabla[indexFila][indexCol]!=0)
        {
            tabla[indexFila][indexCol]=0;
            espaciosLibres++;
        }
    }
}

void mostrarTabla()
{
    for(int i=0;i<9;i++)
    {
        if(i%3==0 && i!=0)
            cout<<"------------------"<<endl;
        for(int j=0;j<9;j++)
        {
            cout<<tabla[i][j];
            if((j+1)%3==0 && (j+1)!=9)
                cout<<"|";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}

bool insertarNumero(int i,int j)
{
    if(espaciosLibres==0)
        return true;
    int fila=-1,col=-1;
    for(;i<9;i++)
    {
        for(;j<9;j++)
        {
            if(tabla[i][j]==0)
            {
                fila=i;
                col=j;
                i=10;
                j=10;
            }
        }
        j=0;
    }
    for (int k=1;k<10;k++)
    {
        if(numeroValido(k,fila,col))
        {
            tabla[fila][col]=k;
            espaciosLibres--;
            if(insertarNumero(fila,col))
                return true;
            else
            {
                tabla[fila][col]=0;
                espaciosLibres++;
            }
        }
    }
    return false;
}

bool numeroValido(int numero,int fila,int columna)
{
    int i,j;
    int filaRegion, colRegion;
    for(i=0;i<9;i++)
    {
        if(tabla[i][columna]==numero)
            return false;
    }
    for(j=0;j<9;j++)
    {
        if(tabla[fila][j]==numero)
            return false;
    }
    filaRegion=(fila/3)*3;
    colRegion=(columna/3)*3;
    for(i=filaRegion;i<filaRegion+3;i++)
    {
        for(j=colRegion;j<colRegion+3;j++)
        {
            if(tabla[i][j]==numero)
                return false;
        }
    }
    return true;
}
