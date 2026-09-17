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

// Function: sub_0033E378
// Address: 0x33e378 - 0x33e430
void sub_0033E378_0x33e378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E378_0x33e378");
#endif

    switch (ctx->pc) {
        case 0x33e378u: goto label_33e378;
        case 0x33e37cu: goto label_33e37c;
        case 0x33e380u: goto label_33e380;
        case 0x33e384u: goto label_33e384;
        case 0x33e388u: goto label_33e388;
        case 0x33e38cu: goto label_33e38c;
        case 0x33e390u: goto label_33e390;
        case 0x33e394u: goto label_33e394;
        case 0x33e398u: goto label_33e398;
        case 0x33e39cu: goto label_33e39c;
        case 0x33e3a0u: goto label_33e3a0;
        case 0x33e3a4u: goto label_33e3a4;
        case 0x33e3a8u: goto label_33e3a8;
        case 0x33e3acu: goto label_33e3ac;
        case 0x33e3b0u: goto label_33e3b0;
        case 0x33e3b4u: goto label_33e3b4;
        case 0x33e3b8u: goto label_33e3b8;
        case 0x33e3bcu: goto label_33e3bc;
        case 0x33e3c0u: goto label_33e3c0;
        case 0x33e3c4u: goto label_33e3c4;
        case 0x33e3c8u: goto label_33e3c8;
        case 0x33e3ccu: goto label_33e3cc;
        case 0x33e3d0u: goto label_33e3d0;
        case 0x33e3d4u: goto label_33e3d4;
        case 0x33e3d8u: goto label_33e3d8;
        case 0x33e3dcu: goto label_33e3dc;
        case 0x33e3e0u: goto label_33e3e0;
        case 0x33e3e4u: goto label_33e3e4;
        case 0x33e3e8u: goto label_33e3e8;
        case 0x33e3ecu: goto label_33e3ec;
        case 0x33e3f0u: goto label_33e3f0;
        case 0x33e3f4u: goto label_33e3f4;
        case 0x33e3f8u: goto label_33e3f8;
        case 0x33e3fcu: goto label_33e3fc;
        case 0x33e400u: goto label_33e400;
        case 0x33e404u: goto label_33e404;
        case 0x33e408u: goto label_33e408;
        case 0x33e40cu: goto label_33e40c;
        case 0x33e410u: goto label_33e410;
        case 0x33e414u: goto label_33e414;
        case 0x33e418u: goto label_33e418;
        case 0x33e41cu: goto label_33e41c;
        case 0x33e420u: goto label_33e420;
        case 0x33e424u: goto label_33e424;
        case 0x33e428u: goto label_33e428;
        case 0x33e42cu: goto label_33e42c;
        default: break;
    }

    ctx->pc = 0x33e378u;

label_33e378:
    // 0x33e378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33e37c:
    // 0x33e37c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e380:
    // 0x33e380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33e380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e384:
    // 0x33e384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33e388:
    // 0x33e388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e38c:
    // 0x33e38c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e390:
    // 0x33e390: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33e394:
    // 0x33e394: 0xc0c77d6  jal         func_31DF58
label_33e398:
    if (ctx->pc == 0x33E398u) {
        ctx->pc = 0x33E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E394u;
        // 0x33e398: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E39Cu;
        goto label_33e39c;
    }
    ctx->pc = 0x33E394u;
    SET_GPR_U32(ctx, 31, 0x33E39Cu);
    ctx->pc = 0x33E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E394u;
    // 0x33e398: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DF58u, 0x33E394u, 0x33E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E39Cu;
label_33e39c:
    // 0x33e39c: 0x10000017  b           . + 4 + (0x17 << 2)
label_33e3a0:
    if (ctx->pc == 0x33E3A0u) {
        ctx->pc = 0x33E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E39Cu;
        // 0x33e3a0: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3A4u;
        goto label_33e3a4;
    }
    ctx->pc = 0x33E39Cu;
    {
        const bool branch_taken_0x33e39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E39Cu;
        // 0x33e3a0: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e39c) {
            ctx->pc = 0x33E3FCu;
            goto label_33e3fc;
        }
    }
    ctx->pc = 0x33E3A4u;
