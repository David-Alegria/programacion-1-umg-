Algoritmo Operaciones_Bancarias
	
	Definir nombre Como Cadena
	Definir saldo, monto, comision, cheque Como Real
	Definir opcion Como Cadena
	Definir saldo_inicial Como Real
	Definir contador_efectivo, contador_cheque, contador_retiros Como Entero
	Definir suma_retiros, min_deposito, max_retiro Como Real
	
	contador_efectivo <- 0
	contador_cheque <- 0
	contador_retiros <- 0
	suma_retiros <- 0
	min_deposito <- 999999
	max_retiro <- 0
	
	Escribir 'Ingresa tu nombre: '
	Leer nombre
	
	Escribir 'Inrgesa tu saldo inicial: '
	Leer saldo
	saldo_inicial <- saldo
	
	Escribir 'Bienvenido, ', nombre
	Escribir 'Su saldo inicial es de: ', saldo
	
	Repetir
		
		Escribir '--- Opciones ---'
		Escribir '(D) Deposito'
		Escribir '(R) Retiro'
		Escribir '(F) Fin'
		Leer opcion
		
		Si opcion=='D' Entonces
			Escribir '--- Opciones de Deposito ---'
			Escribir ' (E) Efectivo'
			Escribir ' (C) Cheque'
			Leer opcion
		FinSi
		
		Si opcion=='E' Entonces
			
			Escribir 'Ingrese la cantidad que desea agregar:'
			Leer monto
			saldo <- saldo+monto
			contador_efectivo <- contador_efectivo+1
			Si monto<min_deposito Entonces
				min_deposito <- monto
			FinSi
			Escribir 'Su saldo actual es: ', saldo
		SiNo
			
			Si opcion=='C' Entonces
				Escribir 'Ingrese la cantidad del cheque'
				Leer cheque
				comision <- cheque*0.01
				saldo <- saldo+cheque-comision
				contador_cheque <- contador_cheque+1
				Si cheque<min_deposito Entonces
					min_deposito <- cheque
				FinSi
				Escribir 'Su saldo actualizado es: ', saldo
			FinSi
		FinSi
		
		Si opcion=='R' Entonces
			Escribir 'Ingrese la cantidad a restirar'
			Leer monto
			Si monto<=saldo Entonces
				saldo <- saldo-monto
				contador_retiros <- contador_retiros+1
				suma_retiros <- suma_retiros+monto
				Si monto>max_retiro Entonces
					max_retiro <- monto
				FinSi
				Escribir 'Su saldo actual es: ', saldo
			SiNo
				Escribir 'Sobregirado'
			FinSi
		FinSi
	Hasta Que opcion=='F'
	Escribir '--- Resultados ---'
	Escribir 'Estos fueron sus movimiento en su cuenta, ', nombre
	Escribir 'Su saldo inicial fue de: ', saldo_inicial
	Escribir 'Su saldo final es de: ', saldo
	Escribir 'El numero promedio de deposios en efectivo fue de: ', contador_efectivo
	Escribir 'Su numero de depositos en cheque fue de: ', contador_cheque
	Si contador_retiros>0 Entonces
		Escribir 'El monto promedio de retiro es: ', suma_retiros/contador_retiros
	SiNo
		Escribir 'Monto promedio de retiro es: 0'
	FinSi
	Escribir 'Monto minimo de deposito es: ', min_deposito
	Escribir 'Monto maximo retirado es: ', max_retiro
FinAlgoritmo
