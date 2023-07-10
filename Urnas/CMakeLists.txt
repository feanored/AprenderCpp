cmake_minimum_required(VERSION 3.12)
project(Urnas)

# Adicione aqui os arquivos-fonte do seu projeto
set(SOURCES 
Urnas.cpp 
Candidatos.hpp 
Candidatos.cpp)

# Cria o executável do projeto
add_executable(${PROJECT_NAME} ${SOURCES})