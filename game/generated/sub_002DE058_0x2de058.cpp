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

// Function: sub_002DE058
// Address: 0x2de058 - 0x2de0c0
void sub_002DE058_0x2de058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE058_0x2de058");
#endif

    switch (ctx->pc) {
        case 0x2de0b4u: goto label_2de0b4;
        default: break;
    }

    ctx->pc = 0x2de058u;

    // 0x2de058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de05c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2de05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2de060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de064: 0x2446f670  addiu       $a2, $v0, -0x990
    ctx->pc = 0x2de064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x2de068: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2de068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de06c: 0x24c9000c  addiu       $t1, $a2, 0xC
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2de070: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2de070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF674u));
    // 0x2de074: 0x81030068  lb          $v1, 0x68($t0)
    ctx->pc = 0x2de074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x2de078: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de07c: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE07Cu;
    {
        const bool branch_taken_0x2de07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE07Cu;
        // 0x2de080: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de07c) {
            ctx->pc = 0x2DE0A0u;
            goto label_2de0a0;
        }
    }
    ctx->pc = 0x2DE084u;
    // 0x2de084: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2de084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2de088: 0x81060069  lb          $a2, 0x69($t0)
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 105)));
    // 0x2de08c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2de08cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de090: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE090u;
    {
        const bool branch_taken_0x2de090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE090u;
        // 0x2de094: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de090) {
            ctx->pc = 0x2DE0B8u;
            goto label_2de0b8;
        }
    }
    ctx->pc = 0x2DE098u;
    // 0x2de098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE098u;
    {
        const bool branch_taken_0x2de098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE098u;
        // 0x2de09c: 0xa1070068  sb          $a3, 0x68($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 104), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de098) {
            ctx->pc = 0x2DE0A4u;
            goto label_2de0a4;
        }
    }
    ctx->pc = 0x2DE0A0u;
label_2de0a0:
    // 0x2de0a0: 0xa1070068  sb          $a3, 0x68($t0)
    ctx->pc = 0x2de0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 104), (uint8_t)GPR_U32(ctx, 7));
label_2de0a4:
    // 0x2de0a4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2de0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2de0a8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2de0a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de0ac: 0xc0b7830  jal         func_2DE0C0
    ctx->pc = 0x2DE0ACu;
    SET_GPR_U32(ctx, 31, 0x2DE0B4u);
    ctx->pc = 0x2DE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0ACu;
    // 0x2de0b0: 0xa1060069  sb          $a2, 0x69($t0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 8), 105), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE0C0u, 0x2DE0ACu, 0x2DE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0B4u;
label_2de0b4:
    // 0x2de0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de0b8:
    // 0x2de0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0B8u;
        // 0x2de0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0C0u;
}
