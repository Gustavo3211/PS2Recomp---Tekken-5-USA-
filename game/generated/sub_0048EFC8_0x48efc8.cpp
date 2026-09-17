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

// Function: sub_0048EFC8
// Address: 0x48efc8 - 0x48f010
void sub_0048EFC8_0x48efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EFC8_0x48efc8");
#endif

    switch (ctx->pc) {
        case 0x48efe0u: goto label_48efe0;
        default: break;
    }

    ctx->pc = 0x48efc8u;

    // 0x48efc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48efcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x48efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x48efd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48efd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x48efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x48efd8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x48EFD8u;
    SET_GPR_U32(ctx, 31, 0x48EFE0u);
    ctx->pc = 0x48EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EFD8u;
    // 0x48efdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x48EFD8u, 0x48EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EFE0u;
label_48efe0:
    // 0x48efe0: 0x240400db  addiu       $a0, $zero, 0xDB
    ctx->pc = 0x48efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x48efe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48efe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48efec: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x48efecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x48eff0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48eff4: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x48eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
    // 0x48eff8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48eff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48effc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f000: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x48f000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x48f004: 0x3e00008  jr          $ra
    ctx->pc = 0x48F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F004u;
        // 0x48f008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F00Cu;
    // 0x48f00c: 0x0  nop
    ctx->pc = 0x48f00cu;
    // NOP
    ctx->pc = 0x48f010u;
}
