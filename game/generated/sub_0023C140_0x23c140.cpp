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

// Function: sub_0023C140
// Address: 0x23c140 - 0x23c1b0
void sub_0023C140_0x23c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C140_0x23c140");
#endif

    switch (ctx->pc) {
        case 0x23c168u: goto label_23c168;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a4u: goto label_23c1a4;
        default: break;
    }

    ctx->pc = 0x23c140u;

    // 0x23c140: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c148: 0x2442e110  addiu       $v0, $v0, -0x1EF0
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
    // 0x23c14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c150: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c154: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x23c154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AE118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE118u, _value); } while (0);
    // 0x23c158: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23c158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AE114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE114u, _value); } while (0);
    // 0x23c15c: 0x2463e130  addiu       $v1, $v1, -0x1ED0
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959408));
    // 0x23c160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c168:
    // 0x23c168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c16c: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C16Cu;
    {
        const bool branch_taken_0x23c16c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23c16c) {
            ctx->pc = 0x23C170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C16Cu;
            // 0x23c170: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C184u;
            goto label_23c184;
        }
    }
    ctx->pc = 0x23C174u;
    // 0x23c174: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23c178: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C178u;
    {
        const bool branch_taken_0x23c178 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23c178) {
            ctx->pc = 0x23C17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C178u;
            // 0x23c17c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C184u;
            goto label_23c184;
        }
    }
    ctx->pc = 0x23C180u;
    // 0x23c180: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x23c180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23c184:
    // 0x23c184: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23c188: 0x2882001e  slti        $v0, $a0, 0x1E
    ctx->pc = 0x23c188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x23c18c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23C18Cu;
    {
        const bool branch_taken_0x23c18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C18Cu;
        // 0x23c190: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c18c) {
            ctx->pc = 0x23C168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c168;
        }
    }
    ctx->pc = 0x23C194u;
    // 0x23c194: 0xc08aff2  jal         func_22BFC8
    ctx->pc = 0x23C194u;
    SET_GPR_U32(ctx, 31, 0x23C19Cu);
    ctx->pc = 0x23C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C194u;
    // 0x23c198: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFC8u, 0x23C194u, 0x23C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C19Cu;
label_23c19c:
    // 0x23c19c: 0xc08b174  jal         func_22C5D0
    ctx->pc = 0x23C19Cu;
    SET_GPR_U32(ctx, 31, 0x23C1A4u);
    ctx->pc = 0x22C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C5D0u, 0x23C19Cu, 0x23C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1A4u;
label_23c1a4:
    // 0x23c1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A8u;
        // 0x23c1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C1B0u;
}
