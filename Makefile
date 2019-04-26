compile:
	g++ -Wall Driver.cpp Stack341.h Stack341.cpp Queue341.cpp Queue341.h Node341.h Node341.cpp List341.h List341.cpp -o OutPut
compileTest:
	g++ -Wall Testfile.cpp Stack341.h Stack341.cpp Queue341.cpp Queue341.h Node341.h Node341.cpp List341.h List341.cpp -o OutPut
run:
	./OutPut
val:
	valgrind ./OutPut
clean:
	rm -rf *o compile