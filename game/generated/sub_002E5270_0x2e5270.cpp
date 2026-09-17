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

// Function: sub_002E5270
// Address: 0x2e5270 - 0x2e5390
void sub_002E5270_0x2e5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5270_0x2e5270");
#endif

    switch (ctx->pc) {
        case 0x2e52acu: goto label_2e52ac;
        case 0x2e52c4u: goto label_2e52c4;
        case 0x2e52d8u: goto label_2e52d8;
        case 0x2e52e4u: goto label_2e52e4;
        case 0x2e52f0u: goto label_2e52f0;
        case 0x2e5328u: goto label_2e5328;
        case 0x2e534cu: goto label_2e534c;
        case 0x2e535cu: goto label_2e535c;
        case 0x2e5368u: goto label_2e5368;
        default: break;
    }

    ctx->pc = 0x2e5270u;

    // 0x2e5270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e5274: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e5274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e5278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e527c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2e5280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5284: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2e5288: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e5288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e528c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e5290: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e5290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e5294: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2e5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2e5298: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e529c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E529Cu;
    {
        const bool branch_taken_0x2e529c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E529Cu;
        // 0x2e52a0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e529c) {
            ctx->pc = 0x2E52B4u;
            goto label_2e52b4;
        }
    }
    ctx->pc = 0x2E52A4u;
    // 0x2e52a4: 0xc045d06  jal         func_117418
    ctx->pc = 0x2E52A4u;
    SET_GPR_U32(ctx, 31, 0x2E52ACu);
    ctx->pc = 0x117418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117418u, 0x2E52A4u, 0x2E52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52ACu;
label_2e52ac:
    // 0x2e52ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e52acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e52b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2e52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2e52b4:
    // 0x2e52b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e52b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e52b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52bc: 0xc0b947c  jal         func_2E51F0
    ctx->pc = 0x2E52BCu;
    SET_GPR_U32(ctx, 31, 0x2E52C4u);
    ctx->pc = 0x2E52C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52BCu;
    // 0x2e52c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E51F0u, 0x2E52BCu, 0x2E52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52C4u;
label_2e52c4:
    // 0x2e52c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e52c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52c8: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E52C8u;
    {
        const bool branch_taken_0x2e52c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52C8u;
        // 0x2e52cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52c8) {
            ctx->pc = 0x2E536Cu;
            goto label_2e536c;
        }
    }
    ctx->pc = 0x2E52D0u;
    // 0x2e52d0: 0xc045de2  jal         func_117788
    ctx->pc = 0x2E52D0u;
    SET_GPR_U32(ctx, 31, 0x2E52D8u);
    ctx->pc = 0x117788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117788u, 0x2E52D0u, 0x2E52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52D8u;
label_2e52d8:
    // 0x2e52d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e52d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52dc: 0xc045d28  jal         func_1174A0
    ctx->pc = 0x2E52DCu;
    SET_GPR_U32(ctx, 31, 0x2E52E4u);
    ctx->pc = 0x2E52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52DCu;
    // 0x2e52e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1174A0u, 0x2E52DCu, 0x2E52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52E4u;
label_2e52e4:
    // 0x2e52e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e52e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52e8: 0xc045d82  jal         func_117608
    ctx->pc = 0x2E52E8u;
    SET_GPR_U32(ctx, 31, 0x2E52F0u);
    ctx->pc = 0x2E52ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52E8u;
    // 0x2e52ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117608u, 0x2E52E8u, 0x2E52F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52F0u;
label_2e52f0:
    // 0x2e52f0: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x2e52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2e52f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2e52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e52f8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2e52f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e52fc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2e52fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2e5300: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2e5304: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2e5304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2e5308: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2e5308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e530c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e5310: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5314: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e5314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5318: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e531c: 0x263100ff  addiu       $s1, $s1, 0xFF
    ctx->pc = 0x2e531cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 255));
    // 0x2e5320: 0xc045d44  jal         func_117510
    ctx->pc = 0x2E5320u;
    SET_GPR_U32(ctx, 31, 0x2E5328u);
    ctx->pc = 0x2E5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5320u;
    // 0x2e5324: 0x2263024  and         $a2, $s1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x2E5320u, 0x2E5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5328u;
label_2e5328:
    // 0x2e5328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e5328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e532c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e532cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5330: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5334: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e5334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5338: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x2e5338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2e533c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e533cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e5340: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x2e5340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x2e5344: 0xc043dd8  jal         func_10F760
    ctx->pc = 0x2E5344u;
    SET_GPR_U32(ctx, 31, 0x2E534Cu);
    ctx->pc = 0x2E5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5344u;
    // 0x2e5348: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F760u, 0x2E5344u, 0x2E534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E534Cu;
label_2e534c:
    // 0x2e534c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5350: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5354: 0xc046040  jal         func_118100
    ctx->pc = 0x2E5354u;
    SET_GPR_U32(ctx, 31, 0x2E535Cu);
    ctx->pc = 0x2E5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5354u;
    // 0x2e5358: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118100u, 0x2E5354u, 0x2E535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E535Cu;
label_2e535c:
    // 0x2e535c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5360: 0xc045d64  jal         func_117590
    ctx->pc = 0x2E5360u;
    SET_GPR_U32(ctx, 31, 0x2E5368u);
    ctx->pc = 0x2E5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5360u;
    // 0x2e5364: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117590u, 0x2E5360u, 0x2E5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5368u;
label_2e5368:
    // 0x2e5368: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e5368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e536c:
    // 0x2e536c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e536cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5370: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e5370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5374: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e5374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5378: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e5378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e537c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e537cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5380: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2e5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5384: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5384u;
        // 0x2e5388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E538Cu;
    // 0x2e538c: 0x0  nop
    ctx->pc = 0x2e538cu;
    // NOP
    ctx->pc = 0x2e5390u;
}
