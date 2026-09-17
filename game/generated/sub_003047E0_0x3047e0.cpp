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

// Function: sub_003047E0
// Address: 0x3047e0 - 0x304840
void sub_003047E0_0x3047e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003047E0_0x3047e0");
#endif

    switch (ctx->pc) {
        case 0x3047e0u: goto label_3047e0;
        case 0x3047e4u: goto label_3047e4;
        case 0x3047e8u: goto label_3047e8;
        case 0x3047ecu: goto label_3047ec;
        case 0x3047f0u: goto label_3047f0;
        case 0x3047f4u: goto label_3047f4;
        case 0x3047f8u: goto label_3047f8;
        case 0x3047fcu: goto label_3047fc;
        case 0x304800u: goto label_304800;
        case 0x304804u: goto label_304804;
        case 0x304808u: goto label_304808;
        case 0x30480cu: goto label_30480c;
        case 0x304810u: goto label_304810;
        case 0x304814u: goto label_304814;
        case 0x304818u: goto label_304818;
        case 0x30481cu: goto label_30481c;
        case 0x304820u: goto label_304820;
        case 0x304824u: goto label_304824;
        case 0x304828u: goto label_304828;
        case 0x30482cu: goto label_30482c;
        case 0x304830u: goto label_304830;
        case 0x304834u: goto label_304834;
        case 0x304838u: goto label_304838;
        case 0x30483cu: goto label_30483c;
        default: break;
    }

    ctx->pc = 0x3047e0u;

label_3047e0:
    // 0x3047e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3047e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3047e4:
    // 0x3047e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3047e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3047e8:
    // 0x3047e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3047e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3047ec:
    // 0x3047ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3047ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3047f0:
    // 0x3047f0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3047f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3047f4:
    // 0x3047f4: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x3047f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3047f8:
    // 0x3047f8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3047f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3047fc:
    // 0x3047fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3047fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_304800:
    // 0x304800: 0x40f809  jalr        $v0
label_304804:
    if (ctx->pc == 0x304804u) {
        ctx->pc = 0x304804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304800u;
        // 0x304804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304808u;
        goto label_304808;
    }
    ctx->pc = 0x304800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304808u);
        ctx->pc = 0x304804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304800u;
        // 0x304804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304800u, 0x304808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304808u;
label_304808:
    // 0x304808: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x304808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_30480c:
    // 0x30480c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x30480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_304810:
    // 0x304810: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x304810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_304814:
    // 0x304814: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x304814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_304818:
    // 0x304818: 0x40f809  jalr        $v0
label_30481c:
    if (ctx->pc == 0x30481Cu) {
        ctx->pc = 0x30481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304818u;
        // 0x30481c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304820u;
        goto label_304820;
    }
    ctx->pc = 0x304818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304820u);
        ctx->pc = 0x30481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304818u;
        // 0x30481c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304818u, 0x304820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304820u;
label_304820:
    // 0x304820: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x304820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_304824:
    // 0x304824: 0xc0bf09c  jal         func_2FC270
label_304828:
    if (ctx->pc == 0x304828u) {
        ctx->pc = 0x304828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304824u;
        // 0x304828: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30482Cu;
        goto label_30482c;
    }
    ctx->pc = 0x304824u;
    SET_GPR_U32(ctx, 31, 0x30482Cu);
    ctx->pc = 0x304828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304824u;
    // 0x304828: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC270u, 0x304824u, 0x30482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30482Cu;
label_30482c:
    // 0x30482c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30482cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304830:
    // 0x304830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_304834:
    // 0x304834: 0x3e00008  jr          $ra
label_304838:
    if (ctx->pc == 0x304838u) {
        ctx->pc = 0x304838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304834u;
        // 0x304838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30483Cu;
        goto label_30483c;
    }
    ctx->pc = 0x304834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304834u;
        // 0x304838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30483Cu;
label_30483c:
    // 0x30483c: 0x0  nop
    ctx->pc = 0x30483cu;
    // NOP
    ctx->pc = 0x304840u;
}
