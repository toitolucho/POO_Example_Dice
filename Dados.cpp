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
	
	//comportamiento
	void throwDice()//arrojar Dado
	{
		//asignar un valor al azar a Value
		
	}
	bool isMatch() // hayEmparejamiento
	{
		bool resp ;
		// pregunta de comparacion entre value y target
		return resp;
	}
	void print()
	{
		//modulo que muestra el value obtenido y el target
		//para representar graficamente, imprime asteriscos de tal manera
		//que asemejemos un dado. por ejemplo
		//Si value = 2, se deberia imprimir
		//  -------
		//  |  *  |
		//  |     |
		//  |  *  |
		//  -------
	}
};


int main(int argc, char *argv[]) {
	int opcion = 1;
	Dice d1(5);
	while(opcion==1)
	{
		cout<<"1.- Arrojar Dado"<<endl;
		cout<<"2.- Cambiar Target"<<endl;
		cout<<"0.- Salir"<<endl;
		cin>>opcion;
		if(opcion ==1)
		{
			//arrojamos el dado
			d1.throwDice();
			//* preguntas si hay match
			//imprime si acerto de acuerdo a la pregunta
			//* imprime el valor representado con el dado
			
		}
		if(opcion == 2)
		{
			//*cambia el target de d1
			//pide datos de la consola para cambiarlo
			
		}
		
	}
	return 0;
}

