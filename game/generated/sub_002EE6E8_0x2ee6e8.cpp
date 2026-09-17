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

// Function: sub_002EE6E8
// Address: 0x2ee6e8 - 0x2ee8a8
void sub_002EE6E8_0x2ee6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE6E8_0x2ee6e8");
#endif

    switch (ctx->pc) {
        case 0x2ee6e8u: goto label_2ee6e8;
        case 0x2ee6ecu: goto label_2ee6ec;
        case 0x2ee6f0u: goto label_2ee6f0;
        case 0x2ee6f4u: goto label_2ee6f4;
        case 0x2ee6f8u: goto label_2ee6f8;
        case 0x2ee6fcu: goto label_2ee6fc;
        case 0x2ee700u: goto label_2ee700;
        case 0x2ee704u: goto label_2ee704;
        case 0x2ee708u: goto label_2ee708;
        case 0x2ee70cu: goto label_2ee70c;
        case 0x2ee710u: goto label_2ee710;
        case 0x2ee714u: goto label_2ee714;
        case 0x2ee718u: goto label_2ee718;
        case 0x2ee71cu: goto label_2ee71c;
        case 0x2ee720u: goto label_2ee720;
        case 0x2ee724u: goto label_2ee724;
        case 0x2ee728u: goto label_2ee728;
        case 0x2ee72cu: goto label_2ee72c;
        case 0x2ee730u: goto label_2ee730;
        case 0x2ee734u: goto label_2ee734;
        case 0x2ee738u: goto label_2ee738;
        case 0x2ee73cu: goto label_2ee73c;
        case 0x2ee740u: goto label_2ee740;
        case 0x2ee744u: goto label_2ee744;
        case 0x2ee748u: goto label_2ee748;
        case 0x2ee74cu: goto label_2ee74c;
        case 0x2ee750u: goto label_2ee750;
        case 0x2ee754u: goto label_2ee754;
        case 0x2ee758u: goto label_2ee758;
        case 0x2ee75cu: goto label_2ee75c;
        case 0x2ee760u: goto label_2ee760;
        case 0x2ee764u: goto label_2ee764;
        case 0x2ee768u: goto label_2ee768;
        case 0x2ee76cu: goto label_2ee76c;
        case 0x2ee770u: goto label_2ee770;
        case 0x2ee774u: goto label_2ee774;
        case 0x2ee778u: goto label_2ee778;
        case 0x2ee77cu: goto label_2ee77c;
        case 0x2ee780u: goto label_2ee780;
        case 0x2ee784u: goto label_2ee784;
        case 0x2ee788u: goto label_2ee788;
        case 0x2ee78cu: goto label_2ee78c;
        case 0x2ee790u: goto label_2ee790;
        case 0x2ee794u: goto label_2ee794;
        case 0x2ee798u: goto label_2ee798;
        case 0x2ee79cu: goto label_2ee79c;
        case 0x2ee7a0u: goto label_2ee7a0;
        case 0x2ee7a4u: goto label_2ee7a4;
        case 0x2ee7a8u: goto label_2ee7a8;
        case 0x2ee7acu: goto label_2ee7ac;
        case 0x2ee7b0u: goto label_2ee7b0;
        case 0x2ee7b4u: goto label_2ee7b4;
        case 0x2ee7b8u: goto label_2ee7b8;
        case 0x2ee7bcu: goto label_2ee7bc;
        case 0x2ee7c0u: goto label_2ee7c0;
        case 0x2ee7c4u: goto label_2ee7c4;
        case 0x2ee7c8u: goto label_2ee7c8;
        case 0x2ee7ccu: goto label_2ee7cc;
        case 0x2ee7d0u: goto label_2ee7d0;
        case 0x2ee7d4u: goto label_2ee7d4;
        case 0x2ee7d8u: goto label_2ee7d8;
        case 0x2ee7dcu: goto label_2ee7dc;
        case 0x2ee7e0u: goto label_2ee7e0;
        case 0x2ee7e4u: goto label_2ee7e4;
        case 0x2ee7e8u: goto label_2ee7e8;
        case 0x2ee7ecu: goto label_2ee7ec;
        case 0x2ee7f0u: goto label_2ee7f0;
        case 0x2ee7f4u: goto label_2ee7f4;
        case 0x2ee7f8u: goto label_2ee7f8;
        case 0x2ee7fcu: goto label_2ee7fc;
        case 0x2ee800u: goto label_2ee800;
        case 0x2ee804u: goto label_2ee804;
        case 0x2ee808u: goto label_2ee808;
        case 0x2ee80cu: goto label_2ee80c;
        case 0x2ee810u: goto label_2ee810;
        case 0x2ee814u: goto label_2ee814;
        case 0x2ee818u: goto label_2ee818;
        case 0x2ee81cu: goto label_2ee81c;
        case 0x2ee820u: goto label_2ee820;
        case 0x2ee824u: goto label_2ee824;
        case 0x2ee828u: goto label_2ee828;
        case 0x2ee82cu: goto label_2ee82c;
        case 0x2ee830u: goto label_2ee830;
        case 0x2ee834u: goto label_2ee834;
        case 0x2ee838u: goto label_2ee838;
        case 0x2ee83cu: goto label_2ee83c;
        case 0x2ee840u: goto label_2ee840;
        case 0x2ee844u: goto label_2ee844;
        case 0x2ee848u: goto label_2ee848;
        case 0x2ee84cu: goto label_2ee84c;
        case 0x2ee850u: goto label_2ee850;
        case 0x2ee854u: goto label_2ee854;
        case 0x2ee858u: goto label_2ee858;
        case 0x2ee85cu: goto label_2ee85c;
        case 0x2ee860u: goto label_2ee860;
        case 0x2ee864u: goto label_2ee864;
        case 0x2ee868u: goto label_2ee868;
        case 0x2ee86cu: goto label_2ee86c;
        case 0x2ee870u: goto label_2ee870;
        case 0x2ee874u: goto label_2ee874;
        case 0x2ee878u: goto label_2ee878;
        case 0x2ee87cu: goto label_2ee87c;
        case 0x2ee880u: goto label_2ee880;
        case 0x2ee884u: goto label_2ee884;
        case 0x2ee888u: goto label_2ee888;
        case 0x2ee88cu: goto label_2ee88c;
        case 0x2ee890u: goto label_2ee890;
        case 0x2ee894u: goto label_2ee894;
        case 0x2ee898u: goto label_2ee898;
        case 0x2ee89cu: goto label_2ee89c;
        case 0x2ee8a0u: goto label_2ee8a0;
        case 0x2ee8a4u: goto label_2ee8a4;
        default: break;
    }

    ctx->pc = 0x2ee6e8u;

