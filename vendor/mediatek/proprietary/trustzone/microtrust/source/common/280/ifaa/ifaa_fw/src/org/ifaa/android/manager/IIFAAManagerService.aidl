package org.ifaa.android.manager;

/** @hide */
interface IIFAAManagerService {

    byte[] processCmd(in byte[] input);
}
