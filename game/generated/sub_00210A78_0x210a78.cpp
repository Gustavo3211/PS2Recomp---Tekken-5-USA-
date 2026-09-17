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

// Function: sub_00210A78
// Address: 0x210a78 - 0x210ad8
void sub_00210A78_0x210a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210A78_0x210a78");
#endif

    switch (ctx->pc) {
        case 0x210aacu: goto label_210aac;
        case 0x210ac4u: goto label_210ac4;
        default: break;
    }

    ctx->pc = 0x210a78u;

    // 0x210a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210a7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x210a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210a84: 0x245088d0  addiu       $s0, $v0, -0x7730
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x210a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210a8c: 0x2411001a  addiu       $s1, $zero, 0x1A
    ctx->pc = 0x210a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x210a90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x210a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x210a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210a98: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x210a9c: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x210A9Cu;
    {
        const bool branch_taken_0x210a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x210AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A9Cu;
        // 0x210aa0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a9c) {
            ctx->pc = 0x210AACu;
            goto label_210aac;
        }
    }
    ctx->pc = 0x210AA4u;
    // 0x210aa4: 0xc0837ce  jal         func_20DF38
    ctx->pc = 0x210AA4u;
    SET_GPR_U32(ctx, 31, 0x210AACu);
    ctx->pc = 0x20DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF38u, 0x210AA4u, 0x210AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AACu;
label_210aac:
    // 0x210aac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x210aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x210ab0: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x210ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x210ab4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x210AB4u;
    {
        const bool branch_taken_0x210ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ab4) {
            ctx->pc = 0x210AC4u;
            goto label_210ac4;
        }
    }
    ctx->pc = 0x210ABCu;
    // 0x210abc: 0xc0837ce  jal         func_20DF38
    ctx->pc = 0x210ABCu;
    SET_GPR_U32(ctx, 31, 0x210AC4u);
    ctx->pc = 0x20DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF38u, 0x210ABCu, 0x210AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AC4u;
label_210ac4:
    // 0x210ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x210AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD0u;
        // 0x210ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210AD8u;
}
