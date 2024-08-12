CC = gcc
CFLAGS = -Wall -I$(HOME)/rpi_ws281x
LDFLAGS = -L$(HOME)/rpi_ws281x -lws2811 -lm

SRC = src/main.c src/led_matrix.c
OBJ = $(SRC:.c=.o)
TARGET = led_matrix

all: $(TARGET)

$(TARGET): $(OBJ)
        $(CC) -o $(TARGET) $(OBJ) $(LDFLAGS)

%.o: %.c
        $(CC) $(CFLAGS) -c $< -o $@

clean:
        rm -f $(OBJ) $(TARGET)