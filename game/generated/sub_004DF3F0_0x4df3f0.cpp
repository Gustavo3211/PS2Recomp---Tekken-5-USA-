#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DF3F0
// Address: 0x4df3f0 - 0x4df488
void sub_004DF3F0_0x4df3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF3F0_0x4df3f0");
#endif

    ctx->pc = 0x4df3f0u;

    // 0x4df3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4df3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4df3f4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4df3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4df3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4df3fc: 0x24c61148  addiu       $a2, $a2, 0x1148
    ctx->pc = 0x4df3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4424));
    // 0x4df400: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4df400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df404: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4df404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4df408: 0x8522001a  lh          $v0, 0x1A($t1)
    ctx->pc = 0x4df408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 26)));
    // 0x4df40c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4df40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4df410: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4df410u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1148u));
    // 0x4df414: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4df414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4df418: 0x8c681164  lw          $t0, 0x1164($v1)
    ctx->pc = 0x4df418u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1164u));
    // 0x4df41c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4df41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4df420: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4df420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4df424: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4df424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4df428: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4df428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4df42c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4df42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4df430: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4df430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df434: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4df434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4df438: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df43c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4df43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4df440: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4df440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4df444: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4df444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4df448: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4df448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4df44c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4df44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df450: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x4df450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x4df454: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DF454u;
    {
        const bool branch_taken_0x4df454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF454u;
        // 0x4df458: 0x252a01bc  addiu       $t2, $t1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df454) {
            ctx->pc = 0x4DF468u;
            goto label_4df468;
        }
    }
    ctx->pc = 0x4DF45Cu;
    // 0x4df45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df460: 0x8137d6c  j           func_4DF5B0
    ctx->pc = 0x4DF460u;
    ctx->pc = 0x4DF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF460u;
    // 0x4df464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF5B0u;
    sub_004DF5B0_0x4df5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF468u;
label_4df468:
    // 0x4df468: 0xa5200160  sh          $zero, 0x160($t1)
    ctx->pc = 0x4df468u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4df46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df470: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4df470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4df474: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4df474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4df478: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4df478u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df47c: 0x8137d22  j           func_4DF488
    ctx->pc = 0x4DF47Cu;
    ctx->pc = 0x4DF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF47Cu;
    // 0x4df480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF488u;
    sub_004DF488_0x4df488(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF484u;
    // 0x4df484: 0x0  nop
    ctx->pc = 0x4df484u;
    // NOP
    ctx->pc = 0x4df488u;
}