label_2ee6e8:
    // 0x2ee6e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ee6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ee6ec:
    // 0x2ee6ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ee6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2ee6f0:
    // 0x2ee6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee6f4:
    // 0x2ee6f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ee6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2ee6f8:
    // 0x2ee6f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ee6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ee6fc:
    // 0x2ee6fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ee6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2ee700:
    // 0x2ee700: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ee700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee704:
    // 0x2ee704: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ee704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2ee708:
    // 0x2ee708: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ee708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2ee70c:
    // 0x2ee70c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ee70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2ee710:
    // 0x2ee710: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ee710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2ee714:
    // 0x2ee714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ee714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ee718:
    // 0x2ee718: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ee718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee71c:
    // 0x2ee71c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ee720:
    // 0x2ee720: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ee720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee724:
    // 0x2ee724: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ee728:
    // 0x2ee728: 0x40f809  jalr        $v0
label_2ee72c:
    if (ctx->pc == 0x2EE72Cu) {
        ctx->pc = 0x2EE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE728u;
        // 0x2ee72c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE730u;
        goto label_2ee730;
    }
    ctx->pc = 0x2EE728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE730u);
        ctx->pc = 0x2EE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE728u;
        // 0x2ee72c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE728u, 0x2EE730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE730u;
label_2ee730:
    // 0x2ee730: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee734:
    // 0x2ee734: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ee734u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee738:
    // 0x2ee738: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2ee738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2ee73c:
    // 0x2ee73c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee740:
    // 0x2ee740: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ee744:
    // 0x2ee744: 0x40f809  jalr        $v0
