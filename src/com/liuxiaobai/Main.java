package com.liuxiaobai;

public class Main {

    public static void main(String[] args) {
        TeaJniNative tea = new TeaJniNative();

        byte[] res0 = new byte[]{
                0x00, 0x30, 0x30, 0x30, 0x43, 0x32, 0x39, 0x10
        };
        int i;
        for(i = 0; i < res0.length; i++){
            System.out.printf("[%02X]", res0[i]);
        }
        System.out.println();

        byte[] res1 = tea.encrypt(res0);
        for(i = 0; i < res1.length; i++){
            System.out.printf("[%02X]", res1[i]);
        }
        System.out.println();

        byte[] res2 = tea.decrypt(res1);
        for(i = 0; i < res2.length; i++){
            System.out.printf("[%02X]", res2[i]);
        }
        System.out.println();

    }
}
