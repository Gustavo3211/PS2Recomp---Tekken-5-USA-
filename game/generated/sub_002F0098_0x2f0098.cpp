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

// Function: sub_002F0098
// Address: 0x2f0098 - 0x2f0118
void sub_002F0098_0x2f0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0098_0x2f0098");
#endif

    switch (ctx->pc) {
        case 0x2f00b0u: goto label_2f00b0;
        default: break;
    }

    ctx->pc = 0x2f0098u;

    // 0x2f0098: 0x8c870104  lw          $a3, 0x104($a0)
    ctx->pc = 0x2f0098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f009c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f009cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00a0: 0x18e0001a  blez        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F00A0u;
    {
        const bool branch_taken_0x2f00a0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00A0u;
        // 0x2f00a4: 0xac800108  sw          $zero, 0x108($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00a0) {
            ctx->pc = 0x2F010Cu;
            goto label_2f010c;
        }
    }
    ctx->pc = 0x2F00A8u;
    // 0x2f00a8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2f00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f00ac: 0x0  nop
    ctx->pc = 0x2f00acu;
    // NOP
label_2f00b0:
    // 0x2f00b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f00b4: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f00b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f00bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F00BCu;
    {
        const bool branch_taken_0x2f00bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00BCu;
        // 0x2f00c0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00bc) {
            ctx->pc = 0x2F00D8u;
            goto label_2f00d8;
        }
    }
    ctx->pc = 0x2F00C4u;
    // 0x2f00c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f00c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f00c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f00d0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F00D0u;
    {
        const bool branch_taken_0x2f00d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f00d0) {
            ctx->pc = 0x2F00D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F00D0u;
            // 0x2f00d4: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F00ECu;
            goto label_2f00ec;
        }
    }
    ctx->pc = 0x2F00D8u;
label_2f00d8:
    // 0x2f00d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f00dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f00dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f00e4: 0x8c870104  lw          $a3, 0x104($a0)
    ctx->pc = 0x2f00e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f00e8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2f00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x54u));
label_2f00ec:
    // 0x2f00ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F00ECu;
    {
        const bool branch_taken_0x2f00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00ECu;
        // 0x2f00f0: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00ec) {
            ctx->pc = 0x2F0104u;
            goto label_2f0104;
        }
    }
    ctx->pc = 0x2F00F4u;
    // 0x2f00f4: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x2f00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2f00f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f00fc: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x2f00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x2f0100: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2f0100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2f0104:
    // 0x2f0104: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2F0104u;
    {
        const bool branch_taken_0x2f0104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0104u;
        // 0x2f0108: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0104) {
            ctx->pc = 0x2F00B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f00b0;
        }
    }
    ctx->pc = 0x2F010Cu;
label_2f010c:
    // 0x2f010c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0114u;
    // 0x2f0114: 0x0  nop
    ctx->pc = 0x2f0114u;
    // NOP
    ctx->pc = 0x2f0118u;
}
