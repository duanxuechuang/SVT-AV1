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

#ifndef EbDecProcessBlock_h
#define EbDecProcessBlock_h

#ifdef __cplusplus
extern "C" {
#endif

PartitionType get_partition(DecModCtxt *dec_mod_ctxt, FrameHeader *frame_header, uint32_t mi_row,
                            uint32_t mi_col, SBInfo *sb_info, BlockSize bsize);

// void decode_block();
void decode_block(DecModCtxt *dec_mod_ctxt, BlockModeInfo *mode_info, int32_t mi_row, int32_t mi_col,
                  BlockSize bsize, TileInfo *tile, SBInfo *sb_info /*, uint32_t *recon*/);

#ifdef __cplusplus
}
#endif
#endif // EbDecProcessBlock_h
