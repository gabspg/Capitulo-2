#include <iostream>

using namespace std;

int main() {
    double totalKilometros;
    double costoGasolinaPorLitro;
    double promedioKmPorLitro;
    double cuotasEstacionamiento;
    double peaje;

    cout << "Ingrese el total de kilómetros conducidos por día: ";
    cin >> totalKilometros;

    cout << "Ingrese el costo por litro de gasolina: $";
    cin >> costoGasolinaPorLitro;

    cout << "Ingrese el promedio de kilómetros por litro: ";
    cin >> promedioKmPorLitro;

    cout << "Ingrese las cuotas de estacionamiento por día: $";
    cin >> cuotasEstacionamiento;

    cout << "Ingrese el peaje por día: $";
    cin >> peaje;

    double costoGasolinaDiario = (totalKilometros / promedioKmPorLitro) * costoGasolinaPorLitro;
    double costoTotalDiario = costoGasolinaDiario + cuotasEstacionamiento + peaje;

    cout << "\nCosto diario de conducir al trabajo: $" << costoTotalDiario << endl;

    return 0;
}
