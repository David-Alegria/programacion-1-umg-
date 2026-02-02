Algoritmo formula_masa
	Definir c1 Como Real
	Definir c2 Como Real
	Definir presion Como Real
	Definir volumen Como Real
	Definir temperatura Como Real
	Definir masa Como Real
	// constantes
	c1 <- 0.37
	c2 <- 460
	// entrada de datos por parte del usuario
	Escribir 'ingrese el valor de la presion'
	Leer presion
	Escribir 'Ingrese el valor del volumen'
	Leer volumen
	Escribir 'Ingrese el valor del la temperatura'
	Leer temperatura
	// Proceso
	masa <- (presion*volumen)/(c1*temperatura+c2)
	// salida de datos
	Escribir 'La masa restante es: ', masa
FinAlgoritmo
