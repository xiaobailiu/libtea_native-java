package com.liuxiaobai;

/**
 * Created by white on 2015/11/9.
 */
public class TeaJniNative {

    static {
        System.loadLibrary("tea_native");
    }

    public native byte[] encrypt(byte[] v);
    public native byte[] decrypt(byte[] v);

}
