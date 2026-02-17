Algoritmo calculadora
	Definir ingresoDePrimernumero Como Entero
	Definir ingresoDeSegundonumero Como Entero
	Definir opcion Como Entero
	Definir total Como Real
	Repetir
		Escribir 'Opciones de calculadora'
		Escribir '1. Suma'
		Escribir '2. Resta'
		Escribir '3. Multiplicacion'
		Escribir '4. Division'
		Escribir '5. Fin'
		Leer opcion
		Si opcion==1 Entonces
			Escribir 'Ingresa el primer numero'
			Leer ingresoDePrimernumero
			Escribir 'Ingresa el segundo numero'
			Leer ingresoDeSegundonumero
			total <- ingresoDePrimernumero+ingresoDeSegundonumero
			Escribir 'El total de la suma es: ', total
		FinSi
		Si opcion==2 Entonces
			Escribir 'Ingresa el primer numero'
			Leer ingresoDePrimernumero
			Escribir 'Ingresa el segundo numero'
			Leer ingresoDeSegundonumero
			total <- ingresoDePrimernumero-ingresoDeSegundonumero
			Escribir 'El total de la resta es: ', total
		FinSi
		Si opcion==3 Entonces
			Escribir 'Ingresa el primer numero'
			Leer ingresoDePrimernumero
			Escribir 'Ingresa el segundo numero'
			Leer ingresoDeSegundonumero
			total <- ingresoDePrimernumero*ingresoDeSegundonumero
			Escribir 'El total de la multiplicacion es: ', total
		FinSi
		Si opcion==4 Entonces
			Escribir 'Ingresa el primer numero'
			Leer ingresoDePrimernumero
			Escribir 'Ingresa el segundo numero'
			Leer ingresoDeSegundonumero
			total <- ingresoDePrimernumero/ingresoDeSegundonumero
			Escribir 'El total de la division es: ', total
		FinSi
	Hasta Que opcion==5
FinAlgoritmo
