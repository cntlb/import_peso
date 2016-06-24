//
// Created by user on 2016/6/24.
//

#ifndef IMPORT_PESO_MYLOG_H
#define IMPORT_PESO_MYLOG_H

#ifndef _ANDROID_LOG_H
#error "must include android/log.h"
#endif

#define  LOGE(format, args...)  __android_log_print(ANDROID_LOG_ERROR, "import_peso", format, ##args);

#endif //IMPORT_PESO_MYLOG_H
