LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_LDLIBS := -llog
LOCAL_MODULE    := user
LOCAL_SRC_FILES := User.cpp SuperUser.cpp Object.cpp

include $(BUILD_SHARED_LIBRARY)
