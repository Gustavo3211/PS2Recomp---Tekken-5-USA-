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

// Function: sub_00505578
// Address: 0x505578 - 0x5055e0
void sub_00505578_0x505578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505578_0x505578");
#endif

    ctx->pc = 0x505578u;

    // 0x505578: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50557c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50557cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x505580: 0x2448c544  addiu       $t0, $v0, -0x3ABC
    ctx->pc = 0x505580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952260));
    // 0x505584: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x505584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x505588: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x505588u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC544u));
    // 0x50558c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x50558cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x505590: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x505590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x505594: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x505594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC540u));
    // 0x505598: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x505598u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50559c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x50559cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5055a0: 0xea2825  or          $a1, $a3, $t2
    ctx->pc = 0x5055a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x5055a4: 0x90c7c534  lbu         $a3, -0x3ACC($a2)
    ctx->pc = 0x5055a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952244)));
    // 0x5055a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5055a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5055ac: 0x711fa  dsrl        $v0, $a3, 7
    ctx->pc = 0x5055acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 7);
    // 0x5055b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x5055b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x5055b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x5055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x5055b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5055B8u;
    {
        const bool branch_taken_0x5055b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5055B8u;
        // 0x5055bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5055b8) {
            ctx->pc = 0x5055C8u;
            goto label_5055c8;
        }
    }
    ctx->pc = 0x5055C0u;
    // 0x5055c0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x5055c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x5055c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_5055c8:
    // 0x5055c8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x5055c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5055cc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x5055ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x5055d0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x5055d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x5055d4: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x5055d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x5055d8: 0x3e00008  jr          $ra
    ctx->pc = 0x5055D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5055DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5055D8u;
        // 0x5055dc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5055D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5055E0u;
}
