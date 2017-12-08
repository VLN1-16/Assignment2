all:
	g++  -c -Iinclude/exceptions -Iinclude/models src/models/Model.cpp -o obj/Debug/src/models/Model.o
	g++  -c -Iinclude/exceptions -Iinclude/UI -Iinclude/models -Iinclude/services -Iinclude/repositories src/UI/UI.cpp -o obj/Debug/src/UI/UI.o
	g++  -c -Iinclude/exceptions -Iinclude/repositories -Iinclude/models src/repositories/Repositories.cpp -o obj/Debug/src/repositories/Repositories.o
	g++  -c -Iinclude/exceptions -Iinclude/services -Iinclude/models -Iinclude/repositories src/services/Services.cpp -o obj/Debug/src/services/Services.o
	g++  -c -Iinclude/exceptions -Iinclude/services -Iinclude/models -Iinclude/repositories -Iinclude/UI main.cpp -o obj/Debug/main.o
	g++  -c -Iinclude/exceptions -Iinclude/models -Iinclude/repositories -Iinclude/UI src/exceptions/InvalidName.cpp -o obj/Debug/src/exceptions/InvalidName.o
	g++  -c -Iinclude/exceptions -Iinclude/models -Iinclude/repositories -Iinclude/UI src/exceptions/InvalidSSN.cpp -o obj/Debug/src/exceptions/InvalidSSN.o
	g++  -c -Iinclude/exceptions -Iinclude/models -Iinclude/repositories -Iinclude/UI src/exceptions/InvalidSalery.cpp -o obj/Debug/src/exceptions/InvalidSalery.o
	g++  -c -Iinclude/exceptions -Iinclude/models -Iinclude/repositories -Iinclude/UI src/exceptions/genericError.cpp -o obj/Debug/src/exceptions/genericError.o
	g++  -c -Iinclude/exceptions -Iinclude/services -Iinclude/models -Iinclude/repositories -Iinclude/UI main.cpp -o obj/Debug/main.o
	g++  obj/Debug/main.o obj/Debug/src/models/Model.o obj/Debug/src/repositories/Repositories.o obj/Debug/src/services/Services.o obj/Debug/src/UI/UI.o obj/Debug/src/exceptions/InvalidName.o obj/Debug/src/exceptions/InvalidSSN.o obj/Debug/src/exceptions/InvalidSalery.o obj/Debug/src/exceptions/genericError.o -o bin/Debug/a.out
