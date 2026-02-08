Algoritmo calculoterreno
	Definir ancho, largo, preciometro, area, costototal, perimetro, alambre Como Real
	Escribir 'Ingrese el ancho del terreno'
	Leer ancho
	Escribir 'Ingrese el largo del terreno'
	Leer largo
	Escribir 'Ingrese el precio del metro cuadrado'
	Leer preciometro
	area <- ancho*largo
	costototal <- area*preciometro
	perimetro <- 2*(ancho+largo)
	alambre <- perimetro*3
	Escribir 'El precio del terreno es: Q ', costototal
	Escribir 'El total de alambre a utilizar es: ', alambre, 'Metros de alambre'
FinAlgoritmo
