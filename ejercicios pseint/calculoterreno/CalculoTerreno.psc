Algoritmo calculoterreno
	Definir medicionDeAncho, medicionDeLargo, precioDelMetro, calculoDelArea, costoTotal, calculoDelPerimetro, calculoDelAlambre Como Real
	Escribir 'Ingrese el ancho del terreno'
	Leer medicionDeAncho
	Escribir 'Ingrese el largo del terreno'
	Leer medicionDeLargo
	Escribir 'Ingrese el precio del metro cuadrado'
	Leer precioDelMetro
	calculoDelArea <- medicionDeAncho*medicionDeLargo
	costototal <- area*preciometro
	calculoDelPerimetro <- 2*(medicionDeAncho+medicionDeLargo)
	calculoDelAlambre <- calculoDelPerimetro*3
	Escribir 'El precio del terreno es: Q ', costototal
	Escribir 'El total de alambre a utilizar es: ', alambre, 'Metros de alambre'
FinAlgoritmo
