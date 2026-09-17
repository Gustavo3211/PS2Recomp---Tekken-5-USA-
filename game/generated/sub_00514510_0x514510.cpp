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

// Function: sub_00514510
// Address: 0x514510 - 0x514630
void sub_00514510_0x514510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514510_0x514510");
#endif

    switch (ctx->pc) {
        case 0x5145d0u: goto label_5145d0;
        default: break;
    }

    ctx->pc = 0x514510u;

    // 0x514510: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x514510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x514514: 0x2468aa3c  addiu       $t0, $v1, -0x55C4
    ctx->pc = 0x514514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945340));
    // 0x514518: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x514518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58AA3Cu));
    // 0x51451c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51451Cu;
    {
        const bool branch_taken_0x51451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51451Cu;
        // 0x514520: 0x3c020090  lui         $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51451c) {
            ctx->pc = 0x51452Cu;
            goto label_51452c;
        }
    }
    ctx->pc = 0x514524u;
    // 0x514524: 0x24424500  addiu       $v0, $v0, 0x4500
    ctx->pc = 0x514524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
    // 0x514528: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x514528u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_51452c:
    // 0x51452c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x51452Cu;
    {
        const bool branch_taken_0x51452c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51452c) {
            ctx->pc = 0x514544u;
            goto label_514544;
        }
    }
    ctx->pc = 0x514534u;
    // 0x514534: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x514534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x514538: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x514538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x51453c: 0x54e20004  bnel        $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51453Cu;
    {
        const bool branch_taken_0x51453c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x51453c) {
            ctx->pc = 0x514540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x51453Cu;
            // 0x514540: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514550u;
            goto label_514550;
        }
    }
    ctx->pc = 0x514544u;
label_514544:
    // 0x514544: 0x3e00008  jr          $ra
    ctx->pc = 0x514544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514544u;
        // 0x514548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51454Cu;
    // 0x51454c: 0x0  nop
    ctx->pc = 0x51454cu;
    // NOP
label_514550:
    // 0x514550: 0x248300ff  addiu       $v1, $a0, 0xFF
    ctx->pc = 0x514550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x514554: 0x244aaa40  addiu       $t2, $v0, -0x55C0
    ctx->pc = 0x514554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x514558: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x514558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x51455c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x51455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x514560: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x514560u;
    {
        const bool branch_taken_0x514560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514560u;
        // 0x514564: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514560) {
            ctx->pc = 0x5145C0u;
            goto label_5145c0;
        }
    }
    ctx->pc = 0x514568u;
    // 0x514568: 0x24e30100  addiu       $v1, $a3, 0x100
    ctx->pc = 0x514568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x51456c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x51456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x514570: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x514570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x514574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x514574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514578: 0x8c44d588  lw          $a0, -0x2A78($v0)
    ctx->pc = 0x514578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D588u));
    // 0x51457c: 0x3c060090  lui         $a2, 0x90
    ctx->pc = 0x51457cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)144 << 16));
    // 0x514580: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x514580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x514584: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x514584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x514588: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x514588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x51458c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x51458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x514590: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x514590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x514594: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x514594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x514598: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x514598u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x51459c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x51459cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x5145a0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x5145a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5145a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x5145a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5145a8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x5145a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x5145ac: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x5145acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5145b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x5145b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5145b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x5145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x5145b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x5145bc: 0xacc24400  sw          $v0, 0x4400($a2)
    ctx->pc = 0x5145bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 17408), GPR_U32(ctx, 2));
label_5145c0:
    // 0x5145c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x5145c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5145c4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x5145c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5145c8: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x5145c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x5145cc: 0x0  nop
    ctx->pc = 0x5145ccu;
    // NOP
label_5145d0:
    // 0x5145d0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x5145d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5145d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x5145d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x5145d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x5145D8u;
    {
        const bool branch_taken_0x5145d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5145d8) {
            ctx->pc = 0x5145DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5145D8u;
            // 0x5145dc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514618u;
            goto label_514618;
        }
    }
    ctx->pc = 0x5145E0u;
    // 0x5145e0: 0x54a90005  bnel        $a1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5145E0u;
    {
        const bool branch_taken_0x5145e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x5145e0) {
            ctx->pc = 0x5145E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5145E0u;
            // 0x5145e4: 0xa91023  subu        $v0, $a1, $t1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5145F8u;
            goto label_5145f8;
        }
    }
    ctx->pc = 0x5145E8u;
    // 0x5145e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x5145e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5145ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5145ECu;
    {
        const bool branch_taken_0x5145ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5145ECu;
        // 0x5145f0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5145ec) {
            ctx->pc = 0x514608u;
            goto label_514608;
        }
    }
    ctx->pc = 0x5145F4u;
    // 0x5145f4: 0x0  nop
    ctx->pc = 0x5145f4u;
    // NOP
label_5145f8:
    // 0x5145f8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x5145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x5145fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x5145fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x514600: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x514600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x514604: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x514604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
label_514608:
    // 0x514608: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x514608u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x51460c: 0x3e00008  jr          $ra
    ctx->pc = 0x51460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51460Cu;
        // 0x514610: 0x24820100  addiu       $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514614u;
    // 0x514614: 0x0  nop
    ctx->pc = 0x514614u;
    // NOP
label_514618:
    // 0x514618: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x514618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51461c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x51461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x514620: 0x1482ffeb  bne         $a0, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x514620u;
    {
        const bool branch_taken_0x514620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x514624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514620u;
        // 0x514624: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514620) {
            ctx->pc = 0x5145D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5145d0;
        }
    }
    ctx->pc = 0x514628u;
    // 0x514628: 0x3e00008  jr          $ra
    ctx->pc = 0x514628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514628u;
        // 0x51462c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514630u;
}
