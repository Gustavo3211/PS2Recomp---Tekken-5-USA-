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

// Function: sub_004EE680
// Address: 0x4ee680 - 0x4ee758
void sub_004EE680_0x4ee680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE680_0x4ee680");
#endif

    switch (ctx->pc) {
        case 0x4ee694u: goto label_4ee694;
        default: break;
    }

    ctx->pc = 0x4ee680u;

    // 0x4ee680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee68c: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4EE68Cu;
    SET_GPR_U32(ctx, 31, 0x4EE694u);
    ctx->pc = 0x4EE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE68Cu;
    // 0x4ee690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4EE68Cu, 0x4EE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE694u;
label_4ee694:
    // 0x4ee694: 0x240300a3  addiu       $v1, $zero, 0xA3
    ctx->pc = 0x4ee694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x4ee698: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4ee698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ee69c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ee69cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee6a0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ee6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee6a4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ee6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ee6a8: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4ee6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4ee6ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4ee6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4ee6b0: 0x24c611e8  addiu       $a2, $a2, 0x11E8
    ctx->pc = 0x4ee6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4584));
    // 0x4ee6b4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4ee6b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee6b8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4ee6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4ee6bc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4ee6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4ee6c0: 0x240a012c  addiu       $t2, $zero, 0x12C
    ctx->pc = 0x4ee6c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x4ee6c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ee6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ee6c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4ee6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ee6cc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ee6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ee6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee6d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee6d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4ee6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ee6dc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4ee6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee6e0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4ee6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4ee6e4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ee6e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ee6e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ee6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ee6ec: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ee6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ee6f0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ee6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ee6f4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4ee6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4ee6f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ee6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ee6fc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ee6fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee700: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x4ee700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x4ee704: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ee704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ee708: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ee708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ee70c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4ee70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4ee710: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4ee710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee714: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4ee714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ee718: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ee718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ee71c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4ee71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4ee720: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee724: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ee724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ee728: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ee728u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ee72c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4ee72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4ee730: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4ee730u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ee734: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4ee734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4ee738: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4ee738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4ee73c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4ee73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x4ee740: 0xa60a014a  sh          $t2, 0x14A($s0)
    ctx->pc = 0x4ee740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ee744: 0xa60901bc  sh          $t1, 0x1BC($s0)
    ctx->pc = 0x4ee744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ee748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee74c: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE74Cu;
    ctx->pc = 0x4EE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE74Cu;
    // 0x4ee750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE754u;
    // 0x4ee754: 0x0  nop
    ctx->pc = 0x4ee754u;
    // NOP
    ctx->pc = 0x4ee758u;
}
