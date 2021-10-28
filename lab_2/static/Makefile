# Makefile for lab2
all: lab2-static
	

lab2-static: Database.o DataBaseProgram.o TaxiStation.o #Лінкер перетворює об'єктні файли у виконуваний файл
	g++ Database.o DataBaseProgram.o TaxiStation.o -o lab2-static

Database.o: Database.cpp #Створює .o файл з вихідного коду програми
	g++ -c -Wall Database.cpp

DataBaseProgram.o: DataBaseProgram.cpp #Створює .o файл з вихідного коду програми
	g++ -c -Wall DataBaseProgram.cpp
	
TaxiStation.o: TaxiStation.cpp
	g++ -c -Wall TaxiStation.cpp

do: #Надаємо необхідні права програмі та запускаємо її
	chmod a+x lab2-static
	./lab2-static

clean: #Видаляємо непотрібні файли
	rm -rf *.o lab2-static
