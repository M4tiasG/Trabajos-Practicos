Algoritmo corredores
	//Diseñar un algoritmo para calcular la velocidad
	//(en m/s) de los corredores de la carrera de 1500
	//metros. La entrada consistirá en parejas de
	//números (minutos, segundos) que dan el tiempo
	//del corredor; por cada corredor, el algoritmo debe
	//Ejemplo de entrada de datos: (3,53) (3,40) (3,46)
	//(3,52) (4,0) (0,0); el último par de datos se utilizará como fin de entrada de datos.
	Definir min,seg, tiempo_total, dist Como Entero
    Definir vel Como Real
	
    dist=1500
    
	Escribir "Ingrese el tiempo de cada corredor en minutos y segundos (ingrese 0,0 para finalizar):"
    Repetir
        Escribir "Minutos:"
        Leer min
        Escribir "Segundos:"
        Leer seg
        
        Si (min<>0) Y (seg<>0) Entonces
			tiempo_total=(min * 60)+seg
			vel=dist/tiempo_total
			
			Escribir "Tiempo: ", min, "min ", seg, "seg"
			Escribir "Velocidad media: ", vel, "m/s"
        FinSi	
    Hasta Que min = 0 Y seg = 0
FinAlgoritmo
