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

// Function: sub_00101310
// Address: 0x101310 - 0x101368
void sub_00101310_0x101310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101310_0x101310");
#endif

    switch (ctx->pc) {
        case 0x101338u: goto label_101338;
        default: break;
    }

    ctx->pc = 0x101310u;

    // 0x101310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101314: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x101314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x101318: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10131c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101320: 0x8c6583c0  lw          $a1, -0x7C40($v1)
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x101324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101328: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x10132c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x101330: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x101330u;
    SET_GPR_U32(ctx, 31, 0x101338u);
    ctx->pc = 0x101334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101330u;
    // 0x101334: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x101330u, 0x101338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101338u;
label_101338:
    // 0x101338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10133c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10133Cu;
    {
        const bool branch_taken_0x10133c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10133c) {
            ctx->pc = 0x101350u;
            goto label_101350;
        }
    }
    ctx->pc = 0x101344u;
    // 0x101344: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x101348: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10134c: 0x8c84d350  lw          $a0, -0x2CB0($a0)
    ctx->pc = 0x10134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955856)));
label_101350:
    // 0x101350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101354: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x101354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101358: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x101358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10135c: 0x3e00008  jr          $ra
    ctx->pc = 0x10135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10135Cu;
        // 0x101360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101364u;
    // 0x101364: 0x0  nop
    ctx->pc = 0x101364u;
    // NOP
    ctx->pc = 0x101368u;
}
