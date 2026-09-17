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

// Function: sub_00346740
// Address: 0x346740 - 0x346848
void sub_00346740_0x346740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346740_0x346740");
#endif

    switch (ctx->pc) {
        case 0x34678cu: goto label_34678c;
        case 0x346794u: goto label_346794;
        case 0x3467a8u: goto label_3467a8;
        case 0x3467d0u: goto label_3467d0;
        case 0x3467d8u: goto label_3467d8;
        case 0x3467e8u: goto label_3467e8;
        case 0x3467f8u: goto label_3467f8;
        case 0x346808u: goto label_346808;
        case 0x346824u: goto label_346824;
        default: break;
    }

    ctx->pc = 0x346740u;

    // 0x346740: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x346740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x346744: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x346744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346748: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x346748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x34674c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34674cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346750: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x346750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x346754: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x346754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x346758: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x346758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x34675c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x34675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x346760: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x346760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x346764: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x346764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x346768: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346768u;
    {
        const bool branch_taken_0x346768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346768u;
        // 0x34676c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346768) {
            ctx->pc = 0x346780u;
            goto label_346780;
        }
    }
    ctx->pc = 0x346770u;
    // 0x346770: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x346770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x346774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346774u;
    {
        const bool branch_taken_0x346774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346774u;
        // 0x346778: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346774) {
            ctx->pc = 0x346784u;
            goto label_346784;
        }
    }
    ctx->pc = 0x34677Cu;
    // 0x34677c: 0x0  nop
    ctx->pc = 0x34677cu;
    // NOP
label_346780:
    // 0x346780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346784:
    // 0x346784: 0xc0d2536  jal         func_3494D8
    ctx->pc = 0x346784u;
    SET_GPR_U32(ctx, 31, 0x34678Cu);
    ctx->pc = 0x346788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346784u;
    // 0x346788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3494D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3494D8u, 0x346784u, 0x34678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34678Cu;
label_34678c:
    // 0x34678c: 0xc0d24b4  jal         func_3492D0
    ctx->pc = 0x34678Cu;
    SET_GPR_U32(ctx, 31, 0x346794u);
    ctx->pc = 0x346790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34678Cu;
    // 0x346790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492D0u, 0x34678Cu, 0x346794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346794u;
label_346794:
    // 0x346794: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x346794u;
    {
        const bool branch_taken_0x346794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346794) {
            ctx->pc = 0x346798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346794u;
            // 0x346798: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3467B8u;
            goto label_3467b8;
        }
    }
    ctx->pc = 0x34679Cu;
    // 0x34679c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467a0: 0xc0d2404  jal         func_349010
    ctx->pc = 0x3467A0u;
    SET_GPR_U32(ctx, 31, 0x3467A8u);
    ctx->pc = 0x3467A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467A0u;
    // 0x3467a4: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x3467A0u, 0x3467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467A8u;
label_3467a8:
    // 0x3467a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3467ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3467acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467b0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3467B0u;
    {
        const bool branch_taken_0x3467b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3467B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467B0u;
        // 0x3467b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467b0) {
            ctx->pc = 0x34681Cu;
            goto label_34681c;
        }
    }
    ctx->pc = 0x3467B8u;
label_3467b8:
    // 0x3467b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3467b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3467bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3467BCu;
    {
        const bool branch_taken_0x3467bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467BCu;
        // 0x3467c0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467bc) {
            ctx->pc = 0x3467D8u;
            goto label_3467d8;
        }
    }
    ctx->pc = 0x3467C4u;
    // 0x3467c4: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x3467c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x3467c8: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x3467C8u;
    SET_GPR_U32(ctx, 31, 0x3467D0u);
    ctx->pc = 0x3467CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467C8u;
    // 0x3467cc: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x3467C8u, 0x3467D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467D0u;
label_3467d0:
    // 0x3467d0: 0xc0d2582  jal         func_349608
    ctx->pc = 0x3467D0u;
    SET_GPR_U32(ctx, 31, 0x3467D8u);
    ctx->pc = 0x3467D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467D0u;
    // 0x3467d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349608u, 0x3467D0u, 0x3467D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467D8u;
label_3467d8:
    // 0x3467d8: 0x96320002  lhu         $s2, 0x2($s1)
    ctx->pc = 0x3467d8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3467dc: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x3467dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3467e0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x3467E0u;
    {
        const bool branch_taken_0x3467e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3467E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467E0u;
        // 0x3467e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467e0) {
            ctx->pc = 0x346814u;
            goto label_346814;
        }
    }
    ctx->pc = 0x3467E8u;
label_3467e8:
    // 0x3467e8: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x3467e8u;
    // PREF instruction (ignored)
    // 0x3467ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3467ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467f0: 0xc0d24f8  jal         func_3493E0
    ctx->pc = 0x3467F0u;
    SET_GPR_U32(ctx, 31, 0x3467F8u);
    ctx->pc = 0x3467F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467F0u;
    // 0x3467f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3493E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493E0u, 0x3467F0u, 0x3467F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467F8u;
label_3467f8:
    // 0x3467f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3467f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3467fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346800: 0xc0d1974  jal         func_3465D0
    ctx->pc = 0x346800u;
    SET_GPR_U32(ctx, 31, 0x346808u);
    ctx->pc = 0x346804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346800u;
    // 0x346804: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3465D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3465D0u, 0x346800u, 0x346808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346808u;
label_346808:
    // 0x346808: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x346808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x34680c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34680Cu;
    {
        const bool branch_taken_0x34680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34680Cu;
        // 0x346810: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34680c) {
            ctx->pc = 0x3467E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3467e8;
        }
    }
    ctx->pc = 0x346814u;
label_346814:
    // 0x346814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34681c:
    // 0x34681c: 0xc0d256c  jal         func_3495B0
    ctx->pc = 0x34681Cu;
    SET_GPR_U32(ctx, 31, 0x346824u);
    ctx->pc = 0x3495B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3495B0u, 0x34681Cu, 0x346824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346824u;
label_346824:
    // 0x346824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346828: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x346828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34682c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x34682cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346830: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x346830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346834: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x346834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x346838: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x346838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34683c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x34683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x346840: 0x3e00008  jr          $ra
    ctx->pc = 0x346840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346840u;
        // 0x346844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346848u;
}
