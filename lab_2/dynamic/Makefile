# Makefile for lab2
all: clean lab2-dynamic
	

lab2-dynamic: DataBaseProgram.o libDatabase.so #Лінкер перетворює об'єктні файли у виконуваний файл
	g++ -L./ -Wall -o lab2-dynamic DataBaseProgram.o -lDatabase -Wl,-rpath,.
#g++ -lm -o lab2-dynamic DataBaseProgram.o -L -l: libDatabase.so -Wl,--rpath -Wl,.

DataBaseProgram.o: DataBaseProgram.cpp #Створює .o файл з вихідного коду програми
	g++ -c -Wall DataBaseProgram.cpp

Database.o: Database.cpp #make .o file from existing code
	g++ -c -fPIC Database.cpp

TaxiStation.o: TaxiStation.cpp
	g++ -c -fPIC TaxiStation.cpp

libDatabase.so: Database.o TaxiStation.o
	g++ -shared -o libDatabase.so Database.o TaxiStation.o 

do: #give rights and start application
	chmod a+x lab2-dynamic
	./lab2-dynamic

clean: #remove unnecessary files
	rm -rf *.o *.so lab2-dynamic
