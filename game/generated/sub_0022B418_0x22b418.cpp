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

// Function: sub_0022B418
// Address: 0x22b418 - 0x22b498
void sub_0022B418_0x22b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B418_0x22b418");
#endif

    switch (ctx->pc) {
        case 0x22b440u: goto label_22b440;
        case 0x22b480u: goto label_22b480;
        default: break;
    }

    ctx->pc = 0x22b418u;

    // 0x22b418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b41c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b42c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b438: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B438u;
    SET_GPR_U32(ctx, 31, 0x22B440u);
    ctx->pc = 0x22B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B438u;
    // 0x22b43c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B438u, 0x22B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B440u;
label_22b440:
    // 0x22b440: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b444: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b44c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b450: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b454: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B454u;
    {
        const bool branch_taken_0x22b454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B454u;
        // 0x22b458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b454) {
            ctx->pc = 0x22B46Cu;
            goto label_22b46c;
        }
    }
    ctx->pc = 0x22B45Cu;
    // 0x22b45c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b460: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b464: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B464u;
    {
        const bool branch_taken_0x22b464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b464) {
            ctx->pc = 0x22B478u;
            goto label_22b478;
        }
    }
    ctx->pc = 0x22B46Cu;
label_22b46c:
    // 0x22b46c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b474: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b478:
    // 0x22b478: 0xc0b8a1e  jal         func_2E2878
    ctx->pc = 0x22B478u;
    SET_GPR_U32(ctx, 31, 0x22B480u);
    ctx->pc = 0x2E2878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2878u, 0x22B478u, 0x22B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B480u;
label_22b480:
    // 0x22b480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b48c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B48Cu;
        // 0x22b490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B494u;
    // 0x22b494: 0x0  nop
    ctx->pc = 0x22b494u;
    // NOP
    ctx->pc = 0x22b498u;
}
