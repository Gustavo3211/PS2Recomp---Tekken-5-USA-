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

// Function: sub_002E1848
// Address: 0x2e1848 - 0x2e18e8
void sub_002E1848_0x2e1848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1848_0x2e1848");
#endif

    switch (ctx->pc) {
        case 0x2e1858u: goto label_2e1858;
        default: break;
    }

    ctx->pc = 0x2e1848u;

    // 0x2e1848: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e1848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e184c: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x2e184cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1850: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2e1850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2e1854: 0x0  nop
    ctx->pc = 0x2e1854u;
    // NOP
label_2e1858:
    // 0x2e1858: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e185c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2e185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e1860: 0x29090006  slti        $t1, $t0, 0x6
    ctx->pc = 0x2e1860u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e1864: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e1864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1868: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2e186c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1870: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1870u;
    {
        const bool branch_taken_0x2e1870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1870u;
        // 0x2e1874: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1870) {
            ctx->pc = 0x2E188Cu;
            goto label_2e188c;
        }
    }
    ctx->pc = 0x2E1878u;
    // 0x2e1878: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e187c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e187cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1880: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e1884: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1884u;
    {
        const bool branch_taken_0x2e1884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1884) {
            ctx->pc = 0x2E1898u;
            goto label_2e1898;
        }
    }
    ctx->pc = 0x2E188Cu;
label_2e188c:
    // 0x2e188c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e188cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e1890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1894: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e1894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e1898:
    // 0x2e1898: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1898u;
    {
        const bool branch_taken_0x2e1898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1898) {
            ctx->pc = 0x2E18D4u;
            goto label_2e18d4;
        }
    }
    ctx->pc = 0x2E18A0u;
    // 0x2e18a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e18a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E18A4u;
    {
        const bool branch_taken_0x2e18a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18A4u;
        // 0x2e18a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18a4) {
            ctx->pc = 0x2E18BCu;
            goto label_2e18bc;
        }
    }
    ctx->pc = 0x2E18ACu;
    // 0x2e18ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e18acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e18b0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e18b4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E18B4u;
    {
        const bool branch_taken_0x2e18b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e18b4) {
            ctx->pc = 0x2E18B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18B4u;
            // 0x2e18b8: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E18CCu;
            goto label_2e18cc;
        }
    }
    ctx->pc = 0x2E18BCu;
label_2e18bc:
    // 0x2e18bc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e18c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e18c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18c4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e18c8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e18cc:
    // 0x2e18cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2e18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2e18d0: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_2e18d4:
    // 0x2e18d4: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2E18D4u;
    {
        const bool branch_taken_0x2e18d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18D4u;
        // 0x2e18d8: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18d4) {
            ctx->pc = 0x2E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1858;
        }
    }
    ctx->pc = 0x2E18DCu;
    // 0x2e18dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E18DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E18DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E18E4u;
    // 0x2e18e4: 0x0  nop
    ctx->pc = 0x2e18e4u;
    // NOP
    ctx->pc = 0x2e18e8u;
}
