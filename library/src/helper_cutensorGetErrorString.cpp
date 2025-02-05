#include <cuda_runtime.h>
#include "cutensor.h"

const char *cutensorGetErrorString(const cutensorStatus_t error)
{
    if(error == CUTENSOR_STATUS_SUCCESS)
        return "CUTENSOR_STATUS_SUCCESS";
    else if(error == CUTENSOR_STATUS_NOT_INITIALIZED)
        return "CUTENSOR_STATUS_NOT_INITIALIZED";
    else if(error == CUTENSOR_STATUS_ALLOC_FAILED)
        return "CUTENSOR_STATUS_ALLOC_FAILED";
    else if(error == CUTENSOR_STATUS_INVALID_VALUE)
        return "CUTENSOR_STATUS_INVALID_VALUE";
    else if(error == CUTENSOR_STATUS_ARCH_MISMATCH)
        return "CUTENSOR_STATUS_ARCH_MISMATCH";
    else if(error == CUTENSOR_STATUS_MAPPING_ERROR)
        return "CUTENSOR_STATUS_MAPPING_ERROR";
    else if(error == CUTENSOR_STATUS_EXECUTION_FAILED)
        return "CUTENSOR_STATUS_EXECUTION_FAILED";
    else if(error == CUTENSOR_STATUS_INTERNAL_ERROR)
        return "CUTENSOR_STATUS_INTERNAL_ERROR";
    else if(error == CUTENSOR_STATUS_NOT_SUPPORTED)
        return "CUTENSOR_STATUS_NOT_SUPPORTED";
    else if(error == CUTENSOR_STATUS_LICENSE_ERROR)
        return "CUTENSOR_STATUS_LICENSE_ERROR";
    else if(error == CUTENSOR_STATUS_CUBLAS_ERROR)
        return "CUTENSOR_STATUS_CUBLAS_ERROR";
    else if(error == CUTENSOR_STATUS_CUDA_ERROR)
        return "CUTENSOR_STATUS_CUDA_ERROR";
    else if(error == CUTENSOR_STATUS_INSUFFICIENT_WORKSPACE)
        return "CUTENSOR_STATUS_INSUFFICIENT_WORKSPACE";
    else if(error == CUTENSOR_STATUS_INSUFFICIENT_DRIVER)
        return "CUTENSOR_STATUS_INSUFFICIENT_DRIVER";
    else if(error == CUTENSOR_STATUS_IO_ERROR)
        return "CUTENSOR_STATUS_IO_ERROR";
    else
        return "CUTENSOR_STATUS_UNKNOWN";
}





