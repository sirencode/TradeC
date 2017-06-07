LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := TradeC
LOCAL_SRC_FILES =: TradeUtil.cpp
include $(BUILD_SHARED_LIBRARY)