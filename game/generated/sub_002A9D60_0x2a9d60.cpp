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

// Function: sub_002A9D60
// Address: 0x2a9d60 - 0x2a9dc8
void sub_002A9D60_0x2a9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9D60_0x2a9d60");
#endif

    ctx->pc = 0x2a9d60u;

    // 0x2a9d60: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x2a9d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a9d64: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2a9d68: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x2a9d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2a9d6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9d70: 0x61e02  srl         $v1, $a2, 24
    ctx->pc = 0x2a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x2a9d74: 0x62a02  srl         $a1, $a2, 8
    ctx->pc = 0x2a9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2a9d78: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2a9d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2a9d7c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2a9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2a9d80: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x2a9d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x2a9d84: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x2a9d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2a9d88: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x2a9d88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2a9d8c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2a9d90: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x2a9d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2a9d94: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2a9d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a9d98: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x2a9d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2a9d9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a9d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a9da0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a9da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a9da4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9da8: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2a9da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2a9dac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a9dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a9db0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2a9db0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a9db4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x2a9db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2a9db8: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2a9db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a9dbc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a9dbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DC8u;
}
