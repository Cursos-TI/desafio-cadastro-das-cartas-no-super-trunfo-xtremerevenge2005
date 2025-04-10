
# Super Trunfo de Cidades

Este é um jogo desenvolvido em linguagem C que permite cadastrar informações de duas cidades e comparar suas cartas com base nos seguites atributos numéricos: população, área, PIB, número de pontos turísticos, densidade demográfica (menor valor vence), PIB per Capita e Super Poder, que é corresponde à soma de todos os atributos numéricos anteriores, substituindo a densidade demográfica pelo seu inverso matemático.

O programa avalia qual cidade vence para cada atributo escolhido, considerando que a que tiver o maior valor vence, exceto para a densidade demográfica, cujo menor valor é o vencedor. 

## Pré-requisitos

- **Compilador C:** É necessário ter o GCC (GNU Compiler Collection) ou outro compilador de C instalado no seu sistema.
- **Terminal ou Prompt de Comando:** Necessário para compilar e executar o código.
- **Codificação UTF-8:** Certifique-se de que seu terminal esteja configurado para exibir corretamente caracteres especiais.

## Instruções para Compilação e Execução

### Unix, Linux e macOS

1. Abra o terminal.
2. Navegue até o diretório onde está o arquivo `CartasSuperTrunfo.c`:
   ```bash
   cd caminho/para/diretorio
   ```
3. Compile o código:
   ```bash
   gcc CartasSuperTrunfo.c -o CartasSuperTrunfo
   ```
4. Execute o programa:
   ```bash
   ./CartasSuperTrunfo
   ```

### Windows

#### Usando MinGW (recomendado)

1. Abra o Prompt de Comando.
2. Navegue até o diretório onde está o arquivo `CartasSuperTrunfo.c`:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o código:
   ```
   gcc CartasSuperTrunfo.c -o CartasSuperTrunfo.exe
   ```
4. Execute o programa:
   ```
   CartasSuperTrunfo.exe
   ```

#### Usando Compilador do Visual Studio

1. Abra o Prompt de Comando do Desenvolvedor Visual Studio.
2. Navegue até o diretório:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o programa:
   ```
   cl CartasSuperTrunfo.c
   ```
4. Execute o programa:
   ```
   CartasSuperTrunfo.exe
   ```

## Utilização do Programa

- Após executar o programa, siga as instruções para cadastrar duas cidades.
- Os resultados serão mostrados na sequência. 
- Certifique-se de submeter dados válidos para o programa.

## Observações

- Caso caracteres especiais não sejam exibidos corretamente, ajuste seu terminal para UTF-8. O comando `chcp 65001` no terminal do Windows ativa esses caracteres temporariamente.
- Este projeto tem propósito didático.

---

Desenvolvido como parte do desafio de implementação do jogo Super Trunfo em linguagem C.
