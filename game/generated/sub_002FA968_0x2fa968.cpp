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

// Function: sub_002FA968
// Address: 0x2fa968 - 0x2fa9c8
void sub_002FA968_0x2fa968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA968_0x2fa968");
#endif

    ctx->pc = 0x2fa968u;

    // 0x2fa968: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x2fa968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2fa96c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2fa96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2fa970: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa974: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa978: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa97c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa980: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x2fa980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2fa984: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2fa984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2fa988: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fa988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa98c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2fa98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2fa990: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fa990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fa994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fa998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fa998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa99c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fa99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fa9a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa9a4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2fa9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fa9a8: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2fa9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2fa9ac: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x2fa9acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x2fa9b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa9b4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2fa9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2fa9b8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2fa9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2fa9bc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2fa9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2fa9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9C0u;
        // 0x2fa9c4: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA9C8u;
}
