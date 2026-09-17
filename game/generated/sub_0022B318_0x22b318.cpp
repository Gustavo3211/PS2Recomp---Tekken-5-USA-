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

// Function: sub_0022B318
// Address: 0x22b318 - 0x22b398
void sub_0022B318_0x22b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B318_0x22b318");
#endif

    switch (ctx->pc) {
        case 0x22b340u: goto label_22b340;
        case 0x22b380u: goto label_22b380;
        default: break;
    }

    ctx->pc = 0x22b318u;

    // 0x22b318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b31c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b338: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B338u;
    SET_GPR_U32(ctx, 31, 0x22B340u);
    ctx->pc = 0x22B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B338u;
    // 0x22b33c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B338u, 0x22B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B340u;
label_22b340:
    // 0x22b340: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b344: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b34c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b350: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b354: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B354u;
    {
        const bool branch_taken_0x22b354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B354u;
        // 0x22b358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b354) {
            ctx->pc = 0x22B36Cu;
            goto label_22b36c;
        }
    }
    ctx->pc = 0x22B35Cu;
    // 0x22b35c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b360: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b364: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B364u;
    {
        const bool branch_taken_0x22b364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b364) {
            ctx->pc = 0x22B378u;
            goto label_22b378;
        }
    }
    ctx->pc = 0x22B36Cu;
label_22b36c:
    // 0x22b36c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b374: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b378:
    // 0x22b378: 0xc0b8a02  jal         func_2E2808
    ctx->pc = 0x22B378u;
    SET_GPR_U32(ctx, 31, 0x22B380u);
    ctx->pc = 0x2E2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2808u, 0x22B378u, 0x22B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B380u;
label_22b380:
    // 0x22b380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b38c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B38Cu;
        // 0x22b390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B394u;
    // 0x22b394: 0x0  nop
    ctx->pc = 0x22b394u;
    // NOP
    ctx->pc = 0x22b398u;
}
