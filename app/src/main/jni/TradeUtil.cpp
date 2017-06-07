//
// Created by Diablo on 2017/6/7.
//
#include "com_syh_tradec_TradeNDKApi.h"
JNIEXPORT jstring JNICALL Java_com_syh_tradec_TradeNDKApi_getString
  (JNIEnv * env, jobject obj){
    return (*env).NewStringUTF("This is TradeDemo !!!");
  }