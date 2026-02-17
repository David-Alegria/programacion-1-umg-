Algoritmo MaxMin
	//Se definieron nuevas variables con la secuencia de camel case
	Definir numeroAingresar Como Entero
	Definir numeroMaximo Como Real
	Definir numeroMinimo Como Real
	Definir valorDelNumero Como Real
	Definir i Como Entero
	Escribir 'Cuntos numeros desea agregar: '
	Leer numeroAingresar
	i = 1
	Mientras i<=numeroAingresar Hacer
		Escribir 'ingrese un valor: '
		Leer valorDelNumero
		Si i=1 Entonces
			numeroMinimo <- valorDelNumero
			numeroMaximo <- valorDelNumero
		SiNo
			Si valorDelNumero<numeroMinimo Entonces
				numeroMinimo <- valorDelNumero
			FinSi
			Si valorDelNumero>numeroMaximo Entonces
				numeroMaximo <- valorDelNumero
			FinSi
		FinSi
		i <- i+1
	FinMientras
	Escribir 'El valor maximo es : ', numeroMaximo
	Escribir 'El valor minimo es : ', numeroMinimo
FinAlgoritmo
