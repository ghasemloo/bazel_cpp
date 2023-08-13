load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Bazel toolchains
# http_archive(
#     name = "bazel_toolchains",
#     # sha256 = 
#     strip_prefix = "bazel-toolchains-5.1.2",
#     urls = [
#         "https://github.com/bazelbuild/bazel-toolchains/archive/refs/tags/v5.1.2.tar.gz",
#     ],
# )

# GoogleTest/GoogleMock framework. Used by most unit-tests.
http_archive(
    name = "com_google_googletest",
    sha256 = "8ad598c73ad796e0d8280b082cebd82a630d73e73cd3c70057938a6501bba5d7",
    strip_prefix = "googletest-1.14.0",
    urls = [
        "https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz",
    ],
)

# Absl
http_archive(
    name = "com_google_absl",
    sha256 = "5366d7e7fa7ba0d915014d387b66d0d002c03236448e1ba9ef98122c13b35c36",
    strip_prefix = "abseil-cpp-20230125.3",
    urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20230125.3.tar.gz"],
)

# re2 required for google tests
http_archive(
    name = "com_googlesource_code_re2",
    sha256 = "b90430b2a9240df4459108b3e291be80ae92c68a47bc06ef2dc419c5724de061",
    strip_prefix = "re2-a276a8c738735a0fe45a6ee590fe2df69bcf4502",
    urls = ["https://github.com/google/re2/archive/a276a8c738735a0fe45a6ee590fe2df69bcf4502.tar.gz"],
)

http_archive(
    name = "bazel_skylib",
    sha256 = "b8a1527901774180afc798aeb28c4634bdccf19c4d98e7bdd1ce79d1fe9aaad7",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.4.1/bazel-skylib-1.4.1.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.4.1/bazel-skylib-1.4.1.tar.gz",
    ],
)

load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")

bazel_skylib_workspace()