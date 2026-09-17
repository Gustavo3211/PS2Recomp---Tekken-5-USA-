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

// Function: sub_002C8D88
// Address: 0x2c8d88 - 0x2c8de0
void sub_002C8D88_0x2c8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8D88_0x2c8d88");
#endif

    switch (ctx->pc) {
        case 0x2c8d9cu: goto label_2c8d9c;
        default: break;
    }

    ctx->pc = 0x2c8d88u;

    // 0x2c8d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c8d94: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8D94u;
    SET_GPR_U32(ctx, 31, 0x2C8D9Cu);
    ctx->pc = 0x2C8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D94u;
    // 0x2c8d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8D94u, 0x2C8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D9Cu;
label_2c8d9c:
    // 0x2c8d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8D9Cu;
    {
        const bool branch_taken_0x2c8d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D9Cu;
        // 0x2c8da0: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d9c) {
            ctx->pc = 0x2C8DC8u;
            goto label_2c8dc8;
        }
    }
    ctx->pc = 0x2C8DA4u;
    // 0x2c8da4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c8da8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8dac: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2c8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c8db0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8db4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c8db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8dbc: 0x8c428d48  lw          $v0, -0x72B8($v0)
    ctx->pc = 0x2c8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937928)));
    // 0x2c8dc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8DC0u;
    {
        const bool branch_taken_0x2c8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC0u;
        // 0x2c8dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dc0) {
            ctx->pc = 0x2C8DD0u;
            goto label_2c8dd0;
        }
    }
    ctx->pc = 0x2C8DC8u;
label_2c8dc8:
    // 0x2c8dc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c8dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8dd0:
    // 0x2c8dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c8dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DD4u;
        // 0x2c8dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8DDCu;
    // 0x2c8ddc: 0x0  nop
    ctx->pc = 0x2c8ddcu;
    // NOP
    ctx->pc = 0x2c8de0u;
}
