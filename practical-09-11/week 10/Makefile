all: main test

main: myMain
	./myMain

myMain: main.cpp Task.o HighPriority.o MediumPriority.o LowPriority.o User.o RewardsMaster.o
	g++ -std=c++11 main.cpp Task.o HighPriority.o MediumPriority.o LowPriority.o User.o RewardsMaster.o -o myMain

Task.o: Task.cpp Task.h
	g++ -c -std=c++11 Task.cpp -o Task.o

HighPriority.o: HighPriority.cpp HighPriority.h 
	g++ -c -std=c++11 HighPriority.cpp -o HighPriority.o

MediumPriority.o: MediumPriority.cpp MediumPriority.h
	g++ -c -std=c++11 MediumPriority.cpp -o MediumPriority.o

LowPriority.o: LowPriority.cpp LowPriority.h 
	g++ -c -std=c++11 LowPriority.cpp -o LowPriority.o

User.o: User.cpp User.h 
	g++ -c -std=c++11 User.cpp -o User.o

RewardsMaster.o: RewardsMaster.cpp RewardsMaster.h 
	g++ -c -std=c++11 RewardsMaster.cpp -o RewardsMaster.o

test: HighPriorityTester MediumPriorityTester LowPriorityTester RewardsMasterTester UserTester
	./HighPriorityTester
	./MediumPriorityTester
	./LowPriorityTester
	./RewardsMasterTester
	./UserTester

HighPriorityTester: HighPriorityTester.cpp Task.o HighPriority.o RewardsMaster.o
	g++ -std=c++11 HighPriorityTester.cpp Task.o RewardsMaster.o HighPriority.o -o HighPriorityTester

MediumPriorityTester: MediumPriorityTester.cpp Task.o MediumPriority.o RewardsMaster.o
	g++ -std=c++11 MediumPriorityTester.cpp Task.o RewardsMaster.o MediumPriority.o -o MediumPriorityTester

LowPriorityTester: LowPriorityTester.cpp Task.o LowPriority.o RewardsMaster.o
	g++ -std=c++11 LowPriorityTester.cpp Task.o RewardsMaster.o LowPriority.o -o LowPriorityTester

RewardsMasterTester: RewardsMasterTester.cpp RewardsMaster.o
	g++ -std=c++11 RewardsMasterTester.cpp RewardsMaster.o -o RewardsMasterTester

UserTester: UserTester.cpp Task.o User.o HighPriority.o MediumPriority.o LowPriority.o RewardsMaster.o
	g++ -std=c++11 UserTester.cpp Task.o User.o HighPriority.o MediumPriority.o LowPriority.o RewardsMaster.o -o UserTester

inoutTests: myMain
	./myMain< input01.txt | diff - output01.txt
	./myMain< input02.txt | diff - output02.txt

clean:
	rm -f myMain *.o
