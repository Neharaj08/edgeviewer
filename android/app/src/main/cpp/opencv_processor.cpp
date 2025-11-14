#include "opencv_processor.h"
#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;

JNIEXPORT void JNICALL Java_com_example_edgeviewer_JniBridge_processFrame(JNIEnv *env, jclass thiz, jbyteArray inputFrame, jint width, jint height, jbyteArray outputFrame) {
    // Stub: expects NV21 input. Ensure camera sends NV21 or adjust conversion.
    jbyte* in = env->GetByteArrayElements(inputFrame, NULL);
    jbyte* out = env->GetByteArrayElements(outputFrame, NULL);

    Mat yuv(height + height/2, width, CV_8UC1, (unsigned char*)in);
    Mat bgr;
    cvtColor(yuv, bgr, COLOR_YUV2BGR_NV21);
    Mat gray, edges;
    cvtColor(bgr, gray, COLOR_BGR2GRAY);
    Canny(gray, edges, 80, 160);

    // Copy single-channel edges to output
    memcpy(out, edges.data, width * height);

    env->ReleaseByteArrayElements(inputFrame, in, 0);
    env->ReleaseByteArrayElements(outputFrame, out, 0);
}
