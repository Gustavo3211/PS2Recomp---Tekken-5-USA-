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

// Function: sub_00217E28
// Address: 0x217e28 - 0x217e98
void sub_00217E28_0x217e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E28_0x217e28");
#endif

    switch (ctx->pc) {
        case 0x217e48u: goto label_217e48;
        default: break;
    }

    ctx->pc = 0x217e28u;

    // 0x217e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217e38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x217e3c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x217e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x217e40: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x217E40u;
    SET_GPR_U32(ctx, 31, 0x217E48u);
    ctx->pc = 0x217E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E40u;
    // 0x217e44: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x217E40u, 0x217E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E48u;
label_217e48:
    // 0x217e48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x217e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x217e4c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217e50: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x217e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
    // 0x217e54: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x217e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x217e58: 0x24635a80  addiu       $v1, $v1, 0x5A80
    ctx->pc = 0x217e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
    // 0x217e5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x217e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x217e60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217e64: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x217e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x217e68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x217e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x217e6c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x217e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x217e70: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x217e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x217e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e78: 0x3e00008  jr          $ra
    ctx->pc = 0x217E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E78u;
        // 0x217e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E80u;
    // 0x217e80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x217e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x217e84: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x217e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x217e88: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x217e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x217e8c: 0x2484fb60  addiu       $a0, $a0, -0x4A0
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x217e90: 0xc048b90  jal         func_122E40
    ctx->pc = 0x217E90u;
    SET_GPR_U32(ctx, 31, 0x217E98u);
    ctx->pc = 0x217E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E90u;
    // 0x217e94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x217E90u, 0x217E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E98u;
}
