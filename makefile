exe:	ingredientes.o platos.o bodega.o main.o
	g++ ingredientes.o platos.o bodega.o main.o - exe

main.o:	mainRestaurante.cpp Bodega.h Ingredientes.h Platos.h
	g++ -c mainRestaurante.cpp

platos.o:	Platos.h Platos.cpp Ingredientes.h
	g++ -c Platos.cpp

bodega.o:	Bodega.h Bodega.cpp Ingredientes.h
	g++ -c Bodega.cpp

ingredientes.o:	Ingredientes.h Ingredientes.cpp 
	g++ -c Ingredientes.cpp