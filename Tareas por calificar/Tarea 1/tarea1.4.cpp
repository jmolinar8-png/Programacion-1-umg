Algoritmo Horarios
	Definir horario1 como entero; 
	
	Escribir "¿Que horas son? ";
	leer horario1;
	si horario1 >=0 y horario1 <=5 Entonces
		Escribir "Es de Madrugada"; 
	FinSi
	si horario1 >=6 y horario1 <=11 Entonces
		Escribir "Es de Mañana";
	FinSi
	si horario1 >=12 y horario1 <=13 Entonces
		Escribir "Es Mediodio";
	FinSi
	si horario1 >=14 y horario1 <=19 Entonces
		Escribir "Es de Tarde";
	FinSi
	si horario1 >=20 y horario1 <=23 Entonces
		Escribir "Es de Noche";
	FinSi
	si horario1 >=24 Entonces
		Escribir "Error"; 
		
	FinSi
	
	
FinAlgoritmo
