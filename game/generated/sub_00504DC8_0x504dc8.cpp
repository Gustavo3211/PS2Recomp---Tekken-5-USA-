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

// Function: sub_00504DC8
// Address: 0x504dc8 - 0x504e28
void sub_00504DC8_0x504dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504DC8_0x504dc8");
#endif

    switch (ctx->pc) {
        case 0x504e1cu: goto label_504e1c;
        default: break;
    }

    ctx->pc = 0x504dc8u;

    // 0x504dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x504dcc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x504dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504dd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x504dd4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x504dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x504dd8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x504dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504ddc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x504ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504de0: 0x85490074  lh          $t1, 0x74($t2)
    ctx->pc = 0x504de0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 116)));
    // 0x504de4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x504de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504de8: 0x85420072  lh          $v0, 0x72($t2)
    ctx->pc = 0x504de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 114)));
    // 0x504dec: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x504decu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x504df0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x504df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504df4: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x504df4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x504df8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x504df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x504dfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x504dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504e04: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x504e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x504e08: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x504e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x504e0c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x504e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504e10: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x504e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x504e14: 0xc140fb8  jal         func_503EE0
    ctx->pc = 0x504E14u;
    SET_GPR_U32(ctx, 31, 0x504E1Cu);
    ctx->pc = 0x504E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504E14u;
    // 0x504e18: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EE0u, 0x504E14u, 0x504E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504E1Cu;
label_504e1c:
    // 0x504e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504e20: 0x3e00008  jr          $ra
    ctx->pc = 0x504E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504E20u;
        // 0x504e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x504E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504E28u;
}
