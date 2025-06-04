Algoritmo RadioCirculo
	// Calcular y visualizar la longitud de la circunferencia y el área de un círculo de radio dado.
	Definir r,diametro Como Entero
	Definir long, area Como Real
	
	Escribir "Ingrese el radio de si circulo en centimetros"
	Leer r
	
	diametro=r*2
	long= 3.14 * diametro
	area= 3.14 * (r^2)
	
	Escribir "El diametro del circulo es: ",diametro "cm"
	Escribir "Su longitud de circunferencia es de: ",long "cm"
	Escribir "El area del circulo es: ",area "cm²"
FinAlgoritmo
