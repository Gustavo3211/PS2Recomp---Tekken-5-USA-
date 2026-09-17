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

// Function: sub_002EEAB8
// Address: 0x2eeab8 - 0x2eeb30
void sub_002EEAB8_0x2eeab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEAB8_0x2eeab8");
#endif

    switch (ctx->pc) {
        case 0x2eeb24u: goto label_2eeb24;
        default: break;
    }

    ctx->pc = 0x2eeab8u;

    // 0x2eeab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eeab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eeabc: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2eeabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eeac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eeac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eeac4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eeac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEAC8u;
    {
        const bool branch_taken_0x2eeac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAC8u;
        // 0x2eeacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeac8) {
            ctx->pc = 0x2EEAE0u;
            goto label_2eeae0;
        }
    }
    ctx->pc = 0x2EEAD0u;
    // 0x2eead0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eead4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eead8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEAD8u;
    {
        const bool branch_taken_0x2eead8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eead8) {
            ctx->pc = 0x2EEAECu;
            goto label_2eeaec;
        }
    }
    ctx->pc = 0x2EEAE0u;
label_2eeae0:
    // 0x2eeae0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eeae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eeae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eeae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeae8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eeae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eeaec:
    // 0x2eeaec: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEAECu;
    {
        const bool branch_taken_0x2eeaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAECu;
        // 0x2eeaf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaec) {
            ctx->pc = 0x2EEB28u;
            goto label_2eeb28;
        }
    }
    ctx->pc = 0x2EEAF4u;
    // 0x2eeaf4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eeaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eeaf8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEAF8u;
    {
        const bool branch_taken_0x2eeaf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeaf8) {
            ctx->pc = 0x2EEAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEAF8u;
            // 0x2eeafc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEB14u;
            goto label_2eeb14;
        }
    }
    ctx->pc = 0x2EEB00u;
    // 0x2eeb00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eeb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eeb04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eeb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eeb08: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEB08u;
    {
        const bool branch_taken_0x2eeb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eeb08) {
            ctx->pc = 0x2EEB1Cu;
            goto label_2eeb1c;
        }
    }
    ctx->pc = 0x2EEB10u;
    // 0x2eeb10: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eeb14:
    // 0x2eeb14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eeb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eeb18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eeb1c:
    // 0x2eeb1c: 0xc0bbe28  jal         func_2EF8A0
    ctx->pc = 0x2EEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB24u);
    ctx->pc = 0x2EF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF8A0u, 0x2EEB1Cu, 0x2EEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB24u;
label_2eeb24:
    // 0x2eeb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eeb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eeb28:
    // 0x2eeb28: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB28u;
        // 0x2eeb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEB30u;
}
