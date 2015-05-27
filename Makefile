CC=g++
TARGET=main

all: *.cpp
	$(CC) *.cpp -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)

help:
	@echo Targets
	@echo : clean
	@echo : all 
	@echo : run