label_2ee748:
    if (ctx->pc == 0x2EE748u) {
        ctx->pc = 0x2EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE744u;
        // 0x2ee748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE74Cu;
        goto label_2ee74c;
    }
    ctx->pc = 0x2EE744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE74Cu);
        ctx->pc = 0x2EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE744u;
        // 0x2ee748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE744u, 0x2EE74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE74Cu;
label_2ee74c:
    // 0x2ee74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee750:
    // 0x2ee750: 0xc0bb974  jal         func_2EE5D0
label_2ee754:
    if (ctx->pc == 0x2EE754u) {
        ctx->pc = 0x2EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE750u;
        // 0x2ee754: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE758u;
        goto label_2ee758;
    }
    ctx->pc = 0x2EE750u;
    SET_GPR_U32(ctx, 31, 0x2EE758u);
    ctx->pc = 0x2EE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE750u;
    // 0x2ee754: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5D0u, 0x2EE750u, 0x2EE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE758u;
label_2ee758:
    // 0x2ee758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee75c:
    // 0x2ee75c: 0xc0bb978  jal         func_2EE5E0
label_2ee760:
    if (ctx->pc == 0x2EE760u) {
        ctx->pc = 0x2EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE75Cu;
        // 0x2ee760: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE764u;
        goto label_2ee764;
    }
    ctx->pc = 0x2EE75Cu;
    SET_GPR_U32(ctx, 31, 0x2EE764u);
    ctx->pc = 0x2EE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE75Cu;
    // 0x2ee760: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5E0u, 0x2EE75Cu, 0x2EE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE764u;
label_2ee764:
    // 0x2ee764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee768:
    // 0x2ee768: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2ee768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ee76c:
    // 0x2ee76c: 0xc0bb97c  jal         func_2EE5F0
label_2ee770:
    if (ctx->pc == 0x2EE770u) {
        ctx->pc = 0x2EE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE76Cu;
        // 0x2ee770: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE774u;
        goto label_2ee774;
    }
    ctx->pc = 0x2EE76Cu;
    SET_GPR_U32(ctx, 31, 0x2EE774u);
    ctx->pc = 0x2EE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE76Cu;
    // 0x2ee770: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5F0u, 0x2EE76Cu, 0x2EE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE774u;
label_2ee774:
    // 0x2ee774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee778:
    // 0x2ee778: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2ee778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ee77c:
    // 0x2ee77c: 0xc0bb986  jal         func_2EE618
label_2ee780:
    if (ctx->pc == 0x2EE780u) {
        ctx->pc = 0x2EE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE77Cu;
        // 0x2ee780: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE784u;
        goto label_2ee784;
    }
    ctx->pc = 0x2EE77Cu;
    SET_GPR_U32(ctx, 31, 0x2EE784u);
    ctx->pc = 0x2EE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE77Cu;
    // 0x2ee780: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE618u, 0x2EE77Cu, 0x2EE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE784u;
label_2ee784:
    // 0x2ee784: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x2ee784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2ee788:
    // 0x2ee788: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ee78c:
    if (ctx->pc == 0x2EE78Cu) {
        ctx->pc = 0x2EE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE788u;
        // 0x2ee78c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE790u;
        goto label_2ee790;
    }
    ctx->pc = 0x2EE788u;
    {
        const bool branch_taken_0x2ee788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE788u;
        // 0x2ee78c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee788) {
            ctx->pc = 0x2EE7A4u;
            goto label_2ee7a4;
        }
    }
    ctx->pc = 0x2EE790u;
