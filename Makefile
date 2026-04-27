CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = app

SRC = main.c palindrome.c tovar.c student.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
  $(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

main.o: main.c palindrome.h tovar.h student.h
  $(CC) $(CFLAGS) -c main.c

palindrome.o: palindrome.c palindrome.h
  $(CC) $(CFLAGS) -c palindrome.c

tovar.o: tovar.c tovar.h
  $(CC) $(CFLAGS) -c tovar.c

student.o: student.c student.h tovar.h
  $(CC) $(CFLAGS) -c student.c

clean:
  rm -f $(OBJ) $(TARGET)

rebuild: clean all
