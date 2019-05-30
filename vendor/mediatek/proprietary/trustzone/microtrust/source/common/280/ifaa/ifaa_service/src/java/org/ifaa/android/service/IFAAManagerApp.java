package org.ifaa.android.service;

import android.app.Application;
import android.os.ServiceManager;
import android.os.UserHandle;
import android.util.Log;
/**
 * Top-level Application class for the ifaa_service app.
 */
public class IFAAManagerApp extends Application {
    private static final String TAG = "IFAAManagerApp";

    public IFAAManagerApp() {
    }

    @Override
    public void onCreate() {
        if (UserHandle.myUserId() == 0) {
            Log.d(TAG, "ifaa_service App onCreate begin");

            IFAAManagerService service = new IFAAManagerService(this);
            ServiceManager.addService(IFAAManagerService.IFAA_SERVICE_ACTION, service.asBinder(), true);

            Log.d(TAG, "ifaa_serivce App onCreate end");
        }
    }
}

