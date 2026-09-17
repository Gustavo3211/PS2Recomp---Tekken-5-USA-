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

// Function: sub_00511318
// Address: 0x511318 - 0x511390
void sub_00511318_0x511318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511318_0x511318");
#endif

    switch (ctx->pc) {
        case 0x511350u: goto label_511350;
        case 0x511358u: goto label_511358;
        default: break;
    }

    ctx->pc = 0x511318u;

    // 0x511318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x511318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51131c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x51131cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x511320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x511320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x511324: 0x48880  sll         $s1, $a0, 2
    ctx->pc = 0x511324u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x511328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x511328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x51132c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x51132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x511330: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x511330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x511334: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x511334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x511338: 0x8e103140  lw          $s0, 0x3140($s0)
    ctx->pc = 0x511338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12608)));
    // 0x51133c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x51133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x511340: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x511340u;
    {
        const bool branch_taken_0x511340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x511344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511340u;
        // 0x511344: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511340) {
            ctx->pc = 0x511378u;
            goto label_511378;
        }
    }
    ctx->pc = 0x511348u;
    // 0x511348: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x511348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51134c: 0x0  nop
    ctx->pc = 0x51134cu;
    // NOP
label_511350:
    // 0x511350: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x511350u;
    SET_GPR_U32(ctx, 31, 0x511358u);
    ctx->pc = 0x511354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511350u;
    // 0x511354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x511350u, 0x511358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511358u;
label_511358:
    // 0x511358: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x511358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x51135c: 0x1492fffc  bne         $a0, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x51135Cu;
    {
        const bool branch_taken_0x51135c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x511360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51135Cu;
        // 0x511360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51135c) {
            ctx->pc = 0x511350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511350;
        }
    }
    ctx->pc = 0x511364u;
    // 0x511364: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x511364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x511368: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x511368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51136c: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x51136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x511370: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x511370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x511374: 0xac4340c0  sw          $v1, 0x40C0($v0)
    ctx->pc = 0x511374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 3));
label_511378:
    // 0x511378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51137c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x51137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x511380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x511384: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x511384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x511388: 0x3e00008  jr          $ra
    ctx->pc = 0x511388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511388u;
        // 0x51138c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511390u;
}