label_2ee790:
    // 0x2ee790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ee790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ee794:
    // 0x2ee794: 0xc0a5d52  jal         func_297548
label_2ee798:
    if (ctx->pc == 0x2EE798u) {
        ctx->pc = 0x2EE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE794u;
        // 0x2ee798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE79Cu;
        goto label_2ee79c;
    }
    ctx->pc = 0x2EE794u;
    SET_GPR_U32(ctx, 31, 0x2EE79Cu);
    ctx->pc = 0x2EE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE794u;
    // 0x2ee798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2EE794u, 0x2EE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE79Cu;
label_2ee79c:
    // 0x2ee79c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ee79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ee7a0:
    // 0x2ee7a0: 0x24530006  addiu       $s3, $v0, 0x6
    ctx->pc = 0x2ee7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2ee7a4:
    // 0x2ee7a4: 0x6200019  bltz        $s1, . + 4 + (0x19 << 2)
label_2ee7a8:
    if (ctx->pc == 0x2EE7A8u) {
        ctx->pc = 0x2EE7ACu;
        goto label_2ee7ac;
    }
    ctx->pc = 0x2EE7A4u;
    {
        const bool branch_taken_0x2ee7a4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2ee7a4) {
            ctx->pc = 0x2EE80Cu;
            goto label_2ee80c;
        }
    }
    ctx->pc = 0x2EE7ACu;
label_2ee7ac:
    // 0x2ee7ac: 0x16c0000e  bnez        $s6, . + 4 + (0xE << 2)
label_2ee7b0:
    if (ctx->pc == 0x2EE7B0u) {
        ctx->pc = 0x2EE7B4u;
        goto label_2ee7b4;
    }
    ctx->pc = 0x2EE7ACu;
    {
        const bool branch_taken_0x2ee7ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7ac) {
            ctx->pc = 0x2EE7E8u;
            goto label_2ee7e8;
        }
    }
    ctx->pc = 0x2EE7B4u;
label_2ee7b4:
    // 0x2ee7b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ee7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee7b8:
    // 0x2ee7b8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2ee7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2ee7bc:
    // 0x2ee7bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ee7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee7c0:
    // 0x2ee7c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ee7c4:
    // 0x2ee7c4: 0x40f809  jalr        $v0
label_2ee7c8:
    if (ctx->pc == 0x2EE7C8u) {
        ctx->pc = 0x2EE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7C4u;
        // 0x2ee7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7CCu;
        goto label_2ee7cc;
    }
    ctx->pc = 0x2EE7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE7CCu);
        ctx->pc = 0x2EE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7C4u;
        // 0x2ee7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7C4u, 0x2EE7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE7CCu;
label_2ee7cc:
    // 0x2ee7cc: 0x3c038070  lui         $v1, 0x8070
    ctx->pc = 0x2ee7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32880 << 16));
label_2ee7d0:
    // 0x2ee7d0: 0x3c0580df  lui         $a1, 0x80DF
    ctx->pc = 0x2ee7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32991 << 16));
label_2ee7d4:
    // 0x2ee7d4: 0x34637070  ori         $v1, $v1, 0x7070
    ctx->pc = 0x2ee7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28784);
label_2ee7d8:
    // 0x2ee7d8: 0x34a5cfcf  ori         $a1, $a1, 0xCFCF
    ctx->pc = 0x2ee7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53199);
label_2ee7dc:
    // 0x2ee7dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ee7e0:
    if (ctx->pc == 0x2EE7E0u) {
        ctx->pc = 0x2EE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7DCu;
        // 0x2ee7e0: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7E4u;
        goto label_2ee7e4;
    }
    ctx->pc = 0x2EE7DCu;
    {
        const bool branch_taken_0x2ee7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7DCu;
        // 0x2ee7e0: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7dc) {
            ctx->pc = 0x2EE7F0u;
            goto label_2ee7f0;
        }
    }
    ctx->pc = 0x2EE7E4u;
