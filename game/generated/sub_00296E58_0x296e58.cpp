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

// Function: sub_00296E58
// Address: 0x296e58 - 0x296ea8
void sub_00296E58_0x296e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E58_0x296e58");
#endif

    ctx->pc = 0x296e58u;

    // 0x296e58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x296e5c: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x296e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x296e60: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x296e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x296e64: 0xac870058  sw          $a3, 0x58($a0)
    ctx->pc = 0x296e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 7));
    // 0x296e68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x296e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x296e6c: 0x240befff  addiu       $t3, $zero, -0x1001
    ctx->pc = 0x296e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x296e70: 0xac880060  sw          $t0, 0x60($a0)
    ctx->pc = 0x296e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 8));
    // 0x296e74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x296e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x296e78: 0xac89005c  sw          $t1, 0x5C($a0)
    ctx->pc = 0x296e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 9));
    // 0x296e7c: 0x24a5bbe0  addiu       $a1, $a1, -0x4420
    ctx->pc = 0x296e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
    // 0x296e80: 0xac8a0064  sw          $t2, 0x64($a0)
    ctx->pc = 0x296e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 10));
    // 0x296e84: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x296e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x296e88: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x296e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x296e8c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x296e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x296e90: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x296e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x296e94: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x296e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x296e98: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x296e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x296e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x296E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E9Cu;
        // 0x296ea0: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296EA4u;
    // 0x296ea4: 0x0  nop
    ctx->pc = 0x296ea4u;
    // NOP
    ctx->pc = 0x296ea8u;
}
