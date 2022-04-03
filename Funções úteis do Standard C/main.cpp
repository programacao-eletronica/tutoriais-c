/*******************************************************************************************************/
/**
*   @file         main.cpp
*   @brief        Arquivo principal.
*   @author       Wenderson Oliveira
*   @details
*   \n <b>Ferramentas:</b> 
*   - Visual Studio Community 2022
*
*   \n <b>Dependências:</b>
*   - Nenhuma.
*
*   \n <b> Observações:</b>
*   - Nenhuma.
*   @{
********************************************************************************************************/

/********************************************************************************************************
*   INCLUDES
********************************************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>

/********************************************************************************************************
*   FUNÇÕES
********************************************************************************************************/

/*******************************************************************************************************/
/** @brief      <b>Descrição:</b> Ponto de entrada do programa.
*   @param      Nenhum.
*   @retval     Nenhum.
********************************************************************************************************/
int main()
{
    // Função printf: saída de dados formatados no console
    int var = 2;

    printf("My text :D\n");
    printf("My text in line %d", var);

    // Função snprintf: saída de dados formatados em um buffer (memória)
    int inputData = 56;
    char dataBuffer[100];

    snprintf(dataBuffer, sizeof(dataBuffer), "Voltage level is: %d Volts", inputData);

    // Função memcpy: cópia de dados de um endereço para outro
    unsigned char dataSource[] = { 1,2,3,4,5,6 };
    unsigned char dataDestination[] = { 0,0,0,0,0,0 };

    memcpy(dataDestination, dataSource, 6);
    
    // Função memset: preenchimento de memória
    memset(dataDestination, 1, sizeof(dataDestination));

    (void)getchar();
}

/** @} FILE */