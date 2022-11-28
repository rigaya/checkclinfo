SRCS =  checkclinfo_main/checkclinfo.cpp checkclinfo_core/cpu_info.cpp checkclinfo_core/gpu_info.cpp checkclinfo_core/rgy_codepage.cpp checkclinfo_core/rgy_def.cpp checkclinfo_core/rgy_env.cpp checkclinfo_core/rgy_err.cpp checkclinfo_core/rgy_filesystem.cpp checkclinfo_core/rgy_log.cpp checkclinfo_core/rgy_opencl.cpp checkclinfo_core/rgy_resource.cpp checkclinfo_core/rgy_simd.cpp checkclinfo_core/rgy_util.cpp checkclinfo_core/rgy_version.cpp
SRCASMS = 
SRCDIR = .
CXX = g++
AS =
LD = g++
PROGRAM = checkclinfo
ENABLE_DEBUG = 0
CXXFLAGS = -std=c++17 -Wall -Wno-unknown-pragmas -Wno-unused -Wno-missing-braces -I./checkclinfo_core -pthread -fPIE -O3 -DNDEBUG=1 -mfpmath=sse -ffast-math -fomit-frame-pointer -DLINUX -DUNIX -D_FILE_OFFSET_BITS=64 -D__USE_LARGEFILE64 -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -DLINUX64 -m64
ASFLAGS =
LDFLAGS = -L. -static -static-libgcc -static-libstdc++ -ldl -lrt -m64 -pthread -Wl,--whole-archive -lpthread -Wl,--no-whole-archive
PREFIX = /usr/local
