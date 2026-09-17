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

// Function: sub_002F7700
// Address: 0x2f7700 - 0x2f7758
void sub_002F7700_0x2f7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7700_0x2f7700");
#endif

    switch (ctx->pc) {
        case 0x2f7720u: goto label_2f7720;
        default: break;
    }

    ctx->pc = 0x2f7700u;

    // 0x2f7700: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f7700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f7704: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2f7704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f7708: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2f7708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2f770c: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2f770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964840)));
    // 0x2f7710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f7710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7714: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2f7714u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7718: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2f7718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f771c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f7720:
    // 0x2f7720: 0xa41016  dsrlv       $v0, $a0, $a1
    ctx->pc = 0x2f7720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x2f7724: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x2f7724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2f7728: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7728u;
    {
        const bool branch_taken_0x2f7728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7728u;
        // 0x2f772c: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7728) {
            ctx->pc = 0x2F7738u;
            goto label_2f7738;
        }
    }
    ctx->pc = 0x2F7730u;
    // 0x2f7730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7730u;
    {
        const bool branch_taken_0x2f7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7730u;
        // 0x2f7734: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7730) {
            ctx->pc = 0x2F774Cu;
            goto label_2f774c;
        }
    }
    ctx->pc = 0x2F7738u;
label_2f7738:
    // 0x2f7738: 0x0  nop
    ctx->pc = 0x2f7738u;
    // NOP
    // 0x2f773c: 0x0  nop
    ctx->pc = 0x2f773cu;
    // NOP
    // 0x2f7740: 0x0  nop
    ctx->pc = 0x2f7740u;
    // NOP
    // 0x2f7744: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F7744u;
    {
        const bool branch_taken_0x2f7744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7744) {
            ctx->pc = 0x2F7748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7744u;
            // 0x2f7748: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7720;
        }
    }
    ctx->pc = 0x2F774Cu;
label_2f774c:
    // 0x2f774c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F774Cu;
        // 0x2f7750: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F774Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7754u;
    // 0x2f7754: 0x0  nop
    ctx->pc = 0x2f7754u;
    // NOP
    ctx->pc = 0x2f7758u;
}
