cmake_minimum_required(VERSION 3.10)
project("L1-Segments2D-C")

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# Liste des fichiers sources
set(SOURCES
    src/main.c
    src/Point2.c
    src/Segment2.c
    src/Vector2.c
)

# Création de l'exécutable
add_executable(Exercice ${SOURCES})