Algoritmo Aporte
	Definir edad Como Entero
	Definir salario, aporte1, aporte2, aporte3 Como Real
	
	Escribir "Ingresa tu edad: "; 
	leer edad
	Escribir "Ingresa tu Salario: "; 
	leer salario 
	
	
	si salario< 10000 Entonces
		aporte1= salario * 0.005
		si edad <= 30 Entonces
			aporte2 = aporte1 * 0.201
			aporte3 = aporte1 + aporte2
			Escribir "Tu aporte es de: ", aporte3, " dolares";
		sino 
			Escribir "Tu aporte es de: ", aporte1," dolares";
		FinSi
		
	FinSi
	
	si salario>10000 y salario<= 19999 Entonces
		aporte1= salario * 0.01
		si edad <= 30 Entonces
			aporte2 = aporte1 * 0.202
			aporte3 = aporte1 + aporte2
			Escribir "Tu aporte es de: ", aporte3, " dolares";
		sino 
			Escribir "Tu aporte es de: ", aporte1," dolares";
		FinSi
		
	FinSi
	
	si salario>20000 y salario<= 29999 Entonces
		aporte1= salario * 0.02
		si edad <= 30 Entonces
			aporte2 = aporte1 * 0.204
			aporte3 = aporte1 + aporte2
			Escribir "Tu aporte es de: ", aporte3, " dolares";
		sino 
			Escribir "Tu aporte es de: ", aporte1," dolares";
		FinSi
		
	FinSi
	
	si salario>30000  Entonces
		aporte1= salario * 0.025
		si edad <= 30 Entonces
			aporte2 = aporte1 * 0.205
			aporte3 = aporte1 + aporte2
			Escribir "Tu aporte es de: ", aporte3, " dolares";
		sino 
			Escribir "Tu aporte es de: ", aporte1," dolares";
		FinSi
		
	FinSi
	
FinAlgoritmo
