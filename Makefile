CC=g++
TARGET=main
OPTIONS=-Wall

all: *.cpp
	$(CC) *.cpp -o $(TARGET) $(OPTIONS)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)

help:
	@echo Targets
	@echo : clean
	@echo : all 
	@echo : run
