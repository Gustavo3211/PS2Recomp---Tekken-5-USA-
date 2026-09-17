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

// Function: sub_002E4728
// Address: 0x2e4728 - 0x2e47c0
void sub_002E4728_0x2e4728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4728_0x2e4728");
#endif

    switch (ctx->pc) {
        case 0x2e4760u: goto label_2e4760;
        case 0x2e478cu: goto label_2e478c;
        case 0x2e47a4u: goto label_2e47a4;
        default: break;
    }

    ctx->pc = 0x2e4728u;

    // 0x2e4728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e472c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e4730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4738: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e4738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e473c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e473cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4740: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e4740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4744: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e4744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e4748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e474c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2e474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2e4750: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4750u;
    {
        const bool branch_taken_0x2e4750 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4750u;
        // 0x2e4754: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4750) {
            ctx->pc = 0x2E4784u;
            goto label_2e4784;
        }
    }
    ctx->pc = 0x2E4758u;
    // 0x2e4758: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2e4758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2e475c: 0x0  nop
    ctx->pc = 0x2e475cu;
    // NOP
label_2e4760:
    // 0x2e4760: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x2e4760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2e4764: 0x1050000f  beq         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4764u;
    {
        const bool branch_taken_0x2e4764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4764u;
        // 0x2e4768: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4764) {
            ctx->pc = 0x2E47A4u;
            goto label_2e47a4;
        }
    }
    ctx->pc = 0x2E476Cu;
    // 0x2e476c: 0x0  nop
    ctx->pc = 0x2e476cu;
    // NOP
    // 0x2e4770: 0x0  nop
    ctx->pc = 0x2e4770u;
    // NOP
    // 0x2e4774: 0x0  nop
    ctx->pc = 0x2e4774u;
    // NOP
    // 0x2e4778: 0x0  nop
    ctx->pc = 0x2e4778u;
    // NOP
    // 0x2e477c: 0x1c60fff8  bgtz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E477Cu;
    {
        const bool branch_taken_0x2e477c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E477Cu;
        // 0x2e4780: 0x8ca5001c  lw          $a1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e477c) {
            ctx->pc = 0x2E4760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4760;
        }
    }
    ctx->pc = 0x2E4784u;
label_2e4784:
    // 0x2e4784: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E4784u;
    SET_GPR_U32(ctx, 31, 0x2E478Cu);
    ctx->pc = 0x2E4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4784u;
    // 0x2e4788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E4784u, 0x2E478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E478Cu;
label_2e478c:
    // 0x2e478c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4794: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e4794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4798: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e4798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e479c: 0xc0b91f8  jal         func_2E47E0
    ctx->pc = 0x2E479Cu;
    SET_GPR_U32(ctx, 31, 0x2E47A4u);
    ctx->pc = 0x2E47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E479Cu;
    // 0x2e47a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E47E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E47E0u, 0x2E479Cu, 0x2E47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47A4u;
label_2e47a4:
    // 0x2e47a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e47a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e47a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e47a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e47ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e47acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e47b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e47b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e47b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e47b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e47b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E47B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47B8u;
        // 0x2e47bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E47B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E47C0u;
}
