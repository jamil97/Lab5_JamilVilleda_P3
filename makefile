mainRestaurante:	Ingredientes.o Plates.o Bodega.o mainRestaurante.o
	g++ Ingredientes.o Plates.o Bodega.o mainRestaurante.o -o mainRestaurante

mainRestaurante.o:	mainRestaurante.cpp Bodega.h Ingredientes.h Plates.h
	g++ -c mainRestaurante.cpp

Plates.o:	Plates.h Plates.cpp Ingredientes.h
	g++ -c Plates.cpp

Bodega.o:	Bodega.h Bodega.cpp Ingredientes.h
	g++ -c Bodega.cpp

Ingredientes.o:	Ingredientes.h Ingredientes.cpp 
	g++ -c Ingredientes.cpp