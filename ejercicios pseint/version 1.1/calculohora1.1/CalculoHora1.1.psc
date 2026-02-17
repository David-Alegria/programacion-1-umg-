Algoritmo calculohora
	// El nombre de la variable lo cambie a la secuencia camel case
	Definir horaAingresar Como Entero
	Escribir 'Ingrese una hora entre (0y23): '
	Leer horaAingresar
	Si horaAingresar<0 O horaAingresar>23 Entonces
		Escribir 'ha existido un erro al ingresar hora'
	SiNo
		Si horaAingresar>=0 Y horaAingresar<=5 Entonces
			Escribir 'Madrugada'
		SiNo
			Si horaAingresar>=6 Y horaAingresar<=11 Entonces
				Escribir 'Mañana'
			SiNo
				Si horaAingresar>=12 Y horaAingresar<=13 Entonces
					Escribir 'Mediodía'
				SiNo
					Si horaAingresar>=14 Y horaAingresar<=19 Entonces
						Escribir 'Tarde'
					SiNo
						Escribir 'Noche'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
