main: compil/move_player.o compil/move_box.o compil/affichage.o compil/game_loop.o compil/level_end.o compil/player_position.o compil/move.o compil/doit.o compil/io.o compil/free_memory.o compil/main.o
	gcc -g -o main compil/move_player.o compil/move_box.o compil/affichage.o compil/game_loop.o compil/level_end.o compil/player_position.o compil/move.o compil/doit.o compil/io.o compil/free_memory.o compil/main.o -fsanitize=address -lm

compil/move_player.o: src/move_player.c src/player_position.h
	gcc -o compil/move_player.o -fcommon -c src/move_player.c -g -fsanitize=address -Wall

compil/move_box.o: src/move_box.c src/player_position.h
	gcc -o compil/move_box.o -fcommon -c src/move_box.c -g -fsanitize=address -Wall

compil/affichage.o: src/affichage.c src/doit.h src/io.h
	gcc -o compil/affichage.o -fcommon -c src/affichage.c -g -fsanitize=address -Wall

compil/game_loop.o: src/game_loop.c src/doit.h src/io.h src/move.h src/player_position.h src/affichage.h src/level_end.h
	gcc -o compil/game_loop.o -fcommon -c src/game_loop.c -g -fsanitize=address -Wall

compil/level_end.o: src/level_end.c
	gcc -o compil/level_end.o -fcommon -c src/level_end.c -g -fsanitize=address -Wall

compil/free_memory.o: src/free_memory.c
	gcc -o compil/free_memory.o -fcommon -c src/free_memory.c -g -fsanitize=address -Wall

compil/player_position.o: src/player_position.c src/affichage.h
	gcc -o compil/player_position.o -fcommon -c src/player_position.c -g -fsanitize=address -Wall

compil/move.o: src/move.c src/move_box.h src/move_player.h src/doit.h src/level_end.h
	gcc -o compil/move.o -fcommon -c src/move.c -g -fsanitize=address -Wall

compil/doit.o: src/doit.c
	gcc -o compil/doit.o -fcommon -c src/doit.c -g -fsanitize=address -Wall

compil/io.o: src/io.c
	gcc -o compil/io.o -fcommon -c src/io.c -g -fsanitize=address -Wall

compil/main.o: src/main.c src/move_player.h src/move_box.h src/affichage.h src/game_loop.h src/level_end.h src/player_position.h src/move.h src/doit.h src/io.h src/free_memory.h
	gcc -o compil/main.o -c src/main.c -g -fsanitize=address -Wall

run:
	make main
	clear
	./main