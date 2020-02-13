# Algoritmos-CPP-2

## Anotações gerais

Reposição dias 29/02 e 14/03

## Modelo de memória de C++

Todos os programas tem uma parte de dados e uma parte de programa separadas na memória. Sempre que um programa é inciado, é reservada uma área na memória para as funções e variáveis globais na pilha, assim, quando a função retorna ou é finalizada essa área é liberada. Toda vez que se chama ma função aninhada o programa cresce na stack, ocorrendo um erro chamado "stack overflow" quando a área reservada para a pilha de execução é extrapolada.

Quando alocamos memória dinamicamente (por exemplo, utilizando malloc()), a área reservada para esses dados é chamada de Heap, sendo o ponteiro alocado na stack. Os dados alocados na Heap são sempre alocados (e esalocaods) explicitamente, enquanto que na Stack, esse processo é automático.