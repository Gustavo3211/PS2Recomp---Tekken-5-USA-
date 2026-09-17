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

// Function: sub_002A9C48
// Address: 0x2a9c48 - 0x2a9ce0
void sub_002A9C48_0x2a9c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C48_0x2a9c48");
#endif

    ctx->pc = 0x2a9c48u;

    // 0x2a9c48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a9c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a9c4c: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A9C4Cu;
    {
        const bool branch_taken_0x2a9c4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C4Cu;
        // 0x2a9c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c4c) {
            ctx->pc = 0x2A9CD4u;
            goto label_2a9cd4;
        }
    }
    ctx->pc = 0x2A9C54u;
    // 0x2a9c54: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A9C54u;
    {
        const bool branch_taken_0x2a9c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C54u;
        // 0x2a9c58: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c54) {
            ctx->pc = 0x2A9CD4u;
            goto label_2a9cd4;
        }
    }
    ctx->pc = 0x2A9C5Cu;
    // 0x2a9c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9c64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9c68: 0x2442ce10  addiu       $v0, $v0, -0x31F0
    ctx->pc = 0x2a9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x2a9c6c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2a9c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2a9c70: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2a9c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a9c74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a9c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2a9c78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9c7c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x2a9c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x2a9c80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a9c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a9c84: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a9c88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a9c8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a9c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a9c90: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a9c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a9c94: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2a9c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2a9c98: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a9c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9c9c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x2a9c9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a9ca0: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x2a9ca0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a9ca4: 0xe4460018  swc1        $f6, 0x18($v0)
    ctx->pc = 0x2a9ca4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a9ca8: 0xe445001c  swc1        $f5, 0x1C($v0)
    ctx->pc = 0x2a9ca8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2a9cac: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x2a9cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2a9cb0: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x2a9cb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9cb4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2a9cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a9cb8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2a9cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a9cbc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2a9cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2a9cc0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a9cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a9cc4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x2a9cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2a9cc8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2a9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2a9ccc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2a9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2a9cd0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2a9cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2a9cd4:
    // 0x2a9cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9CDCu;
    // 0x2a9cdc: 0x0  nop
    ctx->pc = 0x2a9cdcu;
    // NOP
    ctx->pc = 0x2a9ce0u;
}
