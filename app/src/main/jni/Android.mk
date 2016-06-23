LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_LDLIBS := -llog
LOCAL_MODULE    := hello
LOCAL_SRC_FILES := main.cpp

LOCAL_SHARED_LIBRARIES := tinysubstrate-bin user
include $(BUILD_SHARED_LIBRARY)

$(call import-add-path, prebuilts)

$(call import-module, tinysubstrate-bin)
$(call import-module, user)

