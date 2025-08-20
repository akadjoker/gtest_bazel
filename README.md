# gtest_bazel

Repositório de exemplo com **Bazel + GoogleTest** e **GitHub Actions**.

## Requisitos
- Bazel 7.x (ou Bazelisk)
- Compilador C++17

## Como correr localmente
```bash
bazel sync
bazel build //...
bazel test //...
```

## Estrutura
```
.
├── MODULE.bazel
├── .bazelrc
├── src/
│   ├── BUILD
│   ├── funcoes.hpp
│   └── funcoes.cpp
├── tests/
│   ├── BUILD
│   └── funcoes_test.cpp
└── .github/workflows/ci.yml
```

## CI
O pipeline usa `bazel-contrib/setup-bazel` para instalar Bazel e com cache ativado.
