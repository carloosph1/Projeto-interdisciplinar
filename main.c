#include <stdio.h>
#include "cadastro.h"
#include "calculo.h"
#include "database.h"

int main() {
    printf("=== Sistema de Gestão de Consumo de Energia ===\n");

    carregarDados();  // Carregar dados do arquivo
    menuCadastro();   // Exibir menu de cadastro
    calcularConsumo(); // Exemplo de cálculo de consumo

    salvarDados();    // Salvar alterações antes de sair
    return 0;
}
