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

// Function: sub_002248A8
// Address: 0x2248a8 - 0x224900
void sub_002248A8_0x2248a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002248A8_0x2248a8");
#endif

    switch (ctx->pc) {
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        case 0x2248c0u: goto label_2248c0;
        case 0x2248c4u: goto label_2248c4;
        case 0x2248c8u: goto label_2248c8;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248d0u: goto label_2248d0;
        case 0x2248d4u: goto label_2248d4;
        case 0x2248d8u: goto label_2248d8;
        case 0x2248dcu: goto label_2248dc;
        case 0x2248e0u: goto label_2248e0;
        case 0x2248e4u: goto label_2248e4;
        case 0x2248e8u: goto label_2248e8;
        case 0x2248ecu: goto label_2248ec;
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        default: break;
    }

    ctx->pc = 0x2248a8u;

label_2248a8:
    // 0x2248a8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2248a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2248ac:
    // 0x2248ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2248acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2248b0:
    // 0x2248b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2248b4:
    // 0x2248b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2248b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2248b8:
    // 0x2248b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2248b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2248bc:
    // 0x2248bc: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
label_2248c0:
    // 0x2248c0: 0x24c66110  addiu       $a2, $a2, 0x6110
    ctx->pc = 0x2248c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24848));
label_2248c4:
    // 0x2248c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2248c8:
    // 0x2248c8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_2248cc:
    if (ctx->pc == 0x2248CCu) {
        ctx->pc = 0x2248CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248C8u;
        // 0x2248cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248D0u;
        goto label_2248d0;
    }
    ctx->pc = 0x2248C8u;
    {
        const bool branch_taken_0x2248c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2248CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248C8u;
        // 0x2248cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248c8) {
            ctx->pc = 0x224908u;
            return;
        }
    }
    ctx->pc = 0x2248D0u;
label_2248d0:
    // 0x2248d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2248d4:
    // 0x2248d4: 0x8c42885c  lw          $v0, -0x77A4($v0)
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
label_2248d8:
    // 0x2248d8: 0x2c43000c  sltiu       $v1, $v0, 0xC
    ctx->pc = 0x2248d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2248dc:
    // 0x2248dc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_2248e0:
    if (ctx->pc == 0x2248E0u) {
        ctx->pc = 0x2248E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248DCu;
        // 0x2248e0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248E4u;
        goto label_2248e4;
    }
    ctx->pc = 0x2248DCu;
    {
        const bool branch_taken_0x2248dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2248dc) {
            ctx->pc = 0x2248E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2248DCu;
            // 0x2248e0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224908u;
            return;
        }
    }
    ctx->pc = 0x2248E4u;
label_2248e4:
    // 0x2248e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2248e8:
    // 0x2248e8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2248ec:
    // 0x2248ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2248ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2248f0:
    // 0x2248f0: 0x8c6370a0  lw          $v1, 0x70A0($v1)
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28832)));
label_2248f4:
    // 0x2248f4: 0x600008  jr          $v1
label_2248f8:
    if (ctx->pc == 0x2248F8u) {
        ctx->pc = 0x2248FCu;
        goto label_2248fc;
    }
    ctx->pc = 0x2248F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2248F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2248FCu;
label_2248fc:
    // 0x2248fc: 0x0  nop
    ctx->pc = 0x2248fcu;
    // NOP
    ctx->pc = 0x224900u;
}
