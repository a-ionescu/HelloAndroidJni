#include <jni.h>
#include "gps.h"

static jobject mCallbacksObj = NULL;
static jmethodID method_reportLocation;
static jmethodID method_reportStatus;
static jmethodID method_reportSvStatus;
static jmethodID method_reportAGpsStatus;
static jmethodID method_reportNmea;
static jmethodID method_setEngineCapabilities;
static jmethodID method_xtraDownloadRequest;
static jmethodID method_reportNiNotification;
static jmethodID method_requestRefLocation;
static jmethodID method_requestSetID;
static jmethodID method_requestUtcTime;
static const GpsInterface* sGpsInterface = NULL;
static const GpsXtraInterface* sGpsXtraInterface = NULL;
static const AGpsInterface* sAGpsInterface = NULL;
static const GpsNiInterface* sGpsNiInterface = NULL;
static const GpsDebugInterface* sGpsDebugInterface = NULL;
static const AGpsRilInterface* sAGpsRilInterface = NULL;
// temporary storage for GPS callbacks
static GpsSvStatus  sGpsSvStatus;
static const char* sNmeaString;
static int sNmeaStringLength;
#define WAKE_LOCK_NAME  "GPS"

JNIEXPORT jstring JNICALL
//Java_com_spirent_pttb_helloandroidjni_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    //return (*env)->NewStringUTF(env, returnValue);
    //GpsAidingData GPS_DELETE_ALL;
 //   return (*env)->NewStringUTF(env, "Hello From Jni");


//}

Java_com_spirent_pttb_helloandroidjni_MainActivity_delete_aiding_data(JNIEnv* env, jobject obj, jint flags)
{
    if (sGpsInterface)
        sGpsInterface->delete_aiding_data(flags);
}

