all: bin/test bin/objetTest bin/bulletTest

clean:
	rm obj/* bin/*

Bullet.o: src/Bullet.h src/Bullet.cpp src/Base.h src/Base.h
	g++ -Wall -c src/Bullet.cpp -o obj/Bullet.o -lSDL2 -lSDL2_image

Base.o: src/Base.h src/Base.cpp src/Global.h
	g++ -Wall -c src/Base.cpp -o obj/Base.o -lSDL2 -lSDL2_image

Global.o: src/Global.h src/Global.cpp
	g++ -Wall -c src/Global.cpp -o obj/Global.o -lSDL2 -lSDL2_image
	
Player.o: src/Player.h src/Player.cpp src/Global.h src/Bullet.h
	g++ -Wall -c src/Player.cpp -o obj/Player.o -lSDL2 -lSDL2_image
	
Chicken.o: src/Chicken.h src/Chicken.cpp src/Explode.h src/Base.h src/Global.h src/Bullet.h
	g++ -Wall -c src/Chicken.cpp -o obj/Chicken.o -lSDL2 -lSDL2_image
	
Gift.o: src/Gift.h src/Gift.cpp src/Global.h src/Base.h
	g++ -Wall -c src/Gift.cpp -o obj/Gift.o -lSDL2 -lSDL2_image	

Boss.o: src/Boss.h src/Boss.cpp src/Global.h src/Base.h src/Bullet.h src/Explode.h
	g++ -Wall -c src/Boss.cpp -o obj/Boss.o -lSDL2 -lSDL2_image	

Text.o: src/Text.h src/Text.cpp src/Global.h src/Base.h
	g++ -Wall -c src/Text.cpp -o obj/Text.o -lSDL2 -lSDL2_image	
	
Explode.o: src/Explode.h src/Explode.cpp src/Global.h src/Base.h
	g++ -Wall -c src/Explode.cpp -o obj/Explode.o -lSDL2 -lSDL2_image
		
Control.o: src/Control.h src/Control.cpp src/Global.h src/Base.h src/Bullet.h src/Boss.h src/Chicken.h src/Explode.h src/Gift.h src/Text.h src/Player.h
	g++ -Wall -c src/Control.cpp -o obj/Control.o -lSDL2 -lSDL2_image
			
Main.o: src/Main.h src/Main.cpp src/Global.h src/Base.h
	g++ -Wall -c src/Main.cpp -o obj/Main.o -lSDL2 -lSDL2_image
