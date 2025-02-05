#include <cutensor.h>
#include <iostream>

using namespace std;

int main()
{
    cutensorStatus_t A[] = {
            /** The operation completed successfully.*/
    CUTENSOR_STATUS_SUCCESS                ,
    /** The opaque data structure was not initialized.*/
    CUTENSOR_STATUS_NOT_INITIALIZED        ,
    /** Resource allocation failed inside the cuTENSOR library.*/
    CUTENSOR_STATUS_ALLOC_FAILED           ,
    /** An unsupported value or parameter was passed to the function (indicates an user error).*/
    CUTENSOR_STATUS_INVALID_VALUE          ,
    /** Indicates that the device is either not ready, or the target architecture is not supported.*/
    CUTENSOR_STATUS_ARCH_MISMATCH          ,
    /** An access to GPU memory space failed, which is usually caused by a failure to bind a texture.*/
    CUTENSOR_STATUS_MAPPING_ERROR          ,
    /** The GPU program failed to execute. This is often caused by a launch failure of the kernel on the GPU, which can be caused by multiple reasons.*/
    CUTENSOR_STATUS_EXECUTION_FAILED       ,
    /** An internal cuTENSOR error has occurred.*/
    CUTENSOR_STATUS_INTERNAL_ERROR         ,
    /** The requested operation is not supported.*/
    CUTENSOR_STATUS_NOT_SUPPORTED          ,
    /** The functionality requested requires some license and an error was detected when trying to check the current licensing.*/
    CUTENSOR_STATUS_LICENSE_ERROR          ,
    /** A call to CUBLAS did not succeed.*/
    CUTENSOR_STATUS_CUBLAS_ERROR           ,
    /** Some unknown CUDA error has occurred.*/
    CUTENSOR_STATUS_CUDA_ERROR             ,
    /** The provided workspace was insufficient.*/
    CUTENSOR_STATUS_INSUFFICIENT_WORKSPACE ,
    /** Indicates that the driver version is insufficient.*/
    CUTENSOR_STATUS_INSUFFICIENT_DRIVER    ,
    /** Indicates an error related to file I/O.*/
    CUTENSOR_STATUS_IO_ERROR
    };

    int N = 15;

    for(int i=0; i<N; i++)
    {
        cout <<"Error = "<<A[i]<<", "<< cutensorGetErrorString(A[i])<<endl;
    }

    return 0;
}