
# Projeto C++ com Bazel, Google Test e CI/CD

![CI](https://github.com/akadjoker/gteste_bazel/actions/workflows/ci.yml/badge.svg)

Este projeto demonstra uma estrutura simples em C++ utilizando Bazel como sistema de build, Google Test para testes unitários, CLion como IDE e GitHub Actions para CI/CD.

## 📁 Estrutura

```
gteste_bazel/
├── WORKSPACE
├── BUILD
├── src/
│   ├── funcoes.cpp
│   └── funcoes.hpp
├── tests/
│   └── test_funcoes.cpp
└── .github/
    └── workflows/
        └── ci.yml
```

## 🚀 Como compilar e testar

```bash
bazel build //...
bazel test //...
```

## 🧪 Testes

Os testes estão localizados na pasta `tests/` e utilizam o framework Google Test.

## 🛠️ Abrir no CLion

Certifica-te de que tens o plugin Bazel instalado no CLion.
O ficheiro `.bazelproject` já está incluído para facilitar a importação.

## 🔄 CI/CD

O workflow de CI/CD está definido em `.github/workflows/ci.yml` e é executado automaticamente em cada push ou pull request para a branch `main`.

## 📌 Badge de Status

O badge no topo mostra o estado atual do build e dos testes.

---


