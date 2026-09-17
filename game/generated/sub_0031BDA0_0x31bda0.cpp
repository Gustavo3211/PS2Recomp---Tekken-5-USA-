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

// Function: sub_0031BDA0
// Address: 0x31bda0 - 0x31bde0
void sub_0031BDA0_0x31bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BDA0_0x31bda0");
#endif

    switch (ctx->pc) {
        case 0x31bdb4u: goto label_31bdb4;
        default: break;
    }

    ctx->pc = 0x31bda0u;

    // 0x31bda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31bda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31bda8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31bdac: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31BDACu;
    SET_GPR_U32(ctx, 31, 0x31BDB4u);
    ctx->pc = 0x31BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDACu;
    // 0x31bdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31BDACu, 0x31BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDB4u;
label_31bdb4:
    // 0x31bdb4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31bdb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31bdbc: 0x244224f8  addiu       $v0, $v0, 0x24F8
    ctx->pc = 0x31bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9464));
    // 0x31bdc0: 0x246318b0  addiu       $v1, $v1, 0x18B0
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6320));
    // 0x31bdc4: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x31bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x31bdc8: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x31bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x31bdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31bdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bdd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31bdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31BDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDD4u;
        // 0x31bdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BDDCu;
    // 0x31bddc: 0x0  nop
    ctx->pc = 0x31bddcu;
    // NOP
    ctx->pc = 0x31bde0u;
}