label_2ee7e4:
    // 0x2ee7e4: 0x0  nop
    ctx->pc = 0x2ee7e4u;
    // NOP
label_2ee7e8:
    // 0x2ee7e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2ee7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2ee7ec:
    // 0x2ee7ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ee7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2ee7f0:
    // 0x2ee7f0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ee7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_2ee7f4:
    // 0x2ee7f4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ee7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee7f8:
    // 0x2ee7f8: 0x24840c28  addiu       $a0, $a0, 0xC28
    ctx->pc = 0x2ee7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3112));
label_2ee7fc:
    // 0x2ee7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee800:
    // 0x2ee800: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ee800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee804:
    // 0x2ee804: 0xc0b640e  jal         func_2D9038
label_2ee808:
    if (ctx->pc == 0x2EE808u) {
        ctx->pc = 0x2EE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE804u;
        // 0x2ee808: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE80Cu;
        goto label_2ee80c;
    }
    ctx->pc = 0x2EE804u;
    SET_GPR_U32(ctx, 31, 0x2EE80Cu);
    ctx->pc = 0x2EE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE804u;
    // 0x2ee808: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EE804u, 0x2EE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE80Cu;
label_2ee80c:
    // 0x2ee80c: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_2ee810:
    if (ctx->pc == 0x2EE810u) {
        ctx->pc = 0x2EE814u;
        goto label_2ee814;
    }
    ctx->pc = 0x2EE80Cu;
    {
        const bool branch_taken_0x2ee80c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee80c) {
            ctx->pc = 0x2EE834u;
            goto label_2ee834;
        }
    }
    ctx->pc = 0x2EE814u;
label_2ee814:
    // 0x2ee814: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_2ee818:
    if (ctx->pc == 0x2EE818u) {
        ctx->pc = 0x2EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE814u;
        // 0x2ee818: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE81Cu;
        goto label_2ee81c;
    }
    ctx->pc = 0x2EE814u;
    {
        const bool branch_taken_0x2ee814 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE814u;
        // 0x2ee818: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee814) {
            ctx->pc = 0x2EE834u;
            goto label_2ee834;
        }
    }
    ctx->pc = 0x2EE81Cu;
label_2ee81c:
    // 0x2ee81c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ee81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee820:
    // 0x2ee820: 0x24840c38  addiu       $a0, $a0, 0xC38
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3128));
label_2ee824:
    // 0x2ee824: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2ee824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee828:
    // 0x2ee828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ee828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee82c:
    // 0x2ee82c: 0xc0b640e  jal         func_2D9038
label_2ee830:
    if (ctx->pc == 0x2EE830u) {
        ctx->pc = 0x2EE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE82Cu;
        // 0x2ee830: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE834u;
        goto label_2ee834;
    }
    ctx->pc = 0x2EE82Cu;
    SET_GPR_U32(ctx, 31, 0x2EE834u);
    ctx->pc = 0x2EE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE82Cu;
    // 0x2ee830: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EE82Cu, 0x2EE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE834u;
label_2ee834:
    // 0x2ee834: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_2ee838:
    if (ctx->pc == 0x2EE838u) {
        ctx->pc = 0x2EE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE834u;
        // 0x2ee838: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE83Cu;
        goto label_2ee83c;
    }
    ctx->pc = 0x2EE834u;
    {
        const bool branch_taken_0x2ee834 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE834u;
        // 0x2ee838: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee834) {
            ctx->pc = 0x2EE87Cu;
            goto label_2ee87c;
        }
    }
    ctx->pc = 0x2EE83Cu;
label_2ee83c:
    // 0x2ee83c: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
