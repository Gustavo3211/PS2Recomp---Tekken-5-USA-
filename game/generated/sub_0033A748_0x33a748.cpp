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

// Function: sub_0033A748
// Address: 0x33a748 - 0x33a7d8
void sub_0033A748_0x33a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A748_0x33a748");
#endif

    switch (ctx->pc) {
        case 0x33a75cu: goto label_33a75c;
        case 0x33a7a4u: goto label_33a7a4;
        default: break;
    }

    ctx->pc = 0x33a748u;

    // 0x33a748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a74c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a750: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a754: 0xc0ce8c2  jal         func_33A308
    ctx->pc = 0x33A754u;
    SET_GPR_U32(ctx, 31, 0x33A75Cu);
    ctx->pc = 0x33A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A754u;
    // 0x33a758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A308u, 0x33A754u, 0x33A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A75Cu;
label_33a75c:
    // 0x33a75c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33a75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a764: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A764u;
    {
        const bool branch_taken_0x33a764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A764u;
        // 0x33a768: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a764) {
            ctx->pc = 0x33A780u;
            goto label_33a780;
        }
    }
    ctx->pc = 0x33A76Cu;
    // 0x33a76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a774: 0x80cea08  j           func_33A820
    ctx->pc = 0x33A774u;
    ctx->pc = 0x33A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A774u;
    // 0x33a778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A820u, 0x33A774u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A77Cu;
    // 0x33a77c: 0x0  nop
    ctx->pc = 0x33a77cu;
    // NOP
label_33a780:
    // 0x33a780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a784: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a788: 0x3e00008  jr          $ra
    ctx->pc = 0x33A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A788u;
        // 0x33a78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A790u;
    // 0x33a790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a798: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a79c: 0xc0ce8e4  jal         func_33A390
    ctx->pc = 0x33A79Cu;
    SET_GPR_U32(ctx, 31, 0x33A7A4u);
    ctx->pc = 0x33A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A79Cu;
    // 0x33a7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A390u, 0x33A79Cu, 0x33A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A7A4u;
label_33a7a4:
    // 0x33a7a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33a7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A7ACu;
    {
        const bool branch_taken_0x33a7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7ACu;
        // 0x33a7b0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7ac) {
            ctx->pc = 0x33A7C8u;
            goto label_33a7c8;
        }
    }
    ctx->pc = 0x33A7B4u;
    // 0x33a7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a7b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a7bc: 0x80cea08  j           func_33A820
    ctx->pc = 0x33A7BCu;
    ctx->pc = 0x33A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A7BCu;
    // 0x33a7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A820u, 0x33A7BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A7C4u;
    // 0x33a7c4: 0x0  nop
    ctx->pc = 0x33a7c4u;
    // NOP
label_33a7c8:
    // 0x33a7c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a7cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7D0u;
        // 0x33a7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A7D8u;
}
