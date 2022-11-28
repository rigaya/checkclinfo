# checkclinfo

checkclinfoはOpenCLによるGPUの認識状況を確認するためのアプリです。

[QSVEnc](https://github.com/rigaya/QSVEnc)/[VCEEnc](https://github.com/rigaya/VCEEnc)/[clfilters](https://github.com/rigaya/clfilters)等でのOpenCLチェックルーチンを切り出したものです。

## 想定動作環境

Windows 8.1/10/11 (x86/x64)  
Intel / NVIDIA / AMD のGPUドライバのインストールされた環境  

## checkclinfo 使用にあたっての注意事項

無保証です。自己責任で使用してください。clfiltersを使用したことによる、いかなる損害・トラブルについても責任を負いません。  

## オプション

### -p &lt;string&gt;
対象のplatformの選択。  
- intel
- nvidia
- amd

### --devname-only
デバイス名のみ表示する。

## checkclinfo ソースコード
- MIT license.




