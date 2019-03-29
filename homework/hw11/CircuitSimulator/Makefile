# Makefile for v0.9.0
TARGET = $(shell basename $(PWD))

# files
SSRCS	:= 	$(wildcard src/*.cpp)
SOBJS	:=	$(SSRCS:.cpp=.o)
LSRCS	:=	$(wildcard lib/*.cpp)
LOBJS	:=	$(LSRCS:.cpp=.o)

# tools
CXX		:= g++
CFLAGS	:= -I include
RM		:= rm -f

.PHONY: all
all:	$(TARGET)

$(TARGET):	$(SOBJS) $(LOBJS)
	$(CXX) -o $@ $^

%.o:	%.cpp
	$(CXX) -c $(CFLAGS) -o $@ $<

.PHONY: run
run:	$(TARGET)
	./$(TARGET) cycsi.hdl

.PHONY: clean
clean:
	$(RM) $(TARGET) $(SOBJS) $(LOBJS)