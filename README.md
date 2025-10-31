# Super Trunfo em C - Comparação de Cartas 🃏

Projeto desenvolvido em linguagem C como parte dos desafios **“Comparando Cartas do Super Trunfo”** (níveis novato e aventureiro).  
O programa cadastra duas cartas com informações sobre cidades, calcula automaticamente **densidade populacional** e **PIB per capita**, e permite **comparar as cartas interativamente** com base em um atributo escolhido pelo usuário.

### ⚙️ Funcionalidades

- Cadastro de duas cartas com dados completos:
  - Nome do país  
  - População  
  - Área (km²)  
  - PIB (em bilhões)  
  - Número de pontos turísticos  
- Cálculo automático de:
  - **Densidade populacional** (habitantes por km²)  
  - **PIB per capita** (PIB dividido pela população)  
- Comparação simples (modo **Aventureiro**):
  - Usuário escolhe **um atributo** (ex: PIB, área, densidade etc.)  
  - O programa indica qual carta vence ou se houve empate  
- Modo avançado (**Nível Mestre**):
  - Permite escolher **dois atributos diferentes** para comparação  
  - Calcula uma **pontuação combinada** das duas cartas  
  - Mostra o resultado detalhado com o vencedor final

### 🧩 Tecnologias
- Linguagem C  
- Compilador GCC
- **Ambiente de desenvolvimento:** Visual Studio Code

## Como compilar e executar (Windows)

No terminal do VS Code ou Prompt de Comando:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo

