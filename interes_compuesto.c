#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIAS 'D'
#define MESES 'M'
#define ANIO 'A'

const double CIEN_PORCIENTO = 100;

const int DIAS_ANIO = 365;
const int MESES_ANIO = 12;
const int ANIOS_ANIO = 1;

void ingreso_ganacias_iniciales(double* ganancias_iniciales){
	printf("Ingrese sus ganacias iniciales: ");
	scanf("%lf", ganancias_iniciales);
}

void ingreso_interes_anual_actual(double* interes_anual){
	printf("Ingrese el interes anual de tu banco actual: ");
	scanf("%lf", interes_anual);
}

void ingreso_tipo_tiempo(char* tipo_tiempo){
	printf("Ingrese: \n(%c) si quiere saber el interes compuesto en dias\n(%c) si quiere saber el interes compuesto en meses\n(%c) si quiere saber el interes compuesto en dias\n", DIAS, MESES, ANIO);
	scanf(" %c", tipo_tiempo);
}

void ingreso_cantidad_tiempo(int* cantidad_dias){
	printf("Ingrese la cantidad de tiempo que va a dejar depositado el dinero: ");
	scanf("%i", cantidad_dias);
}

int main(){
	double interes_compuesto = 0;
	double interes_anual = 0;
	double ganancias_iniciales = 0;
	int cantidad_tiempo = 0;
	double variable_interes_compuesto = 0;
	double variable_interes_compuesto_2 = 1;
	char tipo_tiempo =  ' ';
	int referecias_tipo_tiempo = 0;

	ingreso_ganacias_iniciales(&ganancias_iniciales);
	ingreso_interes_anual_actual(&interes_anual);

	ingreso_tipo_tiempo(&tipo_tiempo);

	switch(tipo_tiempo){
		case DIAS:
		referecias_tipo_tiempo = DIAS_ANIO;
		break;
		case MESES:
		referecias_tipo_tiempo = MESES_ANIO;
		break;
		case ANIO:
		referecias_tipo_tiempo = ANIOS_ANIO;
		break;
	}

	ingreso_cantidad_tiempo(&cantidad_tiempo);

	system("clear");

	variable_interes_compuesto = (1 + interes_anual/(CIEN_PORCIENTO * referecias_tipo_tiempo));

	for (int i = 1; i <= cantidad_tiempo; i ++){
		variable_interes_compuesto_2 *= variable_interes_compuesto;
	}

	interes_compuesto = ((variable_interes_compuesto_2) * ganancias_iniciales);

	printf("Total final $%.2f\nCon una ganacia de $%.2f\n", interes_compuesto, (interes_compuesto - ganancias_iniciales));
}