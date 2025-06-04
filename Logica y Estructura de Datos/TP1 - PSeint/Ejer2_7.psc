Algoritmo SumaTresNumeros
	// Diseñar un algoritmo que lea tres números y descubra si uno de ellos es la suma de los otros dos.
	Definir n1,n2,n3 Como Entero
	Escribir "Ingrese 3 numeros"
	Leer n1
	Leer n2
	Leer n3
	
	si n1=(n2+n3) Entonces
		Escribir "El Numero 1 (",n1 ") es la suma de los valores ",n2 " y ",n3 " ingresados"
	FinSi
	
	si n2=(n1+n3) Entonces
		Escribir "El Numero 2 (",n2 ") es la suma de los valores ",n1 " y ",n3 " ingresados"
	FinSi
	
	si n3=(n1+n2) Entonces
		Escribir "El Numero 3 (",n3 ") es la suma de los valores ",n1 " y ",n2 " ingresados"
	FinSi
FinAlgoritmo
