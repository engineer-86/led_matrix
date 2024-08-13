# Compiler and flags
CC = gcc
CFLAGS = -Wall -Iexternal/rpi_ws281x
LDFLAGS = -Lexternal/rpi_ws281x -lws2811 -lm

# src and object
SRC = src/main.c src/led_matrix.c src/picture_modes.c
OBJ = $(SRC:.c=.o)
TARGET = led_matrix

# build rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

submodule:
	git submodule update --init --recursive

update_submodule:
	cd external/rpi_ws281x && git pull origin main

fire: clean all
	sudo ./$(TARGET)