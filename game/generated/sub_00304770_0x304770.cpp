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

// Function: sub_00304770
// Address: 0x304770 - 0x3047e0
void sub_00304770_0x304770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304770_0x304770");
#endif

    switch (ctx->pc) {
        case 0x304770u: goto label_304770;
        case 0x304774u: goto label_304774;
        case 0x304778u: goto label_304778;
        case 0x30477cu: goto label_30477c;
        case 0x304780u: goto label_304780;
        case 0x304784u: goto label_304784;
        case 0x304788u: goto label_304788;
        case 0x30478cu: goto label_30478c;
        case 0x304790u: goto label_304790;
        case 0x304794u: goto label_304794;
        case 0x304798u: goto label_304798;
        case 0x30479cu: goto label_30479c;
        case 0x3047a0u: goto label_3047a0;
        case 0x3047a4u: goto label_3047a4;
        case 0x3047a8u: goto label_3047a8;
        case 0x3047acu: goto label_3047ac;
        case 0x3047b0u: goto label_3047b0;
        case 0x3047b4u: goto label_3047b4;
        case 0x3047b8u: goto label_3047b8;
        case 0x3047bcu: goto label_3047bc;
        case 0x3047c0u: goto label_3047c0;
        case 0x3047c4u: goto label_3047c4;
        case 0x3047c8u: goto label_3047c8;
        case 0x3047ccu: goto label_3047cc;
        case 0x3047d0u: goto label_3047d0;
        case 0x3047d4u: goto label_3047d4;
        case 0x3047d8u: goto label_3047d8;
        case 0x3047dcu: goto label_3047dc;
        default: break;
    }

    ctx->pc = 0x304770u;

label_304770:
    // 0x304770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_304774:
    // 0x304774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_304778:
    // 0x304778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30477c:
    // 0x30477c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_304780:
    // 0x304780: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_304784:
    // 0x304784: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_304788:
    if (ctx->pc == 0x304788u) {
        ctx->pc = 0x304788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304784u;
        // 0x304788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30478Cu;
        goto label_30478c;
    }
    ctx->pc = 0x304784u;
    {
        const bool branch_taken_0x304784 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304784u;
        // 0x304788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304784) {
            ctx->pc = 0x30479Cu;
            goto label_30479c;
        }
    }
    ctx->pc = 0x30478Cu;
label_30478c:
    // 0x30478c: 0xc0c8dca  jal         func_323728
label_304790:
    if (ctx->pc == 0x304790u) {
        ctx->pc = 0x304794u;
        goto label_304794;
    }
    ctx->pc = 0x30478Cu;
    SET_GPR_U32(ctx, 31, 0x304794u);
    ctx->pc = 0x323728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323728u, 0x30478Cu, 0x304794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304794u;
label_304794:
    // 0x304794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304798:
    // 0x304798: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x304798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30479c:
    // 0x30479c: 0xc0beeb6  jal         func_2FBAD8
label_3047a0:
    if (ctx->pc == 0x3047A0u) {
        ctx->pc = 0x3047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30479Cu;
        // 0x3047a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047A4u;
        goto label_3047a4;
    }
    ctx->pc = 0x30479Cu;
    SET_GPR_U32(ctx, 31, 0x3047A4u);
    ctx->pc = 0x3047A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30479Cu;
    // 0x3047a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBAD8u, 0x30479Cu, 0x3047A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047A4u;
label_3047a4:
    // 0x3047a4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3047a8:
    // 0x3047a8: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x3047a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3047ac:
    // 0x3047ac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3047acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3047b0:
    // 0x3047b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3047b4:
    // 0x3047b4: 0x40f809  jalr        $v0
label_3047b8:
    if (ctx->pc == 0x3047B8u) {
        ctx->pc = 0x3047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B4u;
        // 0x3047b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047BCu;
        goto label_3047bc;
    }
    ctx->pc = 0x3047B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3047BCu);
        ctx->pc = 0x3047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B4u;
        // 0x3047b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3047B4u, 0x3047BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3047BCu;
label_3047bc:
    // 0x3047bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3047c0:
    if (ctx->pc == 0x3047C0u) {
        ctx->pc = 0x3047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047BCu;
        // 0x3047c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047C4u;
        goto label_3047c4;
    }
    ctx->pc = 0x3047BCu;
    {
        const bool branch_taken_0x3047bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047BCu;
        // 0x3047c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047bc) {
            ctx->pc = 0x3047CCu;
            goto label_3047cc;
        }
    }
    ctx->pc = 0x3047C4u;
label_3047c4:
    // 0x3047c4: 0xc0bf966  jal         func_2FE598
label_3047c8:
    if (ctx->pc == 0x3047C8u) {
        ctx->pc = 0x3047CCu;
        goto label_3047cc;
    }
    ctx->pc = 0x3047C4u;
    SET_GPR_U32(ctx, 31, 0x3047CCu);
    ctx->pc = 0x2FE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE598u, 0x3047C4u, 0x3047CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047CCu;
label_3047cc:
    // 0x3047cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3047ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3047d0:
    // 0x3047d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3047d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3047d4:
    // 0x3047d4: 0x3e00008  jr          $ra
label_3047d8:
    if (ctx->pc == 0x3047D8u) {
        ctx->pc = 0x3047D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D4u;
        // 0x3047d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047DCu;
        goto label_3047dc;
    }
    ctx->pc = 0x3047D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3047D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D4u;
        // 0x3047d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3047D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3047DCu;
label_3047dc:
    // 0x3047dc: 0x0  nop
    ctx->pc = 0x3047dcu;
    // NOP
    ctx->pc = 0x3047e0u;
}
