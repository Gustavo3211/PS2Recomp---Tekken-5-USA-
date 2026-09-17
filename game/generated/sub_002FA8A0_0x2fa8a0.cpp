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

// Function: sub_002FA8A0
// Address: 0x2fa8a0 - 0x2fa8f0
void sub_002FA8A0_0x2fa8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA8A0_0x2fa8a0");
#endif

    ctx->pc = 0x2fa8a0u;

    // 0x2fa8a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fa8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8a4: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x2fa8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2fa8a8: 0x24a3001e  addiu       $v1, $a1, 0x1E
    ctx->pc = 0x2fa8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x2fa8ac: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FA8ACu;
    {
        const bool branch_taken_0x2fa8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8ACu;
        // 0x2fa8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8ac) {
            ctx->pc = 0x2FA8E4u;
            goto label_2fa8e4;
        }
    }
    ctx->pc = 0x2FA8B4u;
    // 0x2fa8b4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2fa8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2fa8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa8bc: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2fa8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x2fa8c0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2fa8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2fa8c4: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x2fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x2fa8c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa8cc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2fa8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2fa8d0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2fa8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa8d4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2fa8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa8d8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2fa8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2fa8dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2fa8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa8e0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2fa8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_2fa8e4:
    // 0x2fa8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA8ECu;
    // 0x2fa8ec: 0x0  nop
    ctx->pc = 0x2fa8ecu;
    // NOP
    ctx->pc = 0x2fa8f0u;
}
