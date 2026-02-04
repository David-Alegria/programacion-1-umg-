Algoritmo menudecafeteria
	Definir opcion Como Entero
	Definir cantidad Como Entero
	Definir total Como Real
	Definir precio Como Real
	total <- 0
	Repetir
		Escribir '---Menu de Cafeteria--'
		Escribir '1. Café        Q10'
		Escribir '2. Té          Q8'
		Escribir '3. Sandwich    Q15'
		Escribir '4. Pastel      Q12'
		Escribir '5. Salir'
		Escribir 'Selecciona una opción'
		Leer opcion
		Si opcion=1 Entonces
			Escribir 'Cuantos cafés necesitas'
			Leer cantidad
			total <- total+cantidad*10
		FinSi
		Si opcion=2 Entonces
			Escribir 'Cuantos tés necesitas'
			Leer cantidad
			total <- total+cantidad*8
		FinSi
		Si opcion=3 Entonces
			Escribir 'Cuantos Sandwiches necesitas'
			Leer cantidad
			total <- total+cantidad*15
		FinSi
		Si opcion=4 Entonces
			Escribir 'Cuantos pasteles necesitas'
			Leer cantidad
			total <- total+cantidad*12
		FinSi
		Si opcion=5 Entonces
			Escribir 'Saliendo del menú...'
		FinSi
	Hasta Que opcion=5
	Escribir 'Total a pagar: Q', total
FinAlgoritmo
