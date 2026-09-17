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

// Function: sub_0036EFB0
// Address: 0x36efb0 - 0x36f028
void sub_0036EFB0_0x36efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EFB0_0x36efb0");
#endif

    switch (ctx->pc) {
        case 0x36f01cu: goto label_36f01c;
        default: break;
    }

    ctx->pc = 0x36efb0u;

    // 0x36efb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36efb4: 0x24870074  addiu       $a3, $a0, 0x74
    ctx->pc = 0x36efb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x36efb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36efbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x36efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36efc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EFC0u;
    {
        const bool branch_taken_0x36efc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFC0u;
        // 0x36efc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36efc0) {
            ctx->pc = 0x36EFD8u;
            goto label_36efd8;
        }
    }
    ctx->pc = 0x36EFC8u;
    // 0x36efc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36efcc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x36efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x36efd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EFD0u;
    {
        const bool branch_taken_0x36efd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36efd0) {
            ctx->pc = 0x36EFE4u;
            goto label_36efe4;
        }
    }
    ctx->pc = 0x36EFD8u;
label_36efd8:
    // 0x36efd8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x36efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x36efdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36efdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efe0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x36efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_36efe4:
    // 0x36efe4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x36EFE4u;
    {
        const bool branch_taken_0x36efe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFE4u;
        // 0x36efe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36efe4) {
            ctx->pc = 0x36F020u;
            goto label_36f020;
        }
    }
    ctx->pc = 0x36EFECu;
    // 0x36efec: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x36efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36eff0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x36EFF0u;
    {
        const bool branch_taken_0x36eff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eff0) {
            ctx->pc = 0x36EFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EFF0u;
            // 0x36eff4: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F00Cu;
            goto label_36f00c;
        }
    }
    ctx->pc = 0x36EFF8u;
    // 0x36eff8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x36eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x36effc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x36effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x36f000: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F000u;
    {
        const bool branch_taken_0x36f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f000) {
            ctx->pc = 0x36F014u;
            goto label_36f014;
        }
    }
    ctx->pc = 0x36F008u;
    // 0x36f008: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x36f008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_36f00c:
    // 0x36f00c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f010: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x36f010u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_36f014:
    // 0x36f014: 0xc0b8c8e  jal         func_2E3238
    ctx->pc = 0x36F014u;
    SET_GPR_U32(ctx, 31, 0x36F01Cu);
    ctx->pc = 0x2E3238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3238u, 0x36F014u, 0x36F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F01Cu;
label_36f01c:
    // 0x36f01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36f020:
    // 0x36f020: 0x3e00008  jr          $ra
    ctx->pc = 0x36F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F020u;
        // 0x36f024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F028u;
}
