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

// Function: sub_001F1B90
// Address: 0x1f1b90 - 0x1f1c70
void sub_001F1B90_0x1f1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B90_0x1f1b90");
#endif

    switch (ctx->pc) {
        case 0x1f1bb0u: goto label_1f1bb0;
        case 0x1f1bf8u: goto label_1f1bf8;
        case 0x1f1c28u: goto label_1f1c28;
        default: break;
    }

    ctx->pc = 0x1f1b90u;

    // 0x1f1b90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1b94: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f1b98: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x1f1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f1b9c: 0x24678ad0  addiu       $a3, $v1, -0x7530
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937296));
    // 0x1f1ba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ba4: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x1f1ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1f1ba8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1f1ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1bac: 0x0  nop
    ctx->pc = 0x1f1bacu;
    // NOP
label_1f1bb0:
    // 0x1f1bb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1BB0u;
    {
        const bool branch_taken_0x1f1bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB0u;
        // 0x1f1bb4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bb0) {
            ctx->pc = 0x1F1BD0u;
            goto label_1f1bd0;
        }
    }
    ctx->pc = 0x1F1BB8u;
    // 0x1f1bb8: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x1f1bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1bbc: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f1bc0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f1bc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f1bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1BC8u;
    {
        const bool branch_taken_0x1f1bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BC8u;
        // 0x1f1bcc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bc8) {
            ctx->pc = 0x1F1BD8u;
            goto label_1f1bd8;
        }
    }
    ctx->pc = 0x1F1BD0u;
label_1f1bd0:
    // 0x1f1bd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f1bd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f1bd8:
    // 0x1f1bd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1bdc: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x1f1bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f1be0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F1BE0u;
    {
        const bool branch_taken_0x1f1be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BE0u;
        // 0x1f1be4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1be0) {
            ctx->pc = 0x1F1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1bb0;
        }
    }
    ctx->pc = 0x1F1BE8u;
    // 0x1f1be8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1bec: 0xaf80aa30  sw          $zero, -0x55D0($gp)
    ctx->pc = 0x1f1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945328), GPR_U32(ctx, 0));
    // 0x1f1bf0: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x1f1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f1bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bf8:
    // 0x1f1bf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f1bfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1c00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f1c04: 0x2c83007e  sltiu       $v1, $a0, 0x7E
    ctx->pc = 0x1f1c04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)126) ? 1 : 0);
    // 0x1f1c08: 0x0  nop
    ctx->pc = 0x1f1c08u;
    // NOP
    // 0x1f1c0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1C0Cu;
    {
        const bool branch_taken_0x1f1c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C0Cu;
        // 0x1f1c10: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c0c) {
            ctx->pc = 0x1F1BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1bf8;
        }
    }
    ctx->pc = 0x1F1C14u;
    // 0x1f1c14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c1c: 0x244688d0  addiu       $a2, $v0, -0x7730
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f1c20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1c24: 0x0  nop
    ctx->pc = 0x1f1c24u;
    // NOP
label_1f1c28:
    // 0x1f1c28: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1C28u;
    {
        const bool branch_taken_0x1f1c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c28) {
            ctx->pc = 0x1F1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1C28u;
            // 0x1f1c2c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C40u;
            goto label_1f1c40;
        }
    }
    ctx->pc = 0x1F1C30u;
    // 0x1f1c30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f1c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C38u;
    {
        const bool branch_taken_0x1f1c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C38u;
        // 0x1f1c3c: 0xa4400012  sh          $zero, 0x12($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c38) {
            ctx->pc = 0x1F1C4Cu;
            goto label_1f1c4c;
        }
    }
    ctx->pc = 0x1F1C40u;
label_1f1c40:
    // 0x1f1c40: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f1c44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c48: 0xa4670012  sh          $a3, 0x12($v1)
    ctx->pc = 0x1f1c48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 7));
label_1f1c4c:
    // 0x1f1c4c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f1c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c54: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x1f1c54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f1c58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1c5c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1f1c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1c60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F1C60u;
    {
        const bool branch_taken_0x1f1c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c60) {
            ctx->pc = 0x1F1C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1c28;
        }
    }
    ctx->pc = 0x1F1C68u;
    // 0x1f1c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1C70u;
}
