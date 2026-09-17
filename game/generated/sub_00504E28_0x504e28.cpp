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

// Function: sub_00504E28
// Address: 0x504e28 - 0x504e88
void sub_00504E28_0x504e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504E28_0x504e28");
#endif

    switch (ctx->pc) {
        case 0x504e7cu: goto label_504e7c;
        default: break;
    }

    ctx->pc = 0x504e28u;

    // 0x504e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x504e2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x504e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x504e34: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x504e34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x504e38: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x504e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504e3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x504e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e40: 0x84c90078  lh          $t1, 0x78($a2)
    ctx->pc = 0x504e40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x504e44: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x504e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e48: 0x84c20076  lh          $v0, 0x76($a2)
    ctx->pc = 0x504e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 118)));
    // 0x504e4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x504e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x504e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504e54: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x504e54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x504e58: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x504e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x504e5c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x504e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x504e60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504e64: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x504e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x504e68: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x504e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x504e6c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x504e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504e70: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x504e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x504e74: 0xc140fb8  jal         func_503EE0
    ctx->pc = 0x504E74u;
    SET_GPR_U32(ctx, 31, 0x504E7Cu);
    ctx->pc = 0x504E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504E74u;
    // 0x504e78: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EE0u, 0x504E74u, 0x504E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504E7Cu;
label_504e7c:
    // 0x504e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504e80: 0x3e00008  jr          $ra
    ctx->pc = 0x504E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504E80u;
        // 0x504e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x504E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504E88u;
}
