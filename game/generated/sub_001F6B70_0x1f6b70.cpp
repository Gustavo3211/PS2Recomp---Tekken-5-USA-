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

// Function: sub_001F6B70
// Address: 0x1f6b70 - 0x1f6bc0
void sub_001F6B70_0x1f6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B70_0x1f6b70");
#endif

    switch (ctx->pc) {
        case 0x1f6bb0u: goto label_1f6bb0;
        default: break;
    }

    ctx->pc = 0x1f6b70u;

    // 0x1f6b70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f6b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6b84: 0x24430848  addiu       $v1, $v0, 0x848
    ctx->pc = 0x1f6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2120));
    // 0x1f6b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6b8c: 0x24420834  addiu       $v0, $v0, 0x834
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2100));
    // 0x1f6b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6b94: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f6b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f6b98: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x1f6b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6b9c: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x1f6b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6ba0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1f6ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f6ba4: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x1f6ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6ba8: 0xc097a52  jal         func_25E948
    ctx->pc = 0x1F6BA8u;
    SET_GPR_U32(ctx, 31, 0x1F6BB0u);
    ctx->pc = 0x1F6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BA8u;
    // 0x1f6bac: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E948u, 0x1F6BA8u, 0x1F6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BB0u;
label_1f6bb0:
    // 0x1f6bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BB4u;
        // 0x1f6bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6BBCu;
    // 0x1f6bbc: 0x0  nop
    ctx->pc = 0x1f6bbcu;
    // NOP
    ctx->pc = 0x1f6bc0u;
}
