Algoritmo calculohora
	Definir hora Como Entero
	Escribir 'Ingrese una hora entre (0y23): '
	Leer hora
	Si hora<0 O hora>23 Entonces
		Escribir 'ha existido un erro al ingresar hora'
	SiNo
		Si hora>=0 Y hora<=5 Entonces
			Escribir 'Madrugada'
		SiNo
			Si hora>=6 Y hora<=11 Entonces
				Escribir 'Mañana'
			SiNo
				Si hora>=12 Y hora<=13 Entonces
					Escribir 'Mediodía'
				SiNo
					Si hora>=14 Y hora<=19 Entonces
						Escribir 'Tarde'
					SiNo
						Escribir 'Noche'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
