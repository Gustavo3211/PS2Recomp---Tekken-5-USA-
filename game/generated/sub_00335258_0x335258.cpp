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

// Function: sub_00335258
// Address: 0x335258 - 0x3352b0
void sub_00335258_0x335258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335258_0x335258");
#endif

    switch (ctx->pc) {
        case 0x335294u: goto label_335294;
        case 0x3352a0u: goto label_3352a0;
        default: break;
    }

    ctx->pc = 0x335258u;

    // 0x335258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33525c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x33525cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x335260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335264: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x335264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x335268: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x335268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x33526c: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x33526cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x335270: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x335270u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x335274: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x335274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x335278: 0x2088025  or          $s0, $s0, $t0
    ctx->pc = 0x335278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
    // 0x33527c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x335280: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x335280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x335284: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x335284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x335288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33528c: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x33528Cu;
    SET_GPR_U32(ctx, 31, 0x335294u);
    ctx->pc = 0x335290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33528Cu;
    // 0x335290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x33528Cu, 0x335294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335294u;
label_335294:
    // 0x335294: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x335294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x335298: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x335298u;
    SET_GPR_U32(ctx, 31, 0x3352A0u);
    ctx->pc = 0x33529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335298u;
    // 0x33529c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x335298u, 0x3352A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352A0u;
label_3352a0:
    // 0x3352a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3352a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3352a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3352a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3352a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3352A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3352ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352A8u;
        // 0x3352ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3352A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3352B0u;
}
