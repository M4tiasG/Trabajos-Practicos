// Cargue dos matrices A[3,3] y B[3,3] con valores enteros ingresados	por el usuario.
//Calcule una tercera matriz C[3,3], donde cada elemento sea la suma de los elementos correspondientes de A y B.
//Muestre por pantalla las tres matrices: A, B y C, con formato de tabla.

Algoritmo VectoresSuma
	Definir i,j, suma Como Entero
	Dimension A(3,3), B(3,3), C(3,3)
	
	Escribir "Ingrese los numeros del Vector A"
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Escribir "Fila ",i
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Leer A(i,j) 
		FinPara
	FinPara
	Escribir " "
	
	Escribir "Ingrese los numeros del Vector B"
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Escribir "Fila ",i
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Leer B(i,j) 
		FinPara
	FinPara
	
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Para j=1 Hasta 3 Con Paso 1 Hacer
			suma= A(i,j)+B(i,j)
			C(i,j)=suma
		FinPara
	FinPara
	
	Escribir "Vector A"
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Escribir Sin Saltar A(i,j) " " 
		FinPara
		Escribir " "
	FinPara
	
	Escribir " "
	Escribir "Vector B"
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Escribir Sin Saltar B(i,j) " " 
		FinPara
		Escribir " "
	FinPara
	
	Escribir " "
	Escribir "Vector C"
	Para i=1 Hasta 3 Con Paso 1 Hacer
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Escribir Sin Saltar C(i,j) " " 
		FinPara
		Escribir " "
	FinPara
FinAlgoritmo
