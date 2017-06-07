package com.syh.tradec;

/**
 * Created by yonghe.shen on 2017/6/7.
 */
public class TradeNDKApi {
    static {
        System.loadLibrary("TradeC");
    }

    public native String getString();
}
