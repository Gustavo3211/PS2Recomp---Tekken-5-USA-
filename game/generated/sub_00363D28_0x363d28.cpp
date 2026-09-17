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

// Function: sub_00363D28
// Address: 0x363d28 - 0x363d78
void sub_00363D28_0x363d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D28_0x363d28");
#endif

    switch (ctx->pc) {
        case 0x363d6cu: goto label_363d6c;
        default: break;
    }

    ctx->pc = 0x363d28u;

    // 0x363d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363d2c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x363d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363d34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x363d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d38: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x363d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d3c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x363d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x363d40: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x363d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363d44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363d48: 0x84660014  lh          $a2, 0x14($v1)
    ctx->pc = 0x363d48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x363d4c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x363d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363d50: 0x8467001c  lh          $a3, 0x1C($v1)
    ctx->pc = 0x363d50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x363d54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x363d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363d58: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x363d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d5c: 0x254b000c  addiu       $t3, $t2, 0xC
    ctx->pc = 0x363d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x363d60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x363d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x363d64: 0xc0da37e  jal         func_368DF8
    ctx->pc = 0x363D64u;
    SET_GPR_U32(ctx, 31, 0x363D6Cu);
    ctx->pc = 0x363D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D64u;
    // 0x363d68: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF8u, 0x363D64u, 0x363D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D6Cu;
label_363d6c:
    // 0x363d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363d70: 0x3e00008  jr          $ra
    ctx->pc = 0x363D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D70u;
        // 0x363d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D78u;
}
