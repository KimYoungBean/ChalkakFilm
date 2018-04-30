//
// Created by kim youngbin on 2018. 4. 30..
//

#include<jni.h>
#include "com_example_kimyoungbin_chalkakfilm_MainActivity.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

extern "C" {

JNIEXPORT void JNICALL Java_com_example_kimyoungbin_chalkakfilm_MainActivity_ConvertRGBToGray
  (JNIEnv *env, jobject instance, jlong matAddrInput, jlong matAddrResult){

  Mat &matInput = *(Mat *)matAddrInput;
  Mat &matResult = *(Mat *)matAddrResult;

  cvtColor(matInput, matResult, CV_RGBA2GRAY);

  }

}