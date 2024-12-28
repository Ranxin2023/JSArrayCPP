# Compiler
CXX = g++
# Compiler Flags
CXXFLAGS = -Wall -Wextra -std=c++17
# Target Executable
TARGET = JSArrayApp
# Source and Object Files
SRC = JSArray.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

# Build the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the build
clean:
	del /f $(TARGET).exe $(OBJ)
