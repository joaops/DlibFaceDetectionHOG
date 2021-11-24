# Dlib Face Detection HOG

Exemplo de um Projeto C++ configurado no [Visual Studio Code](https://code.visualstudio.com/) que usa a biblioteca [Dlib](http://dlib.net/) para Detecção Facial usando o algoritmo HOG.

Para esse projeto, foi utilizado uma imagem do [FEI Face Database](https://fei.edu.br/~cet/facedatabase.html).

Esse projeto pode ser compilado para os seguintes ambientes:

- Windows x64;
- Linux x64;
- Raspberry Pi ARM64.

Cada ambiente deve ser configurado para que se possa compilar e executar o projeto neles.

## Instalação

Clone o repositório do projeto com o comando:
```bash
git clone https://github.com/joaops/DlibFaceDetectionHOG.git DlibFaceDetectionHOG
```

Instale o [Visual Studio Code](https://code.visualstudio.com/) e a extensão [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

E prossiga para a configuração do ambiente em que você deseja compilar o projeto.

## Configurando o Ambiente Windows x64

Para configurar o ambiente Windows x64, é necessário que você instale e configure o MinGW 64-bit, compile a biblioteca Dlib e copie alguns de seus arquivos para dentro do projeto.

### [Configurando o MinGW 64-bit](docs/configurando-o-mingw-64-bit.md)

### [Compilando e Configurando o Dlib para Windows x64](docs/compilando-e-configurando-o-dlib-para-windows-x64.md)

### [Compilando e Executando o Projeto para Windows x64](docs/compilando-e-executando-o-projeto-para-windows-x64.md)

### [Debugando o Projeto para Windows x64](docs/debugando-o-projeto-para-windows-x64.md)

## Links Úteis

http://dlib.net/compile.html

https://linux.die.net/man/1/g++

https://fei.edu.br/~cet/facedatabase.html

https://code.visualstudio.com/docs/editor/variables-reference

https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html