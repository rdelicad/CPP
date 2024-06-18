#!/bin/bash

# Función para imprimir en colores
imprimir_color() {
  local mensaje=$1
  local color=$2
  case $color in
    "verde") echo -e "\e[32m$mensaje\e[0m" ;;
    "rojo") echo -e "\e[31m$mensaje\e[0m" ;;
    "azul") echo -e "\e[34m$mensaje\e[0m" ;;
  esac
}

# Función para ejecutar pruebas
ejecutar_prueba() {
  local titulo=$1
  shift
  local pruebas=("$@")
  imprimir_color "$titulo" "azul"
  for prueba in "${pruebas[@]}"; do
    local resultado=$(./RPN "$prueba" 2>&1)
    if [ $? -eq 0 ]; then
      imprimir_color "OK -> \"$prueba\"" "verde"
    else
      imprimir_color "KO -> \"$prueba\"" "rojo"
      echo "Error: $resultado"
    fi
  done
}

# Listado de pruebas
pruebas_numeros=("10 2 *" "15 3 +" "100 4 /")
pruebas_invalidas=("10 a +" "5 6 &" "12 13 / /")
pruebas_incorrectas=("10 +" "* 2 3" "3 /")
pruebas_correctas=("10 2 +" "5 5 -" "8 4 2 * +")

# Ejecutar las pruebas
ejecutar_prueba "Realizando test de números mayores o iguales a 10" "${pruebas_numeros[@]}"
ejecutar_prueba "Realizando test de caracteres inválidos" "${pruebas_invalidas[@]}"
ejecutar_prueba "Realizando test de expresiones incorrectas" "${pruebas_incorrectas[@]}"
ejecutar_prueba "Realizando test de expresiones correctas" "${pruebas_correctas[@]}"
