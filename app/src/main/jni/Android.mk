LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_LDLIBS := -llog -L$(LOCAL_PATH) -ltinysubstrate -lminecraftpe
LOCAL_MODULE    := mcpelauncher
LOCAL_SRC_FILES := main.cpp

#LOCAL_LDFLAGS += -fuse-ld=bfd

# ignore undefined symbols.
# workaround for method not found errors.
TARGET_NO_UNDEFINED_LDFLAGS :=

include $(BUILD_SHARED_LIBRARY)
