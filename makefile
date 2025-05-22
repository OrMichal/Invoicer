# Install
BIN = Invoicer

# Flags
CFLAGS += -g -std=c99 -Wall -Wextra -pedantic

SRCS = nuklear_impl.c \
	main.c \
	core/sys/String/String.c \
	core/Event/event.c \
	UI/invoicer-form/invoice_form.c \
	UI/invoice-volume/invoice_volume.c \
	services/FileReader/FileReader.c \
	services/data-service/data-service.c \
	services/Invoice-service/invoice-service.c 

OBJS = $(SRCS:.c=.o)

ifeq ($(OS),Windows_NT)
BIN := $(BIN).exe
LIBS = -lglfw -lGLEW -lGL -lGLU -lm
else
	UNAME_S := $(shell uname -s)
	GLFW3 := $(shell pkg-config --libs glfw3)
	ifeq ($(UNAME_S),Darwin)
		LIBS := $(GLFW3) -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -lm -lGLEW -L/usr/local/lib
	else
		LIBS = $(GLFW3) -lGL -lm -lGLU -lGLEW
	endif
endif

bin/$(BIN): $(SRCS)
	@mkdir -p bin
	$(CC) $(SRCS) $(CFLAGS) -o bin/$(BIN) $(LIBS)

.PHONY: clean
clean:
	rm -f bin/$(BIN) *.o
