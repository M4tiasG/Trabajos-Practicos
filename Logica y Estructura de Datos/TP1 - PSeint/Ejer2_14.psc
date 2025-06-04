Algoritmo cantidad_Letras
	//Escribir un algoritmo que cuente el número de ocurrencias de cada letra en una palabra leídacomo entrada.
	//Por ejemplo, ''Mortimer'' contiene dos ''m'', una ''o'', dos ''r'', una ''i'', una ''t'' y una ''e''.
	
	Definir pal, letra, letraRep Como Caracter
	Definir cant, long_pal,i Como Entero
	Definir encontrado Como Logico
	
	Escribir "Ingrese una palabra"
	Leer pal
	
	long_pal=Longitud(pal)
	Dimension letras[long_pal]
	
	Para i <- 1 Hasta long_pal Con Paso 1 Hacer
        letra=Subcadena(pal,i,i)
		letras[i]=letra
    FinPara
	
	Para i <- 1 Hasta long_pal Con Paso 1 Hacer
		ContRepetidas=0
		Para j <- 1 Hasta long_pal Con Paso 1 Hacer
			si (letras[i]==letras[j]) Entonces
				contRepetidas=ContRepetidas+1
			FinSi
		FinPara
		Escribir "la palabra tiene ", ContRepetidas " Letras ", letras[i]
    FinPara
FinAlgoritmo
