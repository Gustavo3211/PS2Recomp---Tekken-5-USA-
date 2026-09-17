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

// Function: sub_0029E1A0
// Address: 0x29e1a0 - 0x29e1f0
void sub_0029E1A0_0x29e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E1A0_0x29e1a0");
#endif

    switch (ctx->pc) {
        case 0x29e1e0u: goto label_29e1e0;
        default: break;
    }

    ctx->pc = 0x29e1a0u;

    // 0x29e1a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e1a4: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e1a8: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29e1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29e1ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e1acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e1b0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29e1b4: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e1b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e1bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e1c0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e1c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1c8: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e1cc: 0x240a014f  addiu       $t2, $zero, 0x14F
    ctx->pc = 0x29e1ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x29e1d0: 0x240b0179  addiu       $t3, $zero, 0x179
    ctx->pc = 0x29e1d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 377));
    // 0x29e1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e1d8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E1D8u;
    SET_GPR_U32(ctx, 31, 0x29E1E0u);
    ctx->pc = 0x29E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1D8u;
    // 0x29e1dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E1D8u, 0x29E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1E0u;
label_29e1e0:
    // 0x29e1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1E4u;
        // 0x29e1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E1ECu;
    // 0x29e1ec: 0x0  nop
    ctx->pc = 0x29e1ecu;
    // NOP
    ctx->pc = 0x29e1f0u;
}
