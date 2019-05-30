package org.ifaa.android.service;

import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.os.PowerManager;
import android.os.RemoteException;
import android.util.Log;

import android.app.Service;
import org.ifaa.android.manager.IIFAAManagerService;

public class IFAAManagerService extends IIFAAManagerService.Stub {

	public static String IFAA_SERVICE_ACTION = "ifaa_service";

	private Context context;
	public IFAAManagerService(Context context)
        {
	    this.context = context;
        }

	@Override
        public byte[] processCmd(byte[] input)
	{
            return IFAANative.processCmd(context, input);
	}
}
