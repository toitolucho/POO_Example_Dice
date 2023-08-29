#include <iostream>
using namespace std;
class Dice
{
	//* modificadores de acceso
private:
	int target;
public:
	int value;
	//declarion de atributos
	
	//declar constructores
	//El constructor siempre lleva el mismo nombre de la clase
	//comunmente sirve para inicializar los atributos
	Dice()
	{
		target = 5;
		value = 0;
	}
	Dice(int tar)
	{
		target = tar;
	}
	Dice(int val, int tar)
	{
		target = tar;
		value = val;
	}
	//declara metodos
	
	//declaracion de setters y getters
	//declaracion de funciones de cambio y lectura
	//lectura getter
	/*tipo_dato getNombreAtributo()
	{
		return NombreAtributo;
	}
	
	// cambio setter
	void setNombreAtributo(tipo_dato valor)
	{
		NombreAtributo = valor;
	}*/
	
	int getTarget()
	{
		return target;
	}
	
	// cambio setter
	void setTarget(int x)
	{
		target = x;
	}
	
};

struct Hora
{
//public:
	int hora;
	int minuto;
	int segundo;
//private:
	char tipo;
};

int main(int argc, char *argv[]) {
	//Hora h1;
	//h1.minuto =7;
	//cout<<h1.hora<<":"<<h1.minuto<<":"<<h1.segundo<<endl;
	Dice d1;
	cout<<d1.value<<endl;
	
	Dice d2;
	cout<<d2.value;
	//d2.target = 1;
	return 0;
}

