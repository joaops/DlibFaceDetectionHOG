### Instalando o G++

Abra o Terminal e verifique se você tem o GCC, o G++ e o GDB instalados com os comandos.

```bash
$ gcc --version
$ g++ --version
$ gdb --version
```

Caso não tenha, instale o GCC, o G++ e o GDB com o comando:

```bash
$ sudo apt-get install build-essential gdb g++-multilib gcc-multilib
```

> Os pacotes g++-multilib e gcc-multilib são opcionais, eles são necessários para compilar para 32 bits, que não é o foco desse projeto.