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

// Function: sub_00260490
// Address: 0x260490 - 0x2604e0
void sub_00260490_0x260490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260490_0x260490");
#endif

    switch (ctx->pc) {
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        default: break;
    }

    ctx->pc = 0x260490u;

label_260490:
    // 0x260490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260494:
    // 0x260494: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x260494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260498:
    // 0x260498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26049c:
    // 0x26049c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2604a0:
    // 0x2604a0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2604a4:
    // 0x2604a4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2604a8:
    // 0x2604a8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_2604ac:
    if (ctx->pc == 0x2604ACu) {
        ctx->pc = 0x2604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A8u;
        // 0x2604ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604B0u;
        goto label_2604b0;
    }
    ctx->pc = 0x2604A8u;
    {
        const bool branch_taken_0x2604a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2604a8) {
            ctx->pc = 0x2604ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2604A8u;
            // 0x2604ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2604B4u;
            goto label_2604b4;
        }
    }
    ctx->pc = 0x2604B0u;
label_2604b0:
    // 0x2604b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2604b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2604b4:
    // 0x2604b4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2604b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2604b8:
    // 0x2604b8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2604b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2604bc:
    // 0x2604bc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2604c0:
    // 0x2604c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2604c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2604c4:
    // 0x2604c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2604c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2604c8:
    // 0x2604c8: 0x60f809  jalr        $v1
label_2604cc:
    if (ctx->pc == 0x2604CCu) {
        ctx->pc = 0x2604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604C8u;
        // 0x2604cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604D0u;
        goto label_2604d0;
    }
    ctx->pc = 0x2604C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2604D0u);
        ctx->pc = 0x2604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604C8u;
        // 0x2604cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2604C8u, 0x2604D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2604D0u;
label_2604d0:
    // 0x2604d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2604d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2604d4:
    // 0x2604d4: 0x3e00008  jr          $ra
label_2604d8:
    if (ctx->pc == 0x2604D8u) {
        ctx->pc = 0x2604D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604D4u;
        // 0x2604d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604DCu;
        goto label_2604dc;
    }
    ctx->pc = 0x2604D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2604D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604D4u;
        // 0x2604d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2604D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2604DCu;
label_2604dc:
    // 0x2604dc: 0x0  nop
    ctx->pc = 0x2604dcu;
    // NOP
    ctx->pc = 0x2604e0u;
}
