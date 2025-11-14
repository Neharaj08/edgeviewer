#ifndef OPENCV_PROCESSOR_H
#define OPENCV_PROCESSOR_H
#include <jni.h>
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT void JNICALL Java_com_example_edgeviewer_JniBridge_processFrame(JNIEnv *env, jclass thiz, jbyteArray inputFrame, jint width, jint height, jbyteArray outputFrame);
#ifdef __cplusplus
}
#endif
#endif
