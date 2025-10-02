all: CheckersGame

CheckersGame: board.o coord.o piece.o player.o painter.o game_engine.o main.o
	g++ -o Checkers.exe board.o coord.o piece.o player.o painter.o game_engine.o main.o

board.o:
	g++ board.cpp -o board.o -c

coord.o:
	g++ coord.cpp -o coord.o -c

piece.o:
	g++ piece.cpp -o piece.o -c

player.o:
	g++ player.cpp -o player.o -c

painter.o:
	g++ painter.cpp -o painter.o -c

game_engine.o:
	g++ game_engine.cpp -o game_engine.o -c

main.o:
	g++ main.cpp -o main.o -c
	-0

clean:
	rm -f *.o *.exe