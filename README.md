# libtea_native-java

```
gcc -m64 -fPIC -c src/com_liuxiaobai_TeaJniNative.c -o src/com_liuxiaobai_TeaJniNative.o -I/opt/develop_tools/jdk1.7.0_79/include -I/opt/develop_tools/jdk1.7.0_79/include/linux -DBUILDING_DLL=1
gcc -m64 -fPIC -c src/tea_encrypt.c -o src/tea_encrypt.o -I/opt/develop_tools/jdk1.7.0_79/include -I/opt/develop_tools/jdk1.7.0_79/include/linux -DBUILDING_DLL=1
gcc -m64 -shared src/com_liuxiaobai_TeaJniNative.o src/tea_encrypt.o -o libtea_native.so
```
