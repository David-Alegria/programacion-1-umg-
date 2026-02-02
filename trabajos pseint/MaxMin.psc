Algoritmo MaxMin
	definir N Como Entero
	definir max como real 
	definir min como real 
	definir valor como real
	definir i como entero 
	
	escribir "Cuntos numeros desea agregar: "
	leer N
	i = 1
	mientras i <= N hacer
		escribir "ingrese un valor: "
		Leer valor
		
		si i = 1 Entonces
			min <-valor
			max <-valor
		Sino
			si valor < min entonces
				min = valor
			FinSi
			
			si valor > max Entonces
				max <-valor
			FinSi
		FinSi
		i <- i +1;
	FinMientras
	
	escribir "El valor maximo es : ", max
	escribir "El valor minimo es : ", min
FinAlgoritmo
