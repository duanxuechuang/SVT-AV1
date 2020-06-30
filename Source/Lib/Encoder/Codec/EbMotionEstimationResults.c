/*
* Copyright (c) 2019, Alliance for Open Media. All rights reserved
*
* This source code is subject to the terms of the BSD 2 Clause License and
* the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
* was not distributed with this source code in the LICENSE file, you can
* obtain it at www.aomedia.org/license/software. If the Alliance for Open
* Media Patent License 1.0 was not distributed with this source code in the
* PATENTS file, you can obtain it at www.aomedia.org/license/patent.
*/

#include <stdlib.h>

#include "EbMotionEstimationResults.h"

EbErrorType motion_estimation_results_ctor(MotionEstimationResults *context_ptr,
                                           EbPtr                    object_init_data_ptr) {
    (void)context_ptr;
    (void)(object_init_data_ptr);
    return EB_ErrorNone;
}

EbErrorType motion_estimation_results_creator(EbPtr *object_dbl_ptr, EbPtr object_init_data_ptr) {
    MotionEstimationResults *obj;

    *object_dbl_ptr = NULL;
    EB_NEW(obj, motion_estimation_results_ctor, object_init_data_ptr);
    *object_dbl_ptr = obj;

    return EB_ErrorNone;
}
