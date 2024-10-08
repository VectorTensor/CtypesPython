import ctypes

cfun = ctypes.CDLL("./cmake-build-debug/libPythonCtype.so")

cfun.Display(b"hello", 10)


