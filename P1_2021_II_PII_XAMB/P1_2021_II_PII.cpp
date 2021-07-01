#include <iostream>

using namespace std;
int main() {
	double producto1 = 2.98;
	double producto2 = 4.50;
	double producto3 = 9.98;
	double producto4 = 4.49;
	double producto5 = 6.87;
	double venta = 0;
	double PFINAL = 0;
	int comprado = 0;
	while (comprado < 5) {
		cout << "Almacen La Antorcha" << endl;
		cout << "Que producto desea agregar?" << endl;
		cout << "Producto 1 $" << producto1 << endl;
		cout << "Producto 2 $" << producto2 << endl;
		cout << "Producto 3 $" << producto3 << endl;
		cout << "Producto 4 $" << producto4 << endl;
		cout << "Producto 5 $" << producto5 << endl;
		cin >> comprado;
		cout << "Cuantos productos de este desea agregar?" << endl;
		cin >> venta;

		switch (comprado) {
		case 1: comprado = 1;
			PFINAL = (producto1 * venta);
			cout << "Su compra final es de:  " << PFINAL << endl;
			cout << "Precio del producto: " << producto1 << " Cantidad: " << venta << endl;
			cout << " " << endl;
			break;
		case 2: comprado = 2;
			PFINAL = (producto2 * venta);
			cout << "Su compra final es de:  " << PFINAL << endl;
			cout << "Precio del producto: " << producto2 << " Cantidad: " << venta << endl;
			cout << " " << endl;
			break;
		case 3: comprado = 3;
			PFINAL = (producto3 * venta);
			cout << "Su compra final es de:  " << PFINAL << endl;
			cout << "Precio del producto: " << producto3 << " Cantidad: " << venta << endl;
			cout << " " << endl;
			break;
		case 4: comprado = 4;
			PFINAL = (producto4 * venta);
			cout << "Su compra final es de:  " << PFINAL << endl;
			cout << "Precio del producto: " << producto4 << " Cantidad: " << venta << endl;
			cout << " " << endl;
			break;
		case 5: comprado = 5;
			PFINAL = (producto5 * venta);
			cout << "Su compra final es de:  " << PFINAL << endl;
			cout << "Precio del producto: " << producto5 << " Cantidad: " << venta << endl;
			cout << " " << endl;
			break;
		default:
			cout << "No escogió ninguna de las opciones" << endl;
			system("pause");
			return 0;
		}
	}
}