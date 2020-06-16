/*Escriba un programa que lea tres numeros enteros que representan los valores de dia, mes y año, de una fecha cualquiera
Luego dar como resultado los valores del dia, mes y año correspodiente al dia siguiente*/

#include "iostream"

using namespace std;

//Funcion para saber si un año es biciesto o no
bool biciesto(int anio)
{
    return ((anio % 4) == 0 && (anio % 100) != 0) || (anio % 400 == 0);
}

//Funcion para calcular los diferentes dias del año, de 28, 29, 30 o 31 dias
int dia_mes(int mes, int anio)
{
    int dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) //meses del año que tienen 30 dias
    {
        dias = 30;
    }
    else if (mes == 2)
    {
        if (biciesto(anio)) //Definira si el año contendra 29 o 28 dias
        {
            dias = 29;
        }
        else
            dias = 28;
    }
    return dias;
}

int main()
{
    int dia, mes, anio;

    cout<<endl;
    cout<<"Programa que calcula fechas de diferentes dias, meses y a"<<(char)164<<"os "<<endl<<endl; //164 ascii de ñ
    cout <<"POR FAVOR DIJITE LOS DATOS: "<<endl; 
    cout<<"INGRESE EL DIA: " << endl;
    cin >> dia;
    cout << "INGRESE EL MES: " << endl;
    cin >> mes;
    cout << "INGRSE EL DIA: " << endl;
    cin >> anio;

    dia++;
    if (dia > dia_mes(mes, anio)) //Aplicando la funcion dias_mes
    {
        dia = 1;
        mes++;
        if (mes > 12)
        {
            mes = 1;
            anio++;
        }
    }

    cout << "EL DIA ES: " << dia << endl;
    cout << "EL MES ES: " << mes << endl;
    cout << "EL A"<<(char)165<<"O ES: " << anio << endl;

    return 0;
}