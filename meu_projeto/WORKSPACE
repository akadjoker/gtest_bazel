workspace(name = "meu_projeto")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip"],
    strip_prefix = "googletest-release-1.12.1",
    sha256 = "b6e5f6f7d3e7e8c4e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6e6"
)

load("@com_google_googletest//:bazel/setup.bzl", "googletest_setup")
googletest_setup()
