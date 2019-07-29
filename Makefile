EXEC ?= push-fight

BUILD_DIR ?= ./build
SRC_DIR ?= ./src
LIB_DIR ?= /opt/local/lib

SFML := -L$(LIB_DIR) -lsfml-graphics -lsfml-network -lsfml-system -lsfml-audio -lsfml-window

CXX = g++
FLAGS := -std=c++11 -Wall $(SFML)

MKDIR_P ?= mkdir -p

SRCS := $(shell find $(SRC_DIR) -name *.cpp)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

# Build objects
$(BUILD_DIR)/$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(FLAGS)

# Build main executable
$(BUILD_DIR)/%.cpp.o: %.cpp
	$(MKDIR_P) $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) -r $(BUILD_DIR)

.PHONY: clean