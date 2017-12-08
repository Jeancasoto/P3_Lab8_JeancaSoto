main:    main.cpp Minion.o Melee.o Flying.o Range.o Goomba.o ChainChop.o Boo.o Paratroopa.o HammerBro.o Magikoopa.o 
	g++ main.cpp Minion.o Melee.o Flying.o Range.o Goomba.o ChainChop.o Boo.o Paratroopa.o HammerBro.o Magikoopa.o -o main
main.o:	main.cpp Minion.h Melee.h Flying.h Range.h Goomba.h ChainChop.h Boo.h Paratroopa.h HammerBro.h Magikoopa.h 
	g++ -c main.cpp
Minion:	Minion.cpp Minion.h
	g++ -c Minion.cppMelee:	Melee.cpp Melee.h
	g++ -c Melee.cppFlying:	Flying.cpp Flying.h
	g++ -c Flying.cppRange:	Range.cpp Range.h
	g++ -c Range.cppGoomba:	Goomba.cpp Goomba.h
	g++ -c Goomba.cppChainChop:	ChainChop.cpp ChainChop.h
	g++ -c ChainChop.cppBoo:	Boo.cpp Boo.h
	g++ -c Boo.cppParatroopa:	Paratroopa.cpp Paratroopa.h
	g++ -c Paratroopa.cppHammerBro:	HammerBro.cpp HammerBro.h
	g++ -c HammerBro.cppMagikoopa:	Magikoopa.cpp Magikoopa.h
	g++ -c Magikoopa.cpp
clean:
	rm  *.o main 