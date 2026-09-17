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

// Function: sub_002584D8
// Address: 0x2584d8 - 0x258578
void sub_002584D8_0x2584d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002584D8_0x2584d8");
#endif

    switch (ctx->pc) {
        case 0x2584ecu: goto label_2584ec;
        case 0x2584fcu: goto label_2584fc;
        case 0x258550u: goto label_258550;
        case 0x258558u: goto label_258558;
        case 0x258568u: goto label_258568;
        default: break;
    }

    ctx->pc = 0x2584d8u;

    // 0x2584d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2584d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2584dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2584dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2584e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2584e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2584e4: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2584E4u;
    SET_GPR_U32(ctx, 31, 0x2584ECu);
    ctx->pc = 0x2584E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2584E4u;
    // 0x2584e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2584E4u, 0x2584ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584ECu;
label_2584ec:
    // 0x2584ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2584ECu;
    {
        const bool branch_taken_0x2584ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2584ec) {
            ctx->pc = 0x2584F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2584ECu;
            // 0x2584f0: 0x86030042  lh          $v1, 0x42($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258508u;
            goto label_258508;
        }
    }
    ctx->pc = 0x2584F4u;
    // 0x2584f4: 0xc08f10c  jal         func_23C430
    ctx->pc = 0x2584F4u;
    SET_GPR_U32(ctx, 31, 0x2584FCu);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x2584F4u, 0x2584FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584FCu;
label_2584fc:
    // 0x2584fc: 0x5050001b  beql        $v0, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2584FCu;
    {
        const bool branch_taken_0x2584fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2584fc) {
            ctx->pc = 0x258500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2584FCu;
            // 0x258500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25856Cu;
            goto label_25856c;
        }
    }
    ctx->pc = 0x258504u;
    // 0x258504: 0x86030042  lh          $v1, 0x42($s0)
    ctx->pc = 0x258504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_258508:
    // 0x258508: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x258508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x25850c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258510: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258510u;
    {
        const bool branch_taken_0x258510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258510u;
        // 0x258514: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258510) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258518u;
    // 0x258518: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258518u;
    {
        const bool branch_taken_0x258518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258518u;
        // 0x25851c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258518) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258520u;
    // 0x258520: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258520u;
    {
        const bool branch_taken_0x258520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258520u;
        // 0x258524: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258520) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258528u;
    // 0x258528: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258528u;
    {
        const bool branch_taken_0x258528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258528u;
        // 0x25852c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258528) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258530u;
    // 0x258530: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258530u;
    {
        const bool branch_taken_0x258530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258530u;
        // 0x258534: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258530) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258538u;
    // 0x258538: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258538u;
    {
        const bool branch_taken_0x258538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258538u;
        // 0x25853c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258538) {
            ctx->pc = 0x258548u;
            goto label_258548;
        }
    }
    ctx->pc = 0x258540u;
    // 0x258540: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258540u;
    {
        const bool branch_taken_0x258540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258540) {
            ctx->pc = 0x258550u;
            goto label_258550;
        }
    }
    ctx->pc = 0x258548u;
label_258548:
    // 0x258548: 0xc0960ec  jal         func_2583B0
    ctx->pc = 0x258548u;
    SET_GPR_U32(ctx, 31, 0x258550u);
    ctx->pc = 0x25854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258548u;
    // 0x25854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2583B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2583B0u, 0x258548u, 0x258550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258550u;
label_258550:
    // 0x258550: 0xc0b6f30  jal         func_2DBCC0
    ctx->pc = 0x258550u;
    SET_GPR_U32(ctx, 31, 0x258558u);
    ctx->pc = 0x2DBCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBCC0u, 0x258550u, 0x258558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258558u;
label_258558:
    // 0x258558: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x258558u;
    {
        const bool branch_taken_0x258558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258558) {
            ctx->pc = 0x25855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258558u;
            // 0x25855c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25856Cu;
            goto label_25856c;
        }
    }
    ctx->pc = 0x258560u;
    // 0x258560: 0xc09680c  jal         func_25A030
    ctx->pc = 0x258560u;
    SET_GPR_U32(ctx, 31, 0x258568u);
    ctx->pc = 0x258564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258560u;
    // 0x258564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A030u, 0x258560u, 0x258568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258568u;
label_258568:
    // 0x258568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25856c:
    // 0x25856c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x258570: 0x3e00008  jr          $ra
    ctx->pc = 0x258570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258570u;
        // 0x258574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258578u;
}
