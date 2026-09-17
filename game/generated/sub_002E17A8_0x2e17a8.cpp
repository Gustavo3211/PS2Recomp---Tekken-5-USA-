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

// Function: sub_002E17A8
// Address: 0x2e17a8 - 0x2e1848
void sub_002E17A8_0x2e17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E17A8_0x2e17a8");
#endif

    switch (ctx->pc) {
        case 0x2e17b8u: goto label_2e17b8;
        default: break;
    }

    ctx->pc = 0x2e17a8u;

    // 0x2e17a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e17a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17ac: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2e17acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e17b0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2e17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2e17b4: 0x0  nop
    ctx->pc = 0x2e17b4u;
    // NOP
label_2e17b8:
    // 0x2e17b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e17b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e17bc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2e17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e17c0: 0x29090006  slti        $t1, $t0, 0x6
    ctx->pc = 0x2e17c0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e17c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e17c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17c8: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2e17cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e17d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E17D0u;
    {
        const bool branch_taken_0x2e17d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17D0u;
        // 0x2e17d4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17d0) {
            ctx->pc = 0x2E17ECu;
            goto label_2e17ec;
        }
    }
    ctx->pc = 0x2E17D8u;
    // 0x2e17d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e17dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e17dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e17e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E17E4u;
    {
        const bool branch_taken_0x2e17e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e17e4) {
            ctx->pc = 0x2E17F8u;
            goto label_2e17f8;
        }
    }
    ctx->pc = 0x2E17ECu;
label_2e17ec:
    // 0x2e17ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e17f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e17f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17f4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e17f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e17f8:
    // 0x2e17f8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E17F8u;
    {
        const bool branch_taken_0x2e17f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e17f8) {
            ctx->pc = 0x2E1834u;
            goto label_2e1834;
        }
    }
    ctx->pc = 0x2E1800u;
    // 0x2e1800: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e1804: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1804u;
    {
        const bool branch_taken_0x2e1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1804u;
        // 0x2e1808: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1804) {
            ctx->pc = 0x2E181Cu;
            goto label_2e181c;
        }
    }
    ctx->pc = 0x2E180Cu;
    // 0x2e180c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1810: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e1814: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1814u;
    {
        const bool branch_taken_0x2e1814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1814) {
            ctx->pc = 0x2E1818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1814u;
            // 0x2e1818: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E182Cu;
            goto label_2e182c;
        }
    }
    ctx->pc = 0x2E181Cu;
label_2e181c:
    // 0x2e181c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e181cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e1820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1824: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e1824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e1828: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e1828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e182c:
    // 0x2e182c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2e182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2e1830: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e1830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_2e1834:
    // 0x2e1834: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2E1834u;
    {
        const bool branch_taken_0x2e1834 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1834u;
        // 0x2e1838: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1834) {
            ctx->pc = 0x2E17B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e17b8;
        }
    }
    ctx->pc = 0x2E183Cu;
    // 0x2e183c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1844u;
    // 0x2e1844: 0x0  nop
    ctx->pc = 0x2e1844u;
    // NOP
    ctx->pc = 0x2e1848u;
}
