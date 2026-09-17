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

// Function: sub_0033E050
// Address: 0x33e050 - 0x33e0e8
void sub_0033E050_0x33e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E050_0x33e050");
#endif

    switch (ctx->pc) {
        case 0x33e080u: goto label_33e080;
        case 0x33e0dcu: goto label_33e0dc;
        default: break;
    }

    ctx->pc = 0x33e050u;

    // 0x33e050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e054: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    // 0x33e058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e05c: 0x240f7fff  addiu       $t7, $zero, 0x7FFF
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x33e060: 0x3c0e3000  lui         $t6, 0x3000
    ctx->pc = 0x33e060u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12288 << 16));
    // 0x33e064: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x33e064u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x33e068: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x33e068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33e06c: 0x3c0df000  lui         $t5, 0xF000
    ctx->pc = 0x33e06cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61440 << 16));
    // 0x33e070: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33e070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33e074: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x33e074u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x33e078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33e078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e07c: 0x3c0c6000  lui         $t4, 0x6000
    ctx->pc = 0x33e07cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)24576 << 16));
label_33e080:
    // 0x33e080: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x33e080u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x33e084: 0xea1824  and         $v1, $a3, $t2
    ctx->pc = 0x33e084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x33e088: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x33e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x33e08c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x33e08cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33e090: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x33e090u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x33e094: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E094u;
    {
        const bool branch_taken_0x33e094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x33E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E094u;
        // 0x33e098: 0x10e3025  or          $a2, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e094) {
            ctx->pc = 0x33E0A8u;
            goto label_33e0a8;
        }
    }
    ctx->pc = 0x33E09Cu;
    // 0x33e09c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33E09Cu;
    {
        const bool branch_taken_0x33e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E09Cu;
        // 0x33e0a0: 0xed1025  or          $v0, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e09c) {
            ctx->pc = 0x33E0ACu;
            goto label_33e0ac;
        }
    }
    ctx->pc = 0x33E0A4u;
    // 0x33e0a4: 0x0  nop
    ctx->pc = 0x33e0a4u;
    // NOP
label_33e0a8:
    // 0x33e0a8: 0xeb1024  and         $v0, $a3, $t3
    ctx->pc = 0x33e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_33e0ac:
    // 0x33e0ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33e0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33e0b0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x33e0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33e0b4: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x33e0b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x33e0b8: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x33e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x33e0bc: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x33e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x33e0c0: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x33e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x33e0c4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x33e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x33e0c8: 0x146cffed  bne         $v1, $t4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33E0C8u;
    {
        const bool branch_taken_0x33e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x33E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0C8u;
        // 0x33e0cc: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0c8) {
            ctx->pc = 0x33E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e080;
        }
    }
    ctx->pc = 0x33E0D0u;
    // 0x33e0d0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x33e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33e0d4: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33E0D4u;
    SET_GPR_U32(ctx, 31, 0x33E0DCu);
    ctx->pc = 0x33E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0D4u;
    // 0x33e0d8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33E0D4u, 0x33E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0DCu;
label_33e0dc:
    // 0x33e0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0E0u;
        // 0x33e0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E0E8u;
}