label_2ee840:
    if (ctx->pc == 0x2EE840u) {
        ctx->pc = 0x2EE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE83Cu;
        // 0x2ee840: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE844u;
        goto label_2ee844;
    }
    ctx->pc = 0x2EE83Cu;
    {
        const bool branch_taken_0x2ee83c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2EE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE83Cu;
        // 0x2ee840: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee83c) {
            ctx->pc = 0x2EE860u;
            goto label_2ee860;
        }
    }
    ctx->pc = 0x2EE844u;
label_2ee844:
    // 0x2ee844: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ee844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee848:
    // 0x2ee848: 0x24844a98  addiu       $a0, $a0, 0x4A98
    ctx->pc = 0x2ee848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
label_2ee84c:
    // 0x2ee84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee850:
    // 0x2ee850: 0xc0b640e  jal         func_2D9038
label_2ee854:
    if (ctx->pc == 0x2EE854u) {
        ctx->pc = 0x2EE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE850u;
        // 0x2ee854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE858u;
        goto label_2ee858;
    }
    ctx->pc = 0x2EE850u;
    SET_GPR_U32(ctx, 31, 0x2EE858u);
    ctx->pc = 0x2EE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE850u;
    // 0x2ee854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EE850u, 0x2EE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE858u;
label_2ee858:
    // 0x2ee858: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ee85c:
    if (ctx->pc == 0x2EE85Cu) {
        ctx->pc = 0x2EE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE858u;
        // 0x2ee85c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE860u;
        goto label_2ee860;
    }
    ctx->pc = 0x2EE858u;
    {
        const bool branch_taken_0x2ee858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE858u;
        // 0x2ee85c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee858) {
            ctx->pc = 0x2EE87Cu;
            goto label_2ee87c;
        }
    }
    ctx->pc = 0x2EE860u;
label_2ee860:
    // 0x2ee860: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
label_2ee864:
    if (ctx->pc == 0x2EE864u) {
        ctx->pc = 0x2EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE860u;
        // 0x2ee864: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE868u;
        goto label_2ee868;
    }
    ctx->pc = 0x2EE860u;
    {
        const bool branch_taken_0x2ee860 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE860u;
        // 0x2ee864: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee860) {
            ctx->pc = 0x2EE878u;
            goto label_2ee878;
        }
    }
    ctx->pc = 0x2EE868u;
label_2ee868:
    // 0x2ee868: 0x24844a98  addiu       $a0, $a0, 0x4A98
    ctx->pc = 0x2ee868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
label_2ee86c:
    // 0x2ee86c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee870:
    // 0x2ee870: 0xc0b640e  jal         func_2D9038
label_2ee874:
    if (ctx->pc == 0x2EE874u) {
        ctx->pc = 0x2EE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE870u;
        // 0x2ee874: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE878u;
        goto label_2ee878;
    }
    ctx->pc = 0x2EE870u;
    SET_GPR_U32(ctx, 31, 0x2EE878u);
    ctx->pc = 0x2EE874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE870u;
    // 0x2ee874: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EE870u, 0x2EE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE878u;
label_2ee878:
    // 0x2ee878: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ee878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee87c:
    // 0x2ee87c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ee87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ee880:
    // 0x2ee880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ee880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee884:
    // 0x2ee884: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ee884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ee888:
    // 0x2ee888: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ee888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee88c:
    // 0x2ee88c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ee88cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ee890:
    // 0x2ee890: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ee890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee894:
    // 0x2ee894: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ee894u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ee898:
    // 0x2ee898: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ee898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee89c:
    // 0x2ee89c: 0x3e00008  jr          $ra
label_2ee8a0:
    if (ctx->pc == 0x2EE8A0u) {
        ctx->pc = 0x2EE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE89Cu;
        // 0x2ee8a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8A4u;
        goto label_2ee8a4;
    }
    ctx->pc = 0x2EE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE89Cu;
        // 0x2ee8a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE8A4u;
label_2ee8a4:
    // 0x2ee8a4: 0x0  nop
    ctx->pc = 0x2ee8a4u;
    // NOP
    ctx->pc = 0x2ee8a8u;
}
