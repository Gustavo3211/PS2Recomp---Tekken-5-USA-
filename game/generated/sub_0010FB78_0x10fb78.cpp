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

// Function: sub_0010FB78
// Address: 0x10fb78 - 0x10fbf0
void sub_0010FB78_0x10fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB78_0x10fb78");
#endif

    switch (ctx->pc) {
        case 0x10fb90u: goto label_10fb90;
        case 0x10fbb0u: goto label_10fbb0;
        case 0x10fbd8u: goto label_10fbd8;
        default: break;
    }

    ctx->pc = 0x10fb78u;

    // 0x10fb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fb80: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB80u;
    {
        const bool branch_taken_0x10fb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB80u;
        // 0x10fb84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb80) {
            ctx->pc = 0x10FB90u;
            goto label_10fb90;
        }
    }
    ctx->pc = 0x10FB88u;
    // 0x10fb88: 0xc046418  jal         func_119060
    ctx->pc = 0x10FB88u;
    SET_GPR_U32(ctx, 31, 0x10FB90u);
    ctx->pc = 0x10FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB88u;
    // 0x10fb8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119060u, 0x10FB88u, 0x10FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB90u;
label_10fb90:
    // 0x10fb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10fb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB98u;
        // 0x10fb9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBA0u;
    // 0x10fba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fba8: 0xc049dbc  jal         func_1276F0
    ctx->pc = 0x10FBA8u;
    SET_GPR_U32(ctx, 31, 0x10FBB0u);
    ctx->pc = 0x1276F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276F0u, 0x10FBA8u, 0x10FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBB0u;
label_10fbb0:
    // 0x10fbb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10fbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fbb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10fbbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC0u;
        // 0x10fbc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBC8u;
    // 0x10fbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fbcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fbd0: 0xc049dbc  jal         func_1276F0
    ctx->pc = 0x10FBD0u;
    SET_GPR_U32(ctx, 31, 0x10FBD8u);
    ctx->pc = 0x1276F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276F0u, 0x10FBD0u, 0x10FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBD8u;
label_10fbd8:
    // 0x10fbd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10fbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fbe0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10fbe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE8u;
        // 0x10fbec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBF0u;
}