label_33e3a4:
    // 0x33e3a4: 0x0  nop
    ctx->pc = 0x33e3a4u;
    // NOP
label_33e3a8:
    // 0x33e3a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e3ac:
    // 0x33e3ac: 0x96510006  lhu         $s1, 0x6($s2)
    ctx->pc = 0x33e3acu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_33e3b0:
    // 0x33e3b0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e3b4:
    // 0x33e3b4: 0x96500008  lhu         $s0, 0x8($s2)
    ctx->pc = 0x33e3b4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_33e3b8:
    // 0x33e3b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e3bc:
    // 0x33e3bc: 0x2718806  srlv        $s1, $s1, $s3
    ctx->pc = 0x33e3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 19) & 0x1F));
label_33e3c0:
    // 0x33e3c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e3c4:
    // 0x33e3c4: 0x2708006  srlv        $s0, $s0, $s3
    ctx->pc = 0x33e3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
label_33e3c8:
    // 0x33e3c8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x33e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_33e3cc:
    // 0x33e3cc: 0x40f809  jalr        $v0
label_33e3d0:
    if (ctx->pc == 0x33E3D0u) {
        ctx->pc = 0x33E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3CCu;
        // 0x33e3d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3D4u;
        goto label_33e3d4;
    }
    ctx->pc = 0x33E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E3D4u);
        ctx->pc = 0x33E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3CCu;
        // 0x33e3d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E3CCu, 0x33E3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E3D4u;
label_33e3d4:
    // 0x33e3d4: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x33e3d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_33e3d8:
    // 0x33e3d8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33e3dc:
    // 0x33e3dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e3e0:
    // 0x33e3e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33e3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e3e4:
    // 0x33e3e4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x33e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_33e3e8:
    // 0x33e3e8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e3ec:
    // 0x33e3ec: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x33e3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e3f0:
    // 0x33e3f0: 0x100f809  jalr        $t0
label_33e3f4:
    if (ctx->pc == 0x33E3F4u) {
        ctx->pc = 0x33E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3F0u;
        // 0x33e3f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3F8u;
        goto label_33e3f8;
    }
    ctx->pc = 0x33E3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x33E3F8u);
        ctx->pc = 0x33E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3F0u;
        // 0x33e3f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E3F0u, 0x33E3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E3F8u;
label_33e3f8:
    // 0x33e3f8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x33e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_33e3fc:
    // 0x33e3fc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x33e3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33e400:
    // 0x33e400: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
label_33e404:
    if (ctx->pc == 0x33E404u) {
        ctx->pc = 0x33E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E400u;
        // 0x33e404: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E408u;
        goto label_33e408;
    }
    ctx->pc = 0x33E400u;
    {
        const bool branch_taken_0x33e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e400) {
            ctx->pc = 0x33E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E400u;
            // 0x33e404: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e3a8;
        }
    }
    ctx->pc = 0x33E408u;
label_33e408:
    // 0x33e408: 0xc0cfa0e  jal         func_33E838
label_33e40c:
    if (ctx->pc == 0x33E40Cu) {
        ctx->pc = 0x33E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E408u;
        // 0x33e40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E410u;
        goto label_33e410;
    }
    ctx->pc = 0x33E408u;
    SET_GPR_U32(ctx, 31, 0x33E410u);
    ctx->pc = 0x33E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E408u;
    // 0x33e40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E838u, 0x33E408u, 0x33E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E410u;
label_33e410:
    // 0x33e410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e414:
    // 0x33e414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e418:
    // 0x33e418: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e41c:
    // 0x33e41c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33e41cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e420:
    // 0x33e420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33e424:
    // 0x33e424: 0x3e00008  jr          $ra
label_33e428:
    if (ctx->pc == 0x33E428u) {
        ctx->pc = 0x33E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E424u;
        // 0x33e428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E42Cu;
        goto label_33e42c;
    }
    ctx->pc = 0x33E424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E424u;
        // 0x33e428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E42Cu;
label_33e42c:
    // 0x33e42c: 0x0  nop
    ctx->pc = 0x33e42cu;
    // NOP
    ctx->pc = 0x33e430u;
}
