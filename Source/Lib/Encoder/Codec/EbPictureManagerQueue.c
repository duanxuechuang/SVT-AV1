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
#include "EbPictureManagerQueue.h"

EbErrorType input_queue_entry_ctor(InputQueueEntry *entry_ptr) {
    (void)entry_ptr;
    return EB_ErrorNone;
}

static void reference_queue_entry_dctor(EbPtr p) {
    ReferenceQueueEntry *obj = (ReferenceQueueEntry *)p;
    EB_FREE_ARRAY(obj->list0.list);
    EB_FREE_ARRAY(obj->list1.list);
}

EbErrorType reference_queue_entry_ctor(ReferenceQueueEntry *entry_ptr) {
    entry_ptr->dctor                = reference_queue_entry_dctor;
    entry_ptr->picture_number       = ~0u;

    EB_MALLOC_ARRAY(entry_ptr->list0.list, (1 << MAX_TEMPORAL_LAYERS));
    EB_MALLOC_ARRAY(entry_ptr->list1.list, (1 << MAX_TEMPORAL_LAYERS));

    return EB_ErrorNone;
}
