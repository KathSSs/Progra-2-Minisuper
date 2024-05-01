#include "Fecha.h"



Fecha::Fecha() {
    dia = 1;
    mes = 1;
    annio = 2000;
}

Fecha::Fecha(int d, int m, int a) {
    dia = d;
    mes = m;
    annio = a;
}

Fecha::~Fecha() {
   
}

void Fecha::setDia(int d) {
   dia = d;
}
void Fecha::setMes(int m) {
    mes = m;
}
void Fecha::setAnnio(int a) {
    annio = a;
}

int Fecha::getDia() {
    return dia;
}
int Fecha::getMes() {
    return mes;
}
int Fecha::getAnnio() {
    return annio;
}

string Fecha::toStringFecha() {
    stringstream s;
    s << dia << "/" << mes << "/" << annio<<endl;
    return s.str();
}

int Fecha::obtenerDiaActual()
{
    time_t tiempoActual;
    time(&tiempoActual); // Obtener el tiempo actual

    struct tm fechaBuffer; // Crear un buffer para almacenar la fecha
    localtime_s(&fechaBuffer, &tiempoActual); // Usar la versión segura de localtime

    return fechaBuffer.tm_mday; // Devuelve el día
}

int Fecha::obtenerMesActual()
{
    time_t tiempoActual;
    time(&tiempoActual);

    struct tm fechaBuffer; // Crear un buffer
    localtime_s(&fechaBuffer, &tiempoActual);

    return fechaBuffer.tm_mon + 1; // Devuelve el mes
}

int Fecha::obtenerAnnioActual()
{
    time_t tiempoActual;
    time(&tiempoActual);

    struct tm fechaBuffer; // Crear un buffer
    localtime_s(&fechaBuffer, &tiempoActual);

    return fechaBuffer.tm_year + 1900; // Devuelve el año
}





//void Fecha::obtenerFechaActual()
//{
//    // Obtener el tiempo actual en segundos desde epoch
//    time_t tiempoActual;
//    time(&tiempoActual);
//
//    // Obtener la fecha y hora local de manera segura
//    struct tm fechaBuffer;
//    localtime_s(&fechaBuffer, &tiempoActual);
//
//    // Actualizar los valores de d�a, mes y a�o
//    dia = fechaBuffer.tm_mday;
//    mes = fechaBuffer.tm_mon + 1; // tm_mon es 0-indexado
//    annio = fechaBuffer.tm_year + 1900;
//}
