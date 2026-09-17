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

// Function: sub_0033D378
// Address: 0x33d378 - 0x33d3d0
void sub_0033D378_0x33d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D378_0x33d378");
#endif

    switch (ctx->pc) {
        case 0x33d378u: goto label_33d378;
        case 0x33d37cu: goto label_33d37c;
        case 0x33d380u: goto label_33d380;
        case 0x33d384u: goto label_33d384;
        case 0x33d388u: goto label_33d388;
        case 0x33d38cu: goto label_33d38c;
        case 0x33d390u: goto label_33d390;
        case 0x33d394u: goto label_33d394;
        case 0x33d398u: goto label_33d398;
        case 0x33d39cu: goto label_33d39c;
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3a4u: goto label_33d3a4;
        case 0x33d3a8u: goto label_33d3a8;
        case 0x33d3acu: goto label_33d3ac;
        case 0x33d3b0u: goto label_33d3b0;
        case 0x33d3b4u: goto label_33d3b4;
        case 0x33d3b8u: goto label_33d3b8;
        case 0x33d3bcu: goto label_33d3bc;
        case 0x33d3c0u: goto label_33d3c0;
        case 0x33d3c4u: goto label_33d3c4;
        case 0x33d3c8u: goto label_33d3c8;
        case 0x33d3ccu: goto label_33d3cc;
        default: break;
    }

    ctx->pc = 0x33d378u;

label_33d378:
    // 0x33d378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d37c:
    // 0x33d37c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33d37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d380:
    // 0x33d380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33d384:
    // 0x33d384: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x33d384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_33d388:
    // 0x33d388: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33d38c:
    // 0x33d38c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x33d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33d390:
    // 0x33d390: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33d394:
    // 0x33d394: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_33d398:
    if (ctx->pc == 0x33D398u) {
        ctx->pc = 0x33D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D394u;
        // 0x33d398: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D39Cu;
        goto label_33d39c;
    }
    ctx->pc = 0x33D394u;
    {
        const bool branch_taken_0x33d394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D394u;
        // 0x33d398: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d394) {
            ctx->pc = 0x33D3A4u;
            goto label_33d3a4;
        }
    }
    ctx->pc = 0x33D39Cu;
label_33d39c:
    // 0x33d39c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x33d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_33d3a0:
    // 0x33d3a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d3a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d3a4:
    // 0x33d3a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_33d3a8:
    if (ctx->pc == 0x33D3A8u) {
        ctx->pc = 0x33D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3A4u;
        // 0x33d3a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3ACu;
        goto label_33d3ac;
    }
    ctx->pc = 0x33D3A4u;
    {
        const bool branch_taken_0x33d3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3A4u;
        // 0x33d3a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3a4) {
            ctx->pc = 0x33D3C8u;
            goto label_33d3c8;
        }
    }
    ctx->pc = 0x33D3ACu;
label_33d3ac:
    // 0x33d3ac: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x33d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_33d3b0:
    // 0x33d3b0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33d3b4:
    // 0x33d3b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d3b8:
    // 0x33d3b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d3bc:
    // 0x33d3bc: 0x60f809  jalr        $v1
label_33d3c0:
    if (ctx->pc == 0x33D3C0u) {
        ctx->pc = 0x33D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3BCu;
        // 0x33d3c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3C4u;
        goto label_33d3c4;
    }
    ctx->pc = 0x33D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D3C4u);
        ctx->pc = 0x33D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3BCu;
        // 0x33d3c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D3BCu, 0x33D3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D3C4u;
label_33d3c4:
    // 0x33d3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d3c8:
    // 0x33d3c8: 0x3e00008  jr          $ra
label_33d3cc:
    if (ctx->pc == 0x33D3CCu) {
        ctx->pc = 0x33D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3C8u;
        // 0x33d3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3D0u;
        goto label_fallthrough_0x33d3c8;
    }
    ctx->pc = 0x33D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3C8u;
        // 0x33d3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d3c8:
    ctx->pc = 0x33D3D0u;
}
