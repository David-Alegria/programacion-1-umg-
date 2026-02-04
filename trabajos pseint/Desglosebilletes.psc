Algoritmo Desglosebilletes
	Definir monto Como Entero
	Definir billete100 Como Entero
	Definir billete50 Como Entero
	Definir billete20 Como Entero
	Definir billete10 Como Entero
	Definir billete5 Como Entero
	Definir moneda1 Como Entero
	Definir resto Como Entero
	Escribir 'Ingresa el monto: '
	Leer monto
	billete100 <- trunc(monto/100)
	resto <- monto MOD 100
	billete50 <- trunc(resto/50)
	resto <- resto MOD 50
	billete20 <- trunc(resto/20)
	resto <- resto MOD 20
	billete10 <- trunc(resto/10)
	resto <- resto MOD 10
	billete5 <- trunc(resto/5)
	resto <- resto MOD 5
	moneda1 <- trunc(resto/1)
	resto <- resto MOD 1
	Escribir 'Billetes de 100: ', billete100
	Escribir 'Billetes de 50: ', billete50
	Escribir 'Billetes de 20: ', billete20
	Escribir 'Billetes de 10: ', billete10
	Escribir 'Billetes de 5: ', billete5
	Escribir 'Monedas de 1: ', moneda1
FinAlgoritmo
