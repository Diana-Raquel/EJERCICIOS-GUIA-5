/*Programa que lee la hora, minutos y segundos en el modo de 24 horas y despliega la hora un segundo despues */

#include "iostream"

using namespace std;

//Funcion para calcular la hora, minuos y segundos
int reloj()
{
    int h, m, s;
    char c;

    cout << "Por favor ingresa la hora: " << endl;
    cin >> h;
    cout << "Por favor ingresa los minutos: " << endl;
    cin >> m;
    cout << "Por favor ingresa los segundos: " << endl;
    cin >> s;

    s = s + 1;
    if (s >= 60) //Cuando los segundos sean mayores a 60 tomaran el valor de 0 e incrementara los minutos 
    {
        s = 0;
        m = m + 1;
        if (m >= 60) //Cuando los minutos sean mayores a 60 tomaran el valor de 0 e incrementara las horas
        {
            m = 0;
            h = h + 1;
            if (h = 24) //Cuando la hora sea igual a 24  tomaran el valor de 0
            {
                h = 0;
            }
        }
    }

    cout << "LA HORA ES: "; 
    if (h < 10) //En esta parte de la funcion se agregara un cero a la izquierda cuando los valores sean menos a 10
        cout << 0;
    cout << h;
    cout << ':';

    if (m < 10) //En esta parte de la funcion se agregara un cero a la izquierda cuando los valores sean menos a 10
        cout << 0;
    cout << m;
    cout << ':';

    if (s < 10) //En esta parte de la funcion se agregara un cero a la izquierda cuando los valores sean menos a 10
        cout << 0;
    cout << s;
    cout << endl;
}

int main()
{
    char opcion;

    cout << endl;
    cout << "ESTE PROGRAMA LEE LAS HORAS, MINUTOS Y SEGUNDOS!" << endl;
    cout << "LO QUE HARA ES SUMAR UN SEGUNDO!" << endl;

    cout << "DESEA COMENZAR? S=si, N=no" << endl;
    cin >> opcion;

    switch (opcion) //Un Switch para iniciar el programa cuando el usuario presione s
    {
    case 's':
        reloj();
        break;
    case 'n':
    {
        cout << "Una pena que no quiera jugar :(" << endl;
        cout<<"Deberias intentarlo ;)"<<endl;
        break;
    }
    default:
        cout << "PARA QUE EL PROGRAMA EMPIECE PRESIONE 'S'POR FAVOR!" << endl;
    }

    return 0;
}