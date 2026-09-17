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

// Function: sub_0029AE60
// Address: 0x29ae60 - 0x29aea8
void sub_0029AE60_0x29ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE60_0x29ae60");
#endif

    switch (ctx->pc) {
        case 0x29ae9cu: goto label_29ae9c;
        default: break;
    }

    ctx->pc = 0x29ae60u;

    // 0x29ae60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29ae64: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29ae68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ae6c: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x29ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x29ae70: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29ae74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ae78: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29ae78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29ae7c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ae80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ae80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae84: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29ae84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29ae88: 0x240a014f  addiu       $t2, $zero, 0x14F
    ctx->pc = 0x29ae88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x29ae8c: 0x240b017d  addiu       $t3, $zero, 0x17D
    ctx->pc = 0x29ae8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x29ae90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ae94: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AE94u;
    SET_GPR_U32(ctx, 31, 0x29AE9Cu);
    ctx->pc = 0x29AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE94u;
    // 0x29ae98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AE94u, 0x29AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE9Cu;
label_29ae9c:
    // 0x29ae9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aea0: 0x3e00008  jr          $ra
    ctx->pc = 0x29AEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEA0u;
        // 0x29aea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AEA8u;
}
