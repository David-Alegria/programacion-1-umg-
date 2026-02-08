Algoritmo escalasalarial
	Definir edad Como Real
	Definir sueldo Como Real
	Definir aporte Como Real
	Definir adicional Como Real
	Escribir 'Ingrese la edad de la persona: '
	Leer edad
	Escribir 'Ingrese el sueldo anual: '
	Leer sueldo
	Si sueldo<10000 Entonces
		aporte <- sueldo*0.005
	SiNo
		Si sueldo>=10000 Y sueldo<=29999 Entonces
			aporte <- sueldo*0.02
		SiNo
			aporte <- sueldo*0.025
		FinSi
	FinSi
	Si edad<=30 Entonces
		adicional <- aporte*0.20
		aporte <- aporte+adicional
	FinSi
	Escribir 'El aporte a descontar es: $', aporte
FinAlgoritmo
