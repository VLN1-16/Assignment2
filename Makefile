all:
	clang++  -c -Iinclude/models src/models/Model.cpp -o obj/Debug/src/models/Model.o
	clang++  -c  -Iinclude/UI -Iinclude/models -Iinclude/services -Iinclude/repositories src/UI/UI.cpp -o obj/Debug/src/UI/UI.o
	clang++  -c -Iinclude/repositories -Iinclude/models src/repositories/Repositories.cpp -o obj/Debug/src/repositories/Repositories.o
	clang++  -c -Iinclude/services -Iinclude/models -Iinclude/repositories src/services/Services.cpp -o obj/Debug/src/services/Services.o
	clang++  -c -Iinclude/services -Iinclude/models -Iinclude/repositories -Iinclude/UI main.cpp -o obj/Debug/main.o
	clang++  obj/Debug/main.o obj/Debug/src/models/Model.o obj/Debug/src/repositories/Repositories.o obj/Debug/src/services/Services.o obj/Debug/src/UI/UI.o -o a.out
