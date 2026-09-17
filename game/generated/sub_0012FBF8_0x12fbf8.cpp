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

// Function: sub_0012FBF8
// Address: 0x12fbf8 - 0x12fc38
void sub_0012FBF8_0x12fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FBF8_0x12fbf8");
#endif

    ctx->pc = 0x12fbf8u;

    // 0x12fbf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12fbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbfc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12fbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12fc00: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12fc00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12fc04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12fc04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12fc08: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x12fc0c: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x12fc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
    // 0x12fc10: 0x42823  negu        $a1, $a0
    ctx->pc = 0x12fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x12fc14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12fc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12fc18: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x12fc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x12fc1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12fc20: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x12fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x12fc24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12fc28: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC2Cu;
        // 0x12fc30: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FC34u;
    // 0x12fc34: 0x0  nop
    ctx->pc = 0x12fc34u;
    // NOP
    ctx->pc = 0x12fc38u;
}
