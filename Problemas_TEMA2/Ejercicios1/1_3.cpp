//Búsqueda de un elemento dentro de un vector y devolución del índice en caso de encontrarlo

#include <iostream>

void encontrar();

int main(){
encontrar();

	return 0;
}


void encontrar(){

const int vec = 5;
int A[vec] = {5,10,15,20,25};
int valor{0};
bool encontrar = false;

std::cout << "A: ";
	for (int i = vec-1; i >= 0; --i){
		std::cout << A[i] << " ";
	}
std::cout << "\nIntroduce el valor a encontrar: ";
std::cin >> valor;
	for (int i = 0; (i < vec) && !encontrar; ++i){
		if (A[i] == valor){
			encontrar = true;
		}
	}
std::cout << "Valor " << valor << (!encontrar ? " no " : " ") 
<< "encontrado " << std::endl;
}