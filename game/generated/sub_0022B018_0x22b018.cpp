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

// Function: sub_0022B018
// Address: 0x22b018 - 0x22b098
void sub_0022B018_0x22b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B018_0x22b018");
#endif

    switch (ctx->pc) {
        case 0x22b040u: goto label_22b040;
        case 0x22b080u: goto label_22b080;
        default: break;
    }

    ctx->pc = 0x22b018u;

    // 0x22b018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b01c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b038: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B038u;
    SET_GPR_U32(ctx, 31, 0x22B040u);
    ctx->pc = 0x22B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B038u;
    // 0x22b03c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B038u, 0x22B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B040u;
label_22b040:
    // 0x22b040: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b044: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b04c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b050: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b054: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B054u;
    {
        const bool branch_taken_0x22b054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B054u;
        // 0x22b058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b054) {
            ctx->pc = 0x22B06Cu;
            goto label_22b06c;
        }
    }
    ctx->pc = 0x22B05Cu;
    // 0x22b05c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b060: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b064: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B064u;
    {
        const bool branch_taken_0x22b064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b064) {
            ctx->pc = 0x22B078u;
            goto label_22b078;
        }
    }
    ctx->pc = 0x22B06Cu;
label_22b06c:
    // 0x22b06c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b074: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b078:
    // 0x22b078: 0xc0b891e  jal         func_2E2478
    ctx->pc = 0x22B078u;
    SET_GPR_U32(ctx, 31, 0x22B080u);
    ctx->pc = 0x2E2478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2478u, 0x22B078u, 0x22B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B080u;
label_22b080:
    // 0x22b080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b08c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B08Cu;
        // 0x22b090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B094u;
    // 0x22b094: 0x0  nop
    ctx->pc = 0x22b094u;
    // NOP
    ctx->pc = 0x22b098u;
}
