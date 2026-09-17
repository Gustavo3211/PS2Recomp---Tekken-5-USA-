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

// Function: sub_00226328
// Address: 0x226328 - 0x2263b8
void sub_00226328_0x226328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226328_0x226328");
#endif

    switch (ctx->pc) {
        case 0x226388u: goto label_226388;
        case 0x2263a4u: goto label_2263a4;
        default: break;
    }

    ctx->pc = 0x226328u;

    // 0x226328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22632c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22633c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22633Cu;
    {
        const bool branch_taken_0x22633c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x226340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22633Cu;
        // 0x226340: 0x102840  sll         $a1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22633c) {
            ctx->pc = 0x226388u;
            goto label_226388;
        }
    }
    ctx->pc = 0x226344u;
    // 0x226344: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x226348: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22634c: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x22634cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x226350: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226350u;
    {
        const bool branch_taken_0x226350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x226354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226350u;
        // 0x226354: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226350) {
            ctx->pc = 0x226378u;
            goto label_226378;
        }
    }
    ctx->pc = 0x226358u;
    // 0x226358: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22635c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x22635cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x226360: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x226360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x226364: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226364u;
    {
        const bool branch_taken_0x226364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226364u;
        // 0x226368: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226364) {
            ctx->pc = 0x226378u;
            goto label_226378;
        }
    }
    ctx->pc = 0x22636Cu;
    // 0x22636c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x226370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x226370u;
    {
        const bool branch_taken_0x226370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226370u;
        // 0x226374: 0x24447358  addiu       $a0, $v0, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226370) {
            ctx->pc = 0x22637Cu;
            goto label_22637c;
        }
    }
    ctx->pc = 0x226378u;
label_226378:
    // 0x226378: 0x24447348  addiu       $a0, $v0, 0x7348
    ctx->pc = 0x226378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29512));
label_22637c:
    // 0x22637c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x22637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226380: 0xc089754  jal         func_225D50
    ctx->pc = 0x226380u;
    SET_GPR_U32(ctx, 31, 0x226388u);
    ctx->pc = 0x226384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226380u;
    // 0x226384: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D50u, 0x226380u, 0x226388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226388u;
label_226388:
    // 0x226388: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x226388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22638c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22638cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226390: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x226390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226394: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x226394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x226398: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22639c: 0xc089754  jal         func_225D50
    ctx->pc = 0x22639Cu;
    SET_GPR_U32(ctx, 31, 0x2263A4u);
    ctx->pc = 0x2263A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22639Cu;
    // 0x2263a0: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225D50u, 0x22639Cu, 0x2263A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263A4u;
label_2263a4:
    // 0x2263a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2263a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2263a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2263a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2263ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2263ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ACu;
        // 0x2263b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2263B4u;
    // 0x2263b4: 0x0  nop
    ctx->pc = 0x2263b4u;
    // NOP
    ctx->pc = 0x2263b8u;
}
