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

// Function: sub_002EAC38
// Address: 0x2eac38 - 0x2eac78
void sub_002EAC38_0x2eac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAC38_0x2eac38");
#endif

    switch (ctx->pc) {
        case 0x2eac4cu: goto label_2eac4c;
        default: break;
    }

    ctx->pc = 0x2eac38u;

    // 0x2eac38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eac3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eac40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eac44: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EAC44u;
    SET_GPR_U32(ctx, 31, 0x2EAC4Cu);
    ctx->pc = 0x2EAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC44u;
    // 0x2eac48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EAC44u, 0x2EAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC4Cu;
label_2eac4c:
    // 0x2eac4c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eac50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2eac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2eac54: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x2eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2eac58: 0x2463f8c0  addiu       $v1, $v1, -0x740
    ctx->pc = 0x2eac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965440));
    // 0x2eac5c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2eac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2eac60: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2eac60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2eac64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eac64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eac68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eac68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eac6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC6Cu;
        // 0x2eac70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAC74u;
    // 0x2eac74: 0x0  nop
    ctx->pc = 0x2eac74u;
    // NOP
    ctx->pc = 0x2eac78u;
}
