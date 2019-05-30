/**
 * @author yangzh6
 *
 * Reference: <<IFAA标准-REE系统框架部分.pdf>>
 */

package org.ifaa.android.manager;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.hardware.fingerprint.FingerprintManager;
import android.os.Build;
import android.util.Log;

public class IFAAManagerFp extends IFAAManager {
	private static final String TAG = IFAAManagerFp.class.getSimpleName();

	/** Internal Attributes */
	private static final int VERSION = 1;

	// Overrides APIs
	// ------------------------------------------------------------------------
	@Override
	public int getVersion() {
		return VERSION;
	}

	@Override
	public int startBIOManager(Context context, int authType) {
		if ((null == context) || (authType != IFAAUtils.BIO_TYPE_FINGERPRINT)) {
			Log.e(TAG, "context = " + context + ", authType = " + authType);
			return IFAAUtils.COMMAND_FAIL;
		}

		final String pkgName = context.getPackageName();
		Log.d(TAG, "pkgName = " + pkgName + ", authType = " + authType);

		Intent intent = new Intent();
		intent.setComponent(new ComponentName("com.android.settings", IFAAUtils.ACTION_FP_SETTINGS));
		context.startActivity(intent);

		return IFAAUtils.COMMAND_OK;
	}

}
