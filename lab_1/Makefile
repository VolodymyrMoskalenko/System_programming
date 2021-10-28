all: lab1
	

lab1: main.o TaxiStation.o # linker transforms object files into executable file
	g++ main.o TaxiStation.o -o lab1

main.o: main.cpp # make objiect files
	g++ -c -Wall main.cpp
	
TaxiStation.o: TaxiStation.cpp
	g++ -c -Wall TaxiStation.cpp

do: # give rights to the app and launch
	chmod a+x lab1
	./lab1

clean: # delete unnecessary files
	rm -rf *.o lab1
