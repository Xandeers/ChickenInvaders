all: bin/test bin/objetTest bin/bulletTest

clean:
	rm obj/* bin/*

bin/test: obj/mainTest.o obj/Function_Global.o
	g++ obj/mainTest.o obj/Function_Global.o -o bin/test -lSDL2 -lSDL2_image

bin/objetTest: obj/objetTest.o obj/Base_Objet.o obj/Function_Global.o
	g++ obj/objetTest.o obj/Base_Objet.o obj/Function_Global.o -o bin/objetTest -lSDL2 -lSDL2_image

bin/bulletTest: obj/bulletTest.o obj/Base_Objet.o obj/Bullet.o obj/Function_Global.o
	g++ obj/bulletTest.o obj/Base_Objet.o obj/Bullet.o obj/Function_Global.o -o bin/bulletTest -lSDL2 -lSDL2_image

obj/objetTest.o: src/objetTest.cpp src/Base_Objet.h
	g++ -Wall -c src/objetTest.cpp -g -o obj/objetTest.o -lSDL2 -lSDL2_image

obj/bulletTest.o: src/bulletTest.cpp src/Bullet.h
	g++ -Wall -c src/bulletTest.cpp -g -o obj/bulletTest.o -lSDL2 -lSDL2_image

obj/mainTest.o: src/mainTest.cpp src/Function_Global.h
	g++ -Wall -c src/mainTest.cpp -o obj/mainTest.o -lSDL2 -lSDL2_image

obj/Bullet.o: src/Bullet.h src/Bullet.cpp src/Base_Objet.h
	g++ -Wall -c src/Bullet.cpp -o obj/Bullet.o -lSDL2 -lSDL2_image

obj/Base_Objet.o: src/Base_Objet.h src/Base_Objet.cpp src/Function_Global.h
	g++ -Wall -c src/Base_Objet.cpp -o obj/Base_Objet.o -lSDL2 -lSDL2_image

obj/Function_Global.o: src/Function_Global.h src/Function_Global.cpp
	g++ -Wall -c src/Function_Global.cpp -o obj/Function_Global.o -lSDL2 -lSDL2_image
