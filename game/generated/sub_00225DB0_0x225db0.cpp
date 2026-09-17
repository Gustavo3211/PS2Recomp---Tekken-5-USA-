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

// Function: sub_00225DB0
// Address: 0x225db0 - 0x225e10
void sub_00225DB0_0x225db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225DB0_0x225db0");
#endif

    switch (ctx->pc) {
        case 0x225de0u: goto label_225de0;
        case 0x225decu: goto label_225dec;
        default: break;
    }

    ctx->pc = 0x225db0u;

    // 0x225db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225db4: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225dc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225dc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225dcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x225dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225dd0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225DD0u;
    {
        const bool branch_taken_0x225dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x225DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DD0u;
        // 0x225dd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dd0) {
            ctx->pc = 0x225DF8u;
            goto label_225df8;
        }
    }
    ctx->pc = 0x225DD8u;
    // 0x225dd8: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x225dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225ddc: 0x0  nop
    ctx->pc = 0x225ddcu;
    // NOP
label_225de0:
    // 0x225de0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x225de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x225de4: 0xc08b882  jal         func_22E208
    ctx->pc = 0x225DE4u;
    SET_GPR_U32(ctx, 31, 0x225DECu);
    ctx->pc = 0x225DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DE4u;
    // 0x225de8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x225DE4u, 0x225DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DECu;
label_225dec:
    // 0x225dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225df0: 0x1452fffb  bne         $v0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x225DF0u;
    {
        const bool branch_taken_0x225df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x225DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DF0u;
        // 0x225df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225df0) {
            ctx->pc = 0x225DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225de0;
        }
    }
    ctx->pc = 0x225DF8u;
label_225df8:
    // 0x225df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225e08: 0x3e00008  jr          $ra
    ctx->pc = 0x225E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E08u;
        // 0x225e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E10u;
}
