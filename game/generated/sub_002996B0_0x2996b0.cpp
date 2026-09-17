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

// Function: sub_002996B0
// Address: 0x2996b0 - 0x2997a8
void sub_002996B0_0x2996b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002996B0_0x2996b0");
#endif

    switch (ctx->pc) {
        case 0x2996fcu: goto label_2996fc;
        case 0x29970cu: goto label_29970c;
        case 0x299718u: goto label_299718;
        case 0x299738u: goto label_299738;
        case 0x299748u: goto label_299748;
        case 0x299768u: goto label_299768;
        case 0x299780u: goto label_299780;
        case 0x299788u: goto label_299788;
        default: break;
    }

    ctx->pc = 0x2996b0u;

    // 0x2996b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2996b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2996b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2996b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2996b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2996b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2996bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2996c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2996c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2996c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2996c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2996c8: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x2996cc: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2996CCu;
    {
        const bool branch_taken_0x2996cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996CCu;
        // 0x2996d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996cc) {
            ctx->pc = 0x29978Cu;
            goto label_29978c;
        }
    }
    ctx->pc = 0x2996D4u;
    // 0x2996d4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2996d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2996d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2996dc: 0x10720018  beq         $v1, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2996DCu;
    {
        const bool branch_taken_0x2996dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996DCu;
        // 0x2996e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996dc) {
            ctx->pc = 0x299740u;
            goto label_299740;
        }
    }
    ctx->pc = 0x2996E4u;
    // 0x2996e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2996E4u;
    {
        const bool branch_taken_0x2996e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2996e4) {
            ctx->pc = 0x299778u;
            goto label_299778;
        }
    }
    ctx->pc = 0x2996ECu;
    // 0x2996ec: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2996ECu;
    {
        const bool branch_taken_0x2996ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2996ec) {
            ctx->pc = 0x299778u;
            goto label_299778;
        }
    }
    ctx->pc = 0x2996F4u;
    // 0x2996f4: 0xc089622  jal         func_225888
    ctx->pc = 0x2996F4u;
    SET_GPR_U32(ctx, 31, 0x2996FCu);
    ctx->pc = 0x2996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996F4u;
    // 0x2996f8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2996F4u, 0x2996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996FCu;
label_2996fc:
    // 0x2996fc: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2996FCu;
    {
        const bool branch_taken_0x2996fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2996fc) {
            ctx->pc = 0x299700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2996FCu;
            // 0x299700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29978Cu;
            goto label_29978c;
        }
    }
    ctx->pc = 0x299704u;
    // 0x299704: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x299704u;
    SET_GPR_U32(ctx, 31, 0x29970Cu);
    ctx->pc = 0x299708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299704u;
    // 0x299708: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x299704u, 0x29970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29970Cu;
label_29970c:
    // 0x29970c: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x29970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x299710: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x299710u;
    SET_GPR_U32(ctx, 31, 0x299718u);
    ctx->pc = 0x299714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299710u;
    // 0x299714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x299710u, 0x299718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299718u;
label_299718:
    // 0x299718: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x299718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29971c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29971cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299728: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x29972c: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x29972cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x299730: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x299730u;
    SET_GPR_U32(ctx, 31, 0x299738u);
    ctx->pc = 0x299734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299730u;
    // 0x299734: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x299730u, 0x299738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299738u;
label_299738:
    // 0x299738: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x299738u;
    {
        const bool branch_taken_0x299738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299738u;
        // 0x29973c: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299738) {
            ctx->pc = 0x299788u;
            goto label_299788;
        }
    }
    ctx->pc = 0x299740u;
label_299740:
    // 0x299740: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x299740u;
    SET_GPR_U32(ctx, 31, 0x299748u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x299740u, 0x299748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299748u;
label_299748:
    // 0x299748: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x299748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x29974c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29974Cu;
    {
        const bool branch_taken_0x29974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29974Cu;
        // 0x299750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29974c) {
            ctx->pc = 0x29978Cu;
            goto label_29978c;
        }
    }
    ctx->pc = 0x299754u;
    // 0x299754: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x299754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x299758: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x299758u;
    {
        const bool branch_taken_0x299758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299758) {
            ctx->pc = 0x29975Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299758u;
            // 0x29975c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29978Cu;
            goto label_29978c;
        }
    }
    ctx->pc = 0x299760u;
    // 0x299760: 0xc0a65f8  jal         func_2997E0
    ctx->pc = 0x299760u;
    SET_GPR_U32(ctx, 31, 0x299768u);
    ctx->pc = 0x299764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299760u;
    // 0x299764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2997E0u, 0x299760u, 0x299768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299768u;
label_299768:
    // 0x299768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29976c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29976Cu;
    {
        const bool branch_taken_0x29976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29976Cu;
        // 0x299770: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29976c) {
            ctx->pc = 0x299788u;
            goto label_299788;
        }
    }
    ctx->pc = 0x299774u;
    // 0x299774: 0x0  nop
    ctx->pc = 0x299774u;
    // NOP
label_299778:
    // 0x299778: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x299778u;
    SET_GPR_U32(ctx, 31, 0x299780u);
    ctx->pc = 0x29977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299778u;
    // 0x29977c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x299778u, 0x299780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299780u;
label_299780:
    // 0x299780: 0xc0a67c8  jal         func_299F20
    ctx->pc = 0x299780u;
    SET_GPR_U32(ctx, 31, 0x299788u);
    ctx->pc = 0x299784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299780u;
    // 0x299784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F20u, 0x299780u, 0x299788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299788u;
label_299788:
    // 0x299788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x299788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29978c:
    // 0x29978c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29978cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x299790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x299794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299798: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x299798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29979c: 0x3e00008  jr          $ra
    ctx->pc = 0x29979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29979Cu;
        // 0x2997a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29979Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2997A4u;
    // 0x2997a4: 0x0  nop
    ctx->pc = 0x2997a4u;
    // NOP
    ctx->pc = 0x2997a8u;
}
