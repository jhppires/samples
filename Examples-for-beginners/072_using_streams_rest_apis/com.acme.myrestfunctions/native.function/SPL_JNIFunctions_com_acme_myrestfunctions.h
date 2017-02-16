// DO NOT EDIT THIS FILE - it is machine generated
#ifndef SPL_JNIFunctions_com_acme_myrestfunctions_h
#define SPL_JNIFunctions_com_acme_myrestfunctions_h

#include <SPL/Runtime/Function/SPLJavaFunction.h>
#include <SPL/Runtime/Type/SPLType.h>

namespace SPL {
namespace JNIFunctions {
namespace com {
namespace acme {
namespace myrestfunctions {
class SPL_JNIFunctions {
public:

// Generated from com.acme.test.rest.MyJavaRestFunctions in impl/java/bin/com/acme/test/rest/MyJavaRestFunctions$StreamsModel.class at Wed Apr 01 19:09:05 EDT 2015
static SPL::rstring getStreamsHostInfo() {
    static __thread void *func;
    static __thread jclass classGlobalRef;
    static __thread jmethodID mid;
    if (func == NULL) {
        func = SPL::SPLJavaFunction::loadFunction("UsingStreamsRestApis", "1.0.1", SPLJAVAFUNCTION_ADL_FILENAME, "impl/java/bin", "com.acme.test.rest.MyJavaRestFunctions", "getStreamsHostInfo", "()Ljava/lang/String;", "com.acme.myrestfunctions", "public rstring getStreamsHostInfo()", &classGlobalRef, &mid);
    }
    JNIEnv* env = SPL::SPLJavaFunction::getJNIEnv(func);
    jstring resObj = (jstring) env->CallStaticObjectMethod(classGlobalRef, mid);
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCallError(func);
    if (resObj != NULL) {
        const jchar *chars = env->GetStringChars(resObj, NULL);
        if (chars == NULL)
            SPL::SPLJavaFunction::throwCreateError(func);
        SPL::ustring result((const UChar *) chars, (int32_t) env->GetStringLength(resObj));
        env->ReleaseStringChars(resObj, chars);
        env->DeleteLocalRef(resObj);
        return SPL::ustring::toUTF8(result);
    } else {
        return SPL::rstring("");
    }
}

// Generated from com.acme.test.rest.MyJavaRestFunctions in impl/java/bin/com/acme/test/rest/MyJavaRestFunctions$StreamsModel.class at Wed Apr 01 19:09:05 EDT 2015
static SPL::rstring getStreamsInstanceInfo() {
    static __thread void *func;
    static __thread jclass classGlobalRef;
    static __thread jmethodID mid;
    if (func == NULL) {
        func = SPL::SPLJavaFunction::loadFunction("UsingStreamsRestApis", "1.0.1", SPLJAVAFUNCTION_ADL_FILENAME, "impl/java/bin", "com.acme.test.rest.MyJavaRestFunctions", "getStreamsInstanceInfo", "()Ljava/lang/String;", "com.acme.myrestfunctions", "public rstring getStreamsInstanceInfo()", &classGlobalRef, &mid);
    }
    JNIEnv* env = SPL::SPLJavaFunction::getJNIEnv(func);
    jstring resObj = (jstring) env->CallStaticObjectMethod(classGlobalRef, mid);
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCallError(func);
    if (resObj != NULL) {
        const jchar *chars = env->GetStringChars(resObj, NULL);
        if (chars == NULL)
            SPL::SPLJavaFunction::throwCreateError(func);
        SPL::ustring result((const UChar *) chars, (int32_t) env->GetStringLength(resObj));
        env->ReleaseStringChars(resObj, chars);
        env->DeleteLocalRef(resObj);
        return SPL::ustring::toUTF8(result);
    } else {
        return SPL::rstring("");
    }
}

// Generated from com.acme.test.rest.MyJavaRestFunctions in impl/java/bin/com/acme/test/rest/MyJavaRestFunctions$StreamsModel.class at Wed Apr 01 19:09:05 EDT 2015
static SPL::rstring getStreamsRootResourceInfo() {
    static __thread void *func;
    static __thread jclass classGlobalRef;
    static __thread jmethodID mid;
    if (func == NULL) {
        func = SPL::SPLJavaFunction::loadFunction("UsingStreamsRestApis", "1.0.1", SPLJAVAFUNCTION_ADL_FILENAME, "impl/java/bin", "com.acme.test.rest.MyJavaRestFunctions", "getStreamsRootResourceInfo", "()Ljava/lang/String;", "com.acme.myrestfunctions", "public rstring getStreamsRootResourceInfo()", &classGlobalRef, &mid);
    }
    JNIEnv* env = SPL::SPLJavaFunction::getJNIEnv(func);
    jstring resObj = (jstring) env->CallStaticObjectMethod(classGlobalRef, mid);
    if (env->ExceptionCheck())
        SPL::SPLJavaFunction::throwCallError(func);
    if (resObj != NULL) {
        const jchar *chars = env->GetStringChars(resObj, NULL);
        if (chars == NULL)
            SPL::SPLJavaFunction::throwCreateError(func);
        SPL::ustring result((const UChar *) chars, (int32_t) env->GetStringLength(resObj));
        env->ReleaseStringChars(resObj, chars);
        env->DeleteLocalRef(resObj);
        return SPL::ustring::toUTF8(result);
    } else {
        return SPL::rstring("");
    }
}

};
}
}
}
}
}
#endif