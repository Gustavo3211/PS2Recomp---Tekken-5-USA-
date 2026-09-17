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

// Function: sub_003697F0
// Address: 0x3697f0 - 0x369840
void sub_003697F0_0x3697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003697F0_0x3697f0");
#endif

    switch (ctx->pc) {
        case 0x3697f0u: goto label_3697f0;
        case 0x3697f4u: goto label_3697f4;
        case 0x3697f8u: goto label_3697f8;
        case 0x3697fcu: goto label_3697fc;
        case 0x369800u: goto label_369800;
        case 0x369804u: goto label_369804;
        case 0x369808u: goto label_369808;
        case 0x36980cu: goto label_36980c;
        case 0x369810u: goto label_369810;
        case 0x369814u: goto label_369814;
        case 0x369818u: goto label_369818;
        case 0x36981cu: goto label_36981c;
        case 0x369820u: goto label_369820;
        case 0x369824u: goto label_369824;
        case 0x369828u: goto label_369828;
        case 0x36982cu: goto label_36982c;
        case 0x369830u: goto label_369830;
        case 0x369834u: goto label_369834;
        case 0x369838u: goto label_369838;
        case 0x36983cu: goto label_36983c;
        default: break;
    }

    ctx->pc = 0x3697f0u;

label_3697f0:
    // 0x3697f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3697f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3697f4:
    // 0x3697f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3697f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3697f8:
    // 0x3697f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3697f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3697fc:
    // 0x3697fc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3697fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_369800:
    // 0x369800: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x369800u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_369804:
    // 0x369804: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x369804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_369808:
    // 0x369808: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x369808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_36980c:
    // 0x36980c: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
label_369810:
    if (ctx->pc == 0x369810u) {
        ctx->pc = 0x369810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36980Cu;
        // 0x369810: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369814u;
        goto label_369814;
    }
    ctx->pc = 0x36980Cu;
    {
        const bool branch_taken_0x36980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x369810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36980Cu;
        // 0x369810: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36980c) {
            ctx->pc = 0x369834u;
            goto label_369834;
        }
    }
    ctx->pc = 0x369814u;
label_369814:
    // 0x369814: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x369814u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
label_369818:
    // 0x369818: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x369818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_36981c:
    // 0x36981c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_369820:
    // 0x369820: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x369820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_369824:
    // 0x369824: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x369824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_369828:
    // 0x369828: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x369828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36982c:
    // 0x36982c: 0x60f809  jalr        $v1
label_369830:
    if (ctx->pc == 0x369830u) {
        ctx->pc = 0x369830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36982Cu;
        // 0x369830: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369834u;
        goto label_369834;
    }
    ctx->pc = 0x36982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x369834u);
        ctx->pc = 0x369830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36982Cu;
        // 0x369830: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36982Cu, 0x369834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x369834u;
label_369834:
    // 0x369834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_369838:
    // 0x369838: 0x3e00008  jr          $ra
label_36983c:
    if (ctx->pc == 0x36983Cu) {
        ctx->pc = 0x36983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369838u;
        // 0x36983c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369840u;
        goto label_fallthrough_0x369838;
    }
    ctx->pc = 0x369838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369838u;
        // 0x36983c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x369838:
    ctx->pc = 0x369840u;
}
