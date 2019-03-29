#Makefile for v0.3.0
TARGET = $(shell basename $(PWD))

#files
CSRCS	:=	$(wildcard *.cpp)
COBJS	:=	$(CSRCS:.cpp=.o)

#tools
CXX	:= g++
RM	:= rm -f

.Phony: all

all:	$(TARGET)

$(TARGET): 	$(COBJS)
		$(CXX) -o $@ $^

%.o:	%.cpp
		$(CXX) -c -o $@ $<

.Phony: run
run:	$(TARGET)
		./$(TARGET)

.Phony: clean
clean:
		$(RM) $(TARGET) $(COBJS)

