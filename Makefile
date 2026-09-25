game: Horse.o Race.o hrMain.o
	g++ -g Horse.o Race.o hrMain.o -o game

hrMain.o: Horse.h Race.h hrMain.cpp
	g++ -c -g hrMain.cpp

Horse.o: Horse.h Horse.cpp
	g++ -c -g Horse.cpp

Race.o: Horse.h Race.h Race.cpp
	g++ -c -g Race.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game