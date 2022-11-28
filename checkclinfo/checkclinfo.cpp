#include <iostream>

#include "rgy_opencl.h"

static void show_version() {
    _ftprintf(stdout, _T("%s\n"), get_encoder_version());
}

static void show_help() {
    show_version();

    tstring str;
    str += _T("-h, --help              show help\n");
    str += _T("-v, --version           show version\n");
    str += _T("\n");
    str += _T("-p,--platform <string>  set platform filter\n");
    str += _T("                          intel, nvidia, amd\n");
    str += _T("\n");
    str += _T("-v, --devname-only      print device name only\n");

    _ftprintf(stdout, _T("%s\n"), str.c_str());
}

int _tmain(int argc, const TCHAR **argv) {
    bool print_devname_only = false;
    tstring platform_filter;

    for (int iarg = 1; iarg < argc; iarg++) {
        if ((_tcscmp(argv[iarg], _T("-p")) == 0 || _tcscmp(argv[iarg], _T("--platform")) == 0)
            && iarg + 1 < argc) {
            iarg++;
            platform_filter = argv[iarg];
            continue;
        }
        if (_tcscmp(argv[iarg], _T("--devname-only")) == 0) {
            print_devname_only = true;
        }
        if (_tcscmp(argv[iarg], _T("-v")) == 0
            || _tcscmp(argv[iarg], _T("--version")) == 0) {
            show_version();
            return 0;
        }
        if (_tcscmp(argv[iarg], _T("-h")) == 0
            || _tcscmp(argv[iarg], _T("--help")) == 0) {
            show_help();
            return 0;
        }
    }

    const auto [ret, str] = getOpenCLInfo(CL_DEVICE_TYPE_GPU,
        platform_filter.length() ? tchar_to_string(platform_filter).c_str() : nullptr,
        print_devname_only);
    if (ret == 0) {
        _ftprintf(stdout, _T("%s\n"), str.c_str());
    } else {
        _ftprintf(stdout, _T("No OpenCL device found.\n"));
    }
    return ret;
}

