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

// Function: sub_002A9D00
// Address: 0x2a9d00 - 0x2a9d60
void sub_002A9D00_0x2a9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9D00_0x2a9d00");
#endif

    ctx->pc = 0x2a9d00u;

    // 0x2a9d00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a9d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d04: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2a9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2a9d08: 0x22602  srl         $a0, $v0, 24
    ctx->pc = 0x2a9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2a9d0c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9d10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9d14: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2a9d14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2a9d18: 0x23202  srl         $a2, $v0, 8
    ctx->pc = 0x2a9d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a9d1c: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x2a9d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x2a9d20: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9d20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9d24: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2a9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2a9d28: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x2a9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a9d2c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a9d30: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x2a9d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x2a9d34: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x2a9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x2a9d38: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2a9d38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a9d3c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a9d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a9d40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a9d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a9d44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a9d48: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2a9d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2a9d4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a9d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a9d50: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x2a9d50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2a9d54: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D58u;
        // 0x2a9d5c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9D60u;
}
