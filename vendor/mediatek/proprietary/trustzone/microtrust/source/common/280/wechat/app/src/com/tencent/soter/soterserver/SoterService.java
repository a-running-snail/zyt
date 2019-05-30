/**
 * Copyright (c) 2018 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 */

package com.tencent.soter.soterserver;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;

import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

import android.hidl.base.V1_0.IBase;

import vendor.microtrust.hardware.soter.V1_0.ISoter;
import vendor.microtrust.hardware.soter.V1_0.SoterErrorCode;

public class SoterService extends Service{

    private static final String TAG = "wechatfw";

    public SoterService() {
        Log.v(TAG,  "SoterService");
    }

    @Override
    public void onCreate() {
        Log.v(TAG,  "OnCreate");
        super.onCreate();
    }

    @Override
    public IBinder onBind(Intent intent) {
        Log.v(TAG,  "OnBind");
	return mBinder;
    }


    private final IBinder mBinder = new ServiceStub(this);

    private final class ServiceStub extends ISoterService.Stub {
        WeakReference<SoterService> mService;

        ServiceStub(SoterService service) {
            mService = new WeakReference<SoterService>(service);
        }

        @Override
        public int generateAppSecureKey(int uid) throws RemoteException {
            Log.i(TAG,"generateAppSecureKey in");


            int errcode = SoterErrorCode.SOTER_WRAPPERERROR_UNKNOWN;

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start generateAppSecureKey");
                    errcode = soterService.generateAskKeyPair(uid);
                }
            }catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "generateAppSecureKey errcode:" + errcode);
            return errcode;

        }

        @Override
        public SoterExportResult getAppSecureKey(int uid) throws RemoteException {
            Log.i(TAG, "getAppSecureKeyImp in");
            final SoterExportResult result = new SoterExportResult();

            result.resultCode = SoterErrorCode.SOTER_ERROR_UNKNOWN_ERROR;

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start exportAskPublicKey");
                    soterService.exportAskPublicKey(uid, new ISoter.exportAskPublicKeyCallback() {

                        @Override
                        public void onValues(int error, ArrayList<Byte> data, int dataLength) {
                            result.resultCode = error;
                            result.exportData = listTobyte(data);
                            result.exportDataLength = dataLength;
                        }
                    });
                }
            } catch (Exception e){
                result.resultCode = SoterErrorCode.SOTER_WRAPPERERROR_UNKNOWN;
                Log.e(TAG,"exception"+ e.toString());
            }
            return result;
        }

        @Override
        public boolean hasAskAlready(int uid) throws RemoteException {
            Log.v(TAG,  "hasAskAlready called");

            int errcode = SoterErrorCode.SOTER_ERROR_UNKNOWN_ERROR;

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start hasAskAlready");
                    errcode = soterService.hasAskAlready(uid);
                }
            }catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "hasAskAlready errcode:" + errcode + " SoterErrorCode.SOTER_ERROR_OK: " + SoterErrorCode.SOTER_ERROR_OK);
            Log.e(TAG, "hasAskAlready errcode == SoterErrorCode.SOTER_ERROR_OK " + (errcode == SoterErrorCode.SOTER_ERROR_OK));

            return (errcode == SoterErrorCode.SOTER_ERROR_OK);
        }

        @Override
        public int generateAuthKey(int uid, String kname) throws RemoteException {
            Log.i(TAG, "generateAuthKey in");

            if (kname == null || kname.length() == 0) {
                return SoterErrorCode.SOTER_ERROR_KNAME_NULL;
            }

            int errcode = SoterErrorCode.SOTER_WRAPPERERROR_UNKNOWN;
            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start generateAuthKey");
                    errcode = soterService.generateAuthKeyPair(uid, kname);
                }
            }catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "generateAuthKey errcode:" + errcode);
            return errcode;
        }

        @Override
        public int removeAuthKey(int uid, String kname) throws RemoteException {
            Log.i(TAG, "removeAuthKey in");

            if (kname == null || kname.length() == 0) {
                return SoterErrorCode.SOTER_ERROR_KNAME_NULL;
            }

            int errcode = SoterErrorCode.SOTER_WRAPPERERROR_UNKNOWN;

            try {
                ISoter soterService = ISoter.getService();

                if (soterService != null) {
                    Log.i(TAG, "start removeAuthKey");
                    errcode = soterService.removeAuthKey(uid, kname);
                }

            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "removeAuthKeyImp errcode:" + errcode);
            return errcode;
        }

        @Override
        public SoterExportResult getAuthKey(int uid, String kname) throws RemoteException {
            Log.i(TAG, "getAuthKey in");
            final SoterExportResult result = new SoterExportResult();

            result.resultCode = SoterErrorCode.SOTER_ERROR_UNKNOWN_ERROR;
            if (kname == null || kname.length() == 0) {
                result.resultCode = SoterErrorCode.SOTER_ERROR_KNAME_NULL;
                return result;
            }

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start exportAuthKeyPublicKey");
                    soterService.exportAuthKeyPublicKey(uid, kname, new ISoter.exportAuthKeyPublicKeyCallback() {

                        @Override
                        public void onValues(int error, ArrayList<Byte> data, int dataLength) {
                            result.resultCode = error;
                            result.exportData = listTobyte(data);
                            result.exportDataLength = dataLength;
                        }

                    });
                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "exportAuthKeyPublicKey errcode:" + result.resultCode);
            return result;
        }

        @Override
        public int removeAllAuthKey(int uid) throws RemoteException {
            Log.i(TAG, "removeAllAuthKey in");

            int errcode = SoterErrorCode.SOTER_WRAPPERERROR_UNKNOWN;
            try {
                ISoter soterService = ISoter.getService();

                if (soterService != null) {
                    Log.i(TAG, "start removeAllAuthKey");
                    errcode = soterService.removeAllUidKey(uid);
                } else {

                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "removeAllAuthKeyImp errcode:" + errcode);
            return errcode;
        }

        @Override
        public boolean hasAuthKey(int uid, String kname) throws RemoteException {
            Log.i(TAG, "hasAuthKey in");

            if (kname == null || kname.length() == 0) {
                Log.d(TAG, "kname is null");
                return false;
            }

            int errcode = SoterErrorCode.SOTER_ERROR_UNKNOWN_ERROR;

            try {
                ISoter soterService = ISoter.getService();

                if (soterService != null) {
                    Log.i(TAG, "start hasAuthKeyImp");
                    errcode = soterService.hasAuthKey(uid, kname);
                } else {

                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "hasAuthKey errcode:" + errcode + " SoterErrorCode.SOTER_ERROR_OK: " + SoterErrorCode.SOTER_ERROR_OK);
            Log.e(TAG, "hasAuthKey errcode == SoterErrorCode.SOTER_ERROR_OK " + (errcode == SoterErrorCode.SOTER_ERROR_OK));
            return (errcode == SoterErrorCode.SOTER_ERROR_OK);

        }

        @Override
        public SoterSessionResult initSigh(int uid, String kname, String challenge) throws RemoteException {
            Log.i(TAG, "initSigh in");
            final SoterSessionResult result = new SoterSessionResult();

            if (kname == null || kname.length() == 0) {
                result.resultCode = SoterErrorCode.SOTER_ERROR_KNAME_NULL;
                return result;
            }

            if (challenge == null || challenge.length() == 0) {
                result.resultCode = SoterErrorCode.SOTER_ERROR_CHALLENGE_NULL;
                return result;
            }

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start initSign");
                    soterService.initSign(uid, kname, challenge, new ISoter.initSignCallback() {

                        @Override
                        public void onValues(int tempErrorCode, long tempSession) {
                            result.session = tempSession;
                            result.resultCode = tempErrorCode;
                        }
                    });
                }

            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }


            Log.i(TAG, "initSign errcode:" + result.resultCode);
            return result;
        }

        @Override
        public SoterSignResult finishSign(long signSession) throws RemoteException {
            Log.i(TAG, "finishSignImp in");
            final SoterSignResult result = new SoterSignResult();

            if (signSession == 0) {
                result.resultCode = SoterErrorCode.SOTER_ERROR_OPERATEID_NULL;
            }

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start initSign");
                    soterService.finishSign(signSession, new ISoter.finishSignCallback() {

                        @Override
                        public void onValues(int error, ArrayList<Byte> data, int dataLength) {
                            result.resultCode = error;
                            result.exportData = listTobyte(data);
                            result.exportDataLength = dataLength;
                        }

                    });
                } else {
                    // The service only implements the base interface.
                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }


            Log.i(TAG, "finishSignImp errcode:" + result.resultCode);
            return result;
        }

        @Override
        public SoterDeviceResult getDeviceId() throws RemoteException {
            Log.i(TAG, "getDeviceIdImp in");
            final SoterDeviceResult result = new SoterDeviceResult();

            try {
                ISoter soterService = ISoter.getService();
                if (soterService != null) {
                    Log.i(TAG, "start getDeviceId");
                    soterService.getDeviceId(new ISoter.getDeviceIdCallback() {

                        @Override
                        public void onValues(int error, ArrayList<Byte> deviceId, int deviceIdLength) {
                            Log.i("Jamie", "get device id callback in soter service aidl implements.");
                            result.resultCode = error;
                            result.exportData = listTobyte(deviceId);
                            result.exportDataLength = deviceIdLength;
                            Log.i("Jamie", "get device id callback export length is : " + result.exportDataLength);
                        }

                    });
                } else {

                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }

            Log.i(TAG, "getDeviceId errcode:" + result.resultCode);

            return result;
        }

        @Override
        public int getVersion() throws RemoteException {
            return 2;
        }

        @Override
        public String aidlAuth() throws RemoteException {
            return null;
        }
    };


    private byte[] listTobyte(List<Byte> list) {
        if (list == null || list.size() == 0)
            return null;
        byte[] bytes = new byte[list.size()];
        int i = 0;
        for (Byte aList : list) {
            bytes[i] = aList;
            i++;
        }
        return bytes;
    }
}
