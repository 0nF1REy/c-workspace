<h1 align="center">
  C - Workspace
</h1>

<div align="center">

![Maintenance](https://img.shields.io/maintenance/yes/2025?style=for-the-badge)
![License MIT](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)

</div>

## 🧭 Guia de Navegação (Índice)

- **[📖 Descrição](#descricao)**
- **[📁 Estrutura do Repositório](#estrutura-do-repositorio)**
- **[🛠️ Pré-requisitos](#pre-requisitos)**
- **[🚀 Como Executar](#como-executar)**
- **[📚 Aplicações Incluídas](#aplicacoes-incluidas)**
- **[🔧 Tecnologias Utilizadas](#tecnologias-utilizadas)**
- **[👤 Sobre o Desenvolvedor](#sobre-o-desenvolvedor)**
- **[📜 Licença](#licenca)**

## 📖 Descrição <a name="descricao"></a>

Este repositório contém uma pequena coleção de exemplos e exercícios em C, pensados para ensinar conceitos básicos da linguagem e do fluxo de compilação/executação no Linux. Cada subpasta em `src/` é um programa independente com foco em um tópico (ex.: entrada do usuário, operadores aritméticos, tipos, etc.).

## 📁 Estrutura do Repositório <a name="estrutura-do-repositorio"></a>

Estrutura principal relevante:

```bash
c-workspace/
├── LICENSE
├── README.md
├── resources/
└── src/
    ├── 01_hello_world/           # Exemplo "Hello, World!"
    ├── 02_my_name/               # Imprime seu nome
    ├── 03_sum_two_numbers/       # Soma dois números literais
    ├── 04_user_input/            # Leitura de entrada do usuário
    ├── 05_type_sizes/            # Tamanhos de tipos básicos
    ├── 06_arithmetic_operations/ # Operações aritméticas
    └── 07_arithmetic_calculator/ # Uma calculadora aritmética simples
```

## 🛠️ Pré-requisitos <a name="pre-requisitos"></a>

- Um compilador C compatível com POSIX, por exemplo `gcc` (GNU Compiler Collection).
- Um terminal/ambiente Linux (as instruções abaixo usam bash).

Instale no **Debian/Ubuntu**:

```bash
sudo apt update && sudo apt install build-essential
```

No **Fedora/CentOS**:

```bash
sudo dnf install gcc make
```

No **Arch Linux/Manjaro**:

```bash
sudo pacman -S base-devel
```

No **openSUSE**:

```bash
sudo zypper install -t pattern devel_basis
```

## 🚀 Como Executar <a name="como-executar"></a>

Siga os passos abaixo (exemplo baseado no Linux/Terminal):

### 1. Clone o repositório

```bash
git clone https://github.com/0nF1REy/c-workspace.git
cd c-workspace
```

### 2. Navegue até a pasta do exemplo

Escolha o exercício que deseja testar dentro da pasta `src/`. Por exemplo, para executar o **Hello World**:

```bash
cd src/01_hello_world
```

### 3. Compile o código

Utilize o `gcc` para transformar o código C em um executável. A flag `-o` define o nome do arquivo de saída (ex: `app`).

```bash
# Sintaxe: gcc nome_do_arquivo.c -o nome_do_executavel
gcc hello_world.c -o app
```

> **Nota:** Se você não usar `-o nome`, o compilador gerará um arquivo padrão chamado `a.out`.

### 4. Execute o programa

Chame o executável criado no passo anterior:

```bash
./app
```

---

### 💡 Exemplo Rápido (Calculadora)

Para testar a calculadora aritmética (`07_arithmetic_calculator`), você faria:

```bash
# Entrar na pasta
cd src/07_arithmetic_calculator/

# Compilar
gcc arithmetic_calculator.c -o calculadora

# Executar
./calculadora
```

## 📚 Aplicações Incluídas <a name="aplicacoes-incluidas"></a>

Breve descrição de cada pasta em `src/`:

- `01_hello_world/` — Programa de introdução que imprime "Hello, World!".
- `02_my_name/` — Exibe uma string com seu nome.
- `03_sum_two_numbers/` — Demonstra soma de constantes e impressão do resultado.
- `04_user_input/` — Mostra como ler dados do usuário usando `scanf`/`fgets`.
- `05_type_sizes/` — Mostra `sizeof` para tipos primitivos e discute portabilidade.
- `06_arithmetic_operations/` — Exemplos de operadores aritméticos e precedência.
- `07_arithmetic_calculator/` — Pequena calculadora que lê entrada e realiza operações.

## 🔧 Tecnologias Utilizadas <a name="tecnologias-utilizadas"></a>

- **Linguagem:** C (padrões C89/C99 compatíveis conforme o código).
- **Compilador:** GNU GCC (sugerido), `clang` também é compatível.
- **Ambiente:** Linux / bash (instruções testadas em ambientes POSIX).

## 👤 Sobre o Desenvolvedor <a name="sobre-o-desenvolvedor"></a>

<div align="center">

<table>
  <tr>
    <td align="center">
        <br>
        <a href="https://github.com/0nF1REy" target="_blank">
          <img src="./resources/images/docs/alan-ryan.jpg" height="160" alt="Foto de Alan Ryan">
        </a>
        </p>
        <a href="https://github.com/0nF1REy" target="_blank">
          <strong>Alan Ryan</strong>
        </a>
        </p>
        ☕ Peopleware | Tech Enthusiast | Code Slinger ☕
        <br>
        Apaixonado por código limpo, arquitetura escalável e experiências digitais envolventes
        </p>
          Conecte-se comigo:
        </p>
        <a href="https://www.linkedin.com/in/alan-ryan-b115ba228" target="_blank">
          <img src="https://img.shields.io/badge/LinkedIn-Alan_Ryan-0077B5?style=flat&logo=linkedin" alt="LinkedIn">
        </a>
        <a href="https://gitlab.com/alanryan619" target="_blank">
          <img src="https://img.shields.io/badge/GitLab-@0nF1REy-FCA121?style=flat&logo=gitlab" alt="GitLab">
        </a>
        <a href="mailto:alanryan619@gmail.com" target="_blank">
          <img src="https://img.shields.io/badge/Email-alanryan619@gmail.com-D14836?style=flat&logo=gmail" alt="Email">
        </a>
        </p>
    </td>
  </tr>
</table>

</div>

---

## 📜 Licença <a name="licenca"></a>

Este projeto está sob a **licença MIT**. Consulte o arquivo **[LICENSE](LICENSE)** para obter mais detalhes.

> ℹ️ **Aviso de Licença:** © 2025 Alan Ryan da Silva Domingues. Este projeto está licenciado sob os termos da licença MIT. Isso significa que você pode usá-lo, copiá-lo, modificá-lo e distribuí-lo com liberdade, desde que mantenha os avisos de copyright.

⭐ Se este repositório foi útil para você, considere dar uma estrela!
