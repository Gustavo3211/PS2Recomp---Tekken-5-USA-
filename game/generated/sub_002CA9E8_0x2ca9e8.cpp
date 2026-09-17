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

// Function: sub_002CA9E8
// Address: 0x2ca9e8 - 0x2caa30
void sub_002CA9E8_0x2ca9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA9E8_0x2ca9e8");
#endif

    switch (ctx->pc) {
        case 0x2caa0cu: goto label_2caa0c;
        case 0x2caa14u: goto label_2caa14;
        default: break;
    }

    ctx->pc = 0x2ca9e8u;

    // 0x2ca9e8: 0x8f82bb40  lw          $v0, -0x44C0($gp)
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949696)));
    // 0x2ca9ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca9f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA9F4u;
    {
        const bool branch_taken_0x2ca9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9F4u;
        // 0x2ca9f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9f4) {
            ctx->pc = 0x2CAA14u;
            goto label_2caa14;
        }
    }
    ctx->pc = 0x2CA9FCu;
    // 0x2ca9fc: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2ca9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2caa00: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x2caa00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x2caa04: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CAA04u;
    SET_GPR_U32(ctx, 31, 0x2CAA0Cu);
    ctx->pc = 0x2CAA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA04u;
    // 0x2caa08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA38u, 0x2CAA04u, 0x2CAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA0Cu;
label_2caa0c:
    // 0x2caa0c: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAA14u);
    ctx->pc = 0x2CAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA0Cu;
    // 0x2caa10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA38u, 0x2CAA0Cu, 0x2CAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA14u;
label_2caa14:
    // 0x2caa14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caa14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2caa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2caa20: 0xaf82bb40  sw          $v0, -0x44C0($gp)
    ctx->pc = 0x2caa20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949696), GPR_U32(ctx, 2));
    // 0x2caa24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA24u;
        // 0x2caa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA2Cu;
    // 0x2caa2c: 0x0  nop
    ctx->pc = 0x2caa2cu;
    // NOP
    ctx->pc = 0x2caa30u;
}
