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

// Function: sub_00304720
// Address: 0x304720 - 0x304770
void sub_00304720_0x304720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304720_0x304720");
#endif

    switch (ctx->pc) {
        case 0x304744u: goto label_304744;
        case 0x30474cu: goto label_30474c;
        case 0x30475cu: goto label_30475c;
        default: break;
    }

    ctx->pc = 0x304720u;

    // 0x304720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30472c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x304730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304734: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304734u;
    {
        const bool branch_taken_0x304734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304734u;
        // 0x304738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304734) {
            ctx->pc = 0x30475Cu;
            goto label_30475c;
        }
    }
    ctx->pc = 0x30473Cu;
    // 0x30473c: 0xc0c82ca  jal         func_320B28
    ctx->pc = 0x30473Cu;
    SET_GPR_U32(ctx, 31, 0x304744u);
    ctx->pc = 0x320B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B28u, 0x30473Cu, 0x304744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304744u;
label_304744:
    // 0x304744: 0xc0c82ca  jal         func_320B28
    ctx->pc = 0x304744u;
    SET_GPR_U32(ctx, 31, 0x30474Cu);
    ctx->pc = 0x304748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304744u;
    // 0x304748: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B28u, 0x304744u, 0x30474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30474Cu;
label_30474c:
    // 0x30474c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304754: 0xc0c82a6  jal         func_320A98
    ctx->pc = 0x304754u;
    SET_GPR_U32(ctx, 31, 0x30475Cu);
    ctx->pc = 0x304758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304754u;
    // 0x304758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A98u, 0x304754u, 0x30475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30475Cu;
label_30475c:
    // 0x30475c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30475cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304760: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304764: 0x3e00008  jr          $ra
    ctx->pc = 0x304764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304764u;
        // 0x304768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30476Cu;
    // 0x30476c: 0x0  nop
    ctx->pc = 0x30476cu;
    // NOP
    ctx->pc = 0x304770u;
}
