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

// Function: sub_0031E0C8
// Address: 0x31e0c8 - 0x31e110
void sub_0031E0C8_0x31e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E0C8_0x31e0c8");
#endif

    switch (ctx->pc) {
        case 0x31e0c8u: goto label_31e0c8;
        case 0x31e0ccu: goto label_31e0cc;
        case 0x31e0d0u: goto label_31e0d0;
        case 0x31e0d4u: goto label_31e0d4;
        case 0x31e0d8u: goto label_31e0d8;
        case 0x31e0dcu: goto label_31e0dc;
        case 0x31e0e0u: goto label_31e0e0;
        case 0x31e0e4u: goto label_31e0e4;
        case 0x31e0e8u: goto label_31e0e8;
        case 0x31e0ecu: goto label_31e0ec;
        case 0x31e0f0u: goto label_31e0f0;
        case 0x31e0f4u: goto label_31e0f4;
        case 0x31e0f8u: goto label_31e0f8;
        case 0x31e0fcu: goto label_31e0fc;
        case 0x31e100u: goto label_31e100;
        case 0x31e104u: goto label_31e104;
        case 0x31e108u: goto label_31e108;
        case 0x31e10cu: goto label_31e10c;
        default: break;
    }

    ctx->pc = 0x31e0c8u;

label_31e0c8:
    // 0x31e0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e0cc:
    // 0x31e0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e0d0:
    // 0x31e0d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_31e0d4:
    // 0x31e0d4: 0xc0c77e8  jal         func_31DFA0
label_31e0d8:
    if (ctx->pc == 0x31E0D8u) {
        ctx->pc = 0x31E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0D4u;
        // 0x31e0d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0DCu;
        goto label_31e0dc;
    }
    ctx->pc = 0x31E0D4u;
    SET_GPR_U32(ctx, 31, 0x31E0DCu);
    ctx->pc = 0x31E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E0D4u;
    // 0x31e0d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x31E0D4u, 0x31E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0DCu;
label_31e0dc:
    // 0x31e0dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e0e0:
    // 0x31e0e0: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x31e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e0e4:
    // 0x31e0e4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x31e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_31e0e8:
    // 0x31e0e8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e0ec:
    // 0x31e0ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e0f0:
    // 0x31e0f0: 0x40f809  jalr        $v0
label_31e0f4:
    if (ctx->pc == 0x31E0F4u) {
        ctx->pc = 0x31E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0F0u;
        // 0x31e0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0F8u;
        goto label_31e0f8;
    }
    ctx->pc = 0x31E0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E0F8u);
        ctx->pc = 0x31E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0F0u;
        // 0x31e0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0F0u, 0x31E0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E0F8u;
label_31e0f8:
    // 0x31e0f8: 0x8f83ccdc  lw          $v1, -0x3324($gp)
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954204)));
label_31e0fc:
    // 0x31e0fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31e0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e100:
    // 0x31e100: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x31e100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_31e104:
    // 0x31e104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e108:
    // 0x31e108: 0x3e00008  jr          $ra
label_31e10c:
    if (ctx->pc == 0x31E10Cu) {
        ctx->pc = 0x31E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E108u;
        // 0x31e10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E110u;
        goto label_fallthrough_0x31e108;
    }
    ctx->pc = 0x31E108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E108u;
        // 0x31e10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e108:
    ctx->pc = 0x31E110u;
}
