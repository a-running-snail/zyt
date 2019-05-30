package org.ifaa.android.service;

import android.content.Context;

/**
 * Created by jiamei on 11/26/17.
 */

public class IFAANative {

    static
    {
        System.loadLibrary("ifaa_jni");
    }

    public static native byte[] processCmd(Context contexts, byte[] input);
}
