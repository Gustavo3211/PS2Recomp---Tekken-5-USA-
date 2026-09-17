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

// Function: sub_0033C508
// Address: 0x33c508 - 0x33c598
void sub_0033C508_0x33c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C508_0x33c508");
#endif

    switch (ctx->pc) {
        case 0x33c54cu: goto label_33c54c;
        case 0x33c564u: goto label_33c564;
        case 0x33c574u: goto label_33c574;
        default: break;
    }

    ctx->pc = 0x33c508u;

    // 0x33c508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c51c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33c524: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33c524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c528: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33c52c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33c52cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c530: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33c534: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x33c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33c538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c53c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33c540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c544: 0xc0dd866  jal         func_376198
    ctx->pc = 0x33C544u;
    SET_GPR_U32(ctx, 31, 0x33C54Cu);
    ctx->pc = 0x33C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C544u;
    // 0x33c548: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376198u, 0x33C544u, 0x33C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C54Cu;
label_33c54c:
    // 0x33c54c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c554: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33c554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c55c: 0xc0cfa9c  jal         func_33EA70
    ctx->pc = 0x33C55Cu;
    SET_GPR_U32(ctx, 31, 0x33C564u);
    ctx->pc = 0x33C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C55Cu;
    // 0x33c560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA70u, 0x33C55Cu, 0x33C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C564u;
label_33c564:
    // 0x33c564: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33c568: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c56c: 0xc0cf1ca  jal         func_33C728
    ctx->pc = 0x33C56Cu;
    SET_GPR_U32(ctx, 31, 0x33C574u);
    ctx->pc = 0x33C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C56Cu;
    // 0x33c570: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C728u, 0x33C56Cu, 0x33C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C574u;
label_33c574:
    // 0x33c574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33c588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c58c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33c58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c590: 0x3e00008  jr          $ra
    ctx->pc = 0x33C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C590u;
        // 0x33c594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C598u;
}
