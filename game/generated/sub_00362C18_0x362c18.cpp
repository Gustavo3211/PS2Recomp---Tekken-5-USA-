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

// Function: sub_00362C18
// Address: 0x362c18 - 0x362c60
void sub_00362C18_0x362c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362C18_0x362c18");
#endif

    ctx->pc = 0x362c18u;

    // 0x362c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362c1c: 0xe7b30024  swc1        $f19, 0x24($sp)
    ctx->pc = 0x362c1cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x362c20: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x362c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x362c24: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x362c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x362c28: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x362c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x362c2c: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x362c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x362c30: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x362c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x362c34: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x362c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x362c38: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x362c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x362c3c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x362c3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x362c40: 0xe7ad000c  swc1        $f13, 0xC($sp)
    ctx->pc = 0x362c40u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x362c44: 0xe7ae0010  swc1        $f14, 0x10($sp)
    ctx->pc = 0x362c44u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x362c48: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x362c48u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x362c4c: 0xe7b00018  swc1        $f16, 0x18($sp)
    ctx->pc = 0x362c4cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x362c50: 0xe7b1001c  swc1        $f17, 0x1C($sp)
    ctx->pc = 0x362c50u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x362c54: 0xe7b20020  swc1        $f18, 0x20($sp)
    ctx->pc = 0x362c54u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x362c58: 0x3e00008  jr          $ra
    ctx->pc = 0x362C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C58u;
        // 0x362c5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362C60u;
}
