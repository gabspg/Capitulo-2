#include <iostream>

using namespace std;

int main() {
    double totalKilometros;
    double costoGasolinaPorLitro;
    double promedioKmPorLitro;
    double cuotasEstacionamiento;
    double peaje;

    cout << "Ingrese el total de kil�metros conducidos por d�a: ";
    cin >> totalKilometros;

    cout << "Ingrese el costo por litro de gasolina: $";
    cin >> costoGasolinaPorLitro;

    cout << "Ingrese el promedio de kil�metros por litro: ";
    cin >> promedioKmPorLitro;

    cout << "Ingrese las cuotas de estacionamiento por d�a: $";
    cin >> cuotasEstacionamiento;

    cout << "Ingrese el peaje por d�a: $";
    cin >> peaje;

    double costoGasolinaDiario = (totalKilometros / promedioKmPorLitro) * costoGasolinaPorLitro;
    double costoTotalDiario = costoGasolinaDiario + cuotasEstacionamiento + peaje;

    cout << "\nCosto diario de conducir al trabajo: $" << costoTotalDiario << endl;

    return 0;
}
