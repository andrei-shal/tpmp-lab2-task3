CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = app

SRC = src/main.c src/palindrome.c src/tovar.c src/student.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all
