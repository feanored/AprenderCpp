cmake_minimum_required(VERSION 3.12)
project(Calculadora)

# Adicione aqui os arquivos-fonte do seu projeto
set(SOURCES 
Calculadora.cpp 
AssemblyInfo.cpp
stdafx.cpp
stdafx.h
FormCalc.h
resource.h)

# Cria o executável do projeto
add_executable(${PROJECT_NAME} ${SOURCES})