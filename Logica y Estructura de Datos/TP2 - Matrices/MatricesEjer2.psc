// 1.Tenga un vector Estudiantes[5] que almacene los nombres de 5 estudiantes.
// 2.Tenga una matriz Notas[5,3] que almacene las notas de 3 trimestres para cada estudiante.
// 3.Solicite al usuario cargar los nombres de los estudiantes.
// 4.Luego, para cada estudiante, solicite ingresar sus 3 notas trimestrales.
// 5.Calcule el promedio de notas por estudiante.
// 6.Finalmente, muestre el nombre del estudiante y su promedio.

Algoritmo promedioAlumnos
	Definir nota,i,j,acu Como Entero
	Definir promedio Como Real
	Definir nombre Como Caracter
	Dimension estudiantes(5), notas(5,3)
	acu=0
	nota=0
	promedio=0
	
	Escribir "Ingrese el nombre de los 5 estudiantes"
	Para i=1 Hasta 5 Con Paso 1 Hacer
		Leer nombre
		estudiantes(i)=nombre
	FinPara
	
	Para i=1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese las notas de ", estudiantes(i)
		Para j=1 Hasta 3 Con Paso 1 Hacer
			Leer notas(i,j)
		FinPara
	FinPara
	
	Escribir "Promedio de los estudiantes: "
	Para i=1 Hasta 5 Con Paso 1 Hacer
		acu=0
		Para j=1 Hasta 3 Con Paso 1 Hacer
			acu=notas(i,j)+acu
		FinPara
		promedio=acu/3
		Escribir "Nota final de ",estudiantes(i) ": ", promedio
	FinPara
FinAlgoritmo
