### Compilando e Executando o Projeto para Windows x64

Para compilar o Projeto, é necessário manter o aquivo `main.cpp` selecionado no Visual Studio Code.

> O VS Code tenta compilar o arquivo ativo por meio da variável de referência `${file}`, você pode encontrar outras variáveis neste [link](https://code.visualstudio.com/docs/editor/variables-reference).

Selecione a Configuração de C/C++ que você deseja compilar.

![configuration-c-c++](./images/configuration-c-c++.png)

Então aperte as teclas `Ctrl + Shift + B` para abrir o menu de compilação, então escolha qual `task` você deseja executar.

![building](./images/building.png)

Caso tenha ocorrido tudo certo, você verá a seguinte mensagem:

![build-completed](./images/build-completed.png)

Após isso, você encontrará o arquivo `main.exe` dentro da pasta `build/windows`.

Então copie a pasta `fei` que está na raiz do projeto para o mesmo diretório do executável `build/windows`.

Para executar o arquivo `main.exe`, basta abrir o terminal no mesmo diretório do executável e digitar o comando:

```bash
main.exe
```

E com isso, você verá o seguinte resultado:

![executing-main](./images/executing-main.png)