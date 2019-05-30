package org.ifaa.android.manager;

import android.os.Parcel;
import android.os.Parcelable;

public class CallbackResult implements Parcelable {
    public int resultCode;
    public byte[] exportData;
    public int exportDataLength;


    public CallbackResult(){
        super();
    }

    protected CallbackResult(Parcel in) {
        resultCode = in.readInt();
        exportData = in.createByteArray();
        exportDataLength = in.readInt();
    }

    @Override
    public void writeToParcel(Parcel dest, int flags) {
        dest.writeInt(resultCode);
        dest.writeByteArray(exportData);
        dest.writeInt(exportDataLength);
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public static final Creator<CallbackResult> CREATOR = new Creator<CallbackResult>() {
        @Override
        public CallbackResult createFromParcel(Parcel in) {
            return new CallbackResult(in);
        }

        @Override
        public CallbackResult[] newArray(int size) {
            return new CallbackResult[size];
        }
    };
}

