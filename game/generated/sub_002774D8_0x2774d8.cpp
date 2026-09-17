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

// Function: sub_002774D8
// Address: 0x2774d8 - 0x2775c0
void sub_002774D8_0x2774d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002774D8_0x2774d8");
#endif

    switch (ctx->pc) {
        case 0x277514u: goto label_277514;
        case 0x277534u: goto label_277534;
        default: break;
    }

    ctx->pc = 0x2774d8u;

    // 0x2774d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2774d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2774dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2774dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2774e0: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2774e4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2774e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2774e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2774E8u;
    {
        const bool branch_taken_0x2774e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2774ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774E8u;
        // 0x2774ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774e8) {
            ctx->pc = 0x2774F8u;
            goto label_2774f8;
        }
    }
    ctx->pc = 0x2774F0u;
    // 0x2774f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2774F0u;
    {
        const bool branch_taken_0x2774f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2774F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774F0u;
        // 0x2774f4: 0xaf80ca70  sw          $zero, -0x3590($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774f0) {
            ctx->pc = 0x277534u;
            goto label_277534;
        }
    }
    ctx->pc = 0x2774F8u;
label_2774f8:
    // 0x2774f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2774f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2774fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2774fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277500: 0xaf84ca70  sw          $a0, -0x3590($gp)
    ctx->pc = 0x277500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953584), GPR_U32(ctx, 4));
    // 0x277504: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x277504u;
    {
        const bool branch_taken_0x277504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x277508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277504u;
        // 0x277508: 0xac403360  sw          $zero, 0x3360($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 13152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277504) {
            ctx->pc = 0x277520u;
            goto label_277520;
        }
    }
    ctx->pc = 0x27750Cu;
    // 0x27750c: 0xc09dc48  jal         func_277120
    ctx->pc = 0x27750Cu;
    SET_GPR_U32(ctx, 31, 0x277514u);
    ctx->pc = 0x277510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27750Cu;
    // 0x277510: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277120u, 0x27750Cu, 0x277514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277514u;
label_277514:
    // 0x277514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x277514u;
    {
        const bool branch_taken_0x277514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277514u;
        // 0x277518: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277514) {
            ctx->pc = 0x277538u;
            goto label_277538;
        }
    }
    ctx->pc = 0x27751Cu;
    // 0x27751c: 0x0  nop
    ctx->pc = 0x27751cu;
    // NOP
label_277520:
    // 0x277520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277524: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277524u;
    {
        const bool branch_taken_0x277524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x277528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277524u;
        // 0x277528: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277524) {
            ctx->pc = 0x277538u;
            goto label_277538;
        }
    }
    ctx->pc = 0x27752Cu;
    // 0x27752c: 0xc09dcda  jal         func_277368
    ctx->pc = 0x27752Cu;
    SET_GPR_U32(ctx, 31, 0x277534u);
    ctx->pc = 0x277368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277368u, 0x27752Cu, 0x277534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277534u;
label_277534:
    // 0x277534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277538:
    // 0x277538: 0x3e00008  jr          $ra
    ctx->pc = 0x277538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277538u;
        // 0x27753c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277540u;
    // 0x277540: 0x8f82ca70  lw          $v0, -0x3590($gp)
    ctx->pc = 0x277540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x277544: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x277544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x277548: 0x3e00008  jr          $ra
    ctx->pc = 0x277548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277548u;
        // 0x27754c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277550u;
    // 0x277550: 0x8f82ca70  lw          $v0, -0x3590($gp)
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x277554: 0x3e00008  jr          $ra
    ctx->pc = 0x277554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277554u;
        // 0x277558: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27755Cu;
    // 0x27755c: 0x0  nop
    ctx->pc = 0x27755cu;
    // NOP
    // 0x277560: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x277560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x277564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x277564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277568: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27756c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27756cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x277574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277578: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27757c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x277580: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x277580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x277584: 0x8cc6acc8  lw          $a2, -0x5338($a2)
    ctx->pc = 0x277584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294945992)));
    // 0x277588: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x277588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27758c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x27758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x277590: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x277590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x277594: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x277594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277598: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x277598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27759c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x27759cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2775a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2775a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2775a4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2775A4u;
    {
        const bool branch_taken_0x2775a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2775A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775A4u;
        // 0x2775a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775a4) {
            ctx->pc = 0x2775B8u;
            goto label_2775b8;
        }
    }
    ctx->pc = 0x2775ACu;
    // 0x2775ac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2775acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2775b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2775b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2775b4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2775b4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2775b8:
    // 0x2775b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2775B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775B8u;
        // 0x2775bc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775C0u;
}
