cc_library(
    name = "funcoes",
    srcs = ["funcoes.cpp"],
    hdrs = ["funcoes.hpp"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "test_funcoes",
    srcs = ["test_funcoes.cpp"],
    deps = [
        ":funcoes",
        "@googletest//:gtest_main",
    ],
)
