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

// Function: sub_002604E0
// Address: 0x2604e0 - 0x260538
void sub_002604E0_0x2604e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002604E0_0x2604e0");
#endif

    switch (ctx->pc) {
        case 0x2604f8u: goto label_2604f8;
        default: break;
    }

    ctx->pc = 0x2604e0u;

    // 0x2604e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2604e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604e4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2604e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2604e8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2604e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2604ec: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2604ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2604f0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2604F0u;
    {
        const bool branch_taken_0x2604f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604F0u;
        // 0x2604f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604f0) {
            ctx->pc = 0x26052Cu;
            goto label_26052c;
        }
    }
    ctx->pc = 0x2604F8u;
label_2604f8:
    // 0x2604f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2604f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2604fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2604fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x260500: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x260500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x260504: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x260504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x260508: 0x0  nop
    ctx->pc = 0x260508u;
    // NOP
    // 0x26050c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26050Cu;
    {
        const bool branch_taken_0x26050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26050Cu;
        // 0x260510: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26050c) {
            ctx->pc = 0x2604F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2604f8;
        }
    }
    ctx->pc = 0x260514u;
    // 0x260514: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x260514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x260518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26051c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x26051cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x260520: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x260520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x260524: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x260528: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x260528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_26052c:
    // 0x26052c: 0x3e00008  jr          $ra
    ctx->pc = 0x26052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260534u;
    // 0x260534: 0x0  nop
    ctx->pc = 0x260534u;
    // NOP
    ctx->pc = 0x260538u;
}
