cmake_minimum_required(VERSION 3.1.0)

project(StockClient)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

# Populate a CMake variable with the sources
set(sources
	Stock.cpp
	Tushare.cpp
	CandleWidget.cpp
	MainWidget.cpp
	MainWindow.cpp
	main.cpp
	)
# Tell CMake to create the helloworld executable
add_executable(${PROJECT_NAME} ${sources})
# Use the Widgets module from Qt 5
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
