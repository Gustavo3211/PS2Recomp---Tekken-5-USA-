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

// Function: sub_003237F8
// Address: 0x3237f8 - 0x323958
void sub_003237F8_0x3237f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003237F8_0x3237f8");
#endif

    switch (ctx->pc) {
        case 0x3237f8u: goto label_3237f8;
        case 0x3237fcu: goto label_3237fc;
        case 0x323800u: goto label_323800;
        case 0x323804u: goto label_323804;
        case 0x323808u: goto label_323808;
        case 0x32380cu: goto label_32380c;
        case 0x323810u: goto label_323810;
        case 0x323814u: goto label_323814;
        case 0x323818u: goto label_323818;
        case 0x32381cu: goto label_32381c;
        case 0x323820u: goto label_323820;
        case 0x323824u: goto label_323824;
        case 0x323828u: goto label_323828;
        case 0x32382cu: goto label_32382c;
        case 0x323830u: goto label_323830;
        case 0x323834u: goto label_323834;
        case 0x323838u: goto label_323838;
        case 0x32383cu: goto label_32383c;
        case 0x323840u: goto label_323840;
        case 0x323844u: goto label_323844;
        case 0x323848u: goto label_323848;
        case 0x32384cu: goto label_32384c;
        case 0x323850u: goto label_323850;
        case 0x323854u: goto label_323854;
        case 0x323858u: goto label_323858;
        case 0x32385cu: goto label_32385c;
        case 0x323860u: goto label_323860;
        case 0x323864u: goto label_323864;
        case 0x323868u: goto label_323868;
        case 0x32386cu: goto label_32386c;
        case 0x323870u: goto label_323870;
        case 0x323874u: goto label_323874;
        case 0x323878u: goto label_323878;
        case 0x32387cu: goto label_32387c;
        case 0x323880u: goto label_323880;
        case 0x323884u: goto label_323884;
        case 0x323888u: goto label_323888;
        case 0x32388cu: goto label_32388c;
        case 0x323890u: goto label_323890;
        case 0x323894u: goto label_323894;
        case 0x323898u: goto label_323898;
        case 0x32389cu: goto label_32389c;
        case 0x3238a0u: goto label_3238a0;
        case 0x3238a4u: goto label_3238a4;
        case 0x3238a8u: goto label_3238a8;
        case 0x3238acu: goto label_3238ac;
        case 0x3238b0u: goto label_3238b0;
        case 0x3238b4u: goto label_3238b4;
        case 0x3238b8u: goto label_3238b8;
        case 0x3238bcu: goto label_3238bc;
        case 0x3238c0u: goto label_3238c0;
        case 0x3238c4u: goto label_3238c4;
        case 0x3238c8u: goto label_3238c8;
        case 0x3238ccu: goto label_3238cc;
        case 0x3238d0u: goto label_3238d0;
        case 0x3238d4u: goto label_3238d4;
        case 0x3238d8u: goto label_3238d8;
        case 0x3238dcu: goto label_3238dc;
        case 0x3238e0u: goto label_3238e0;
        case 0x3238e4u: goto label_3238e4;
        case 0x3238e8u: goto label_3238e8;
        case 0x3238ecu: goto label_3238ec;
        case 0x3238f0u: goto label_3238f0;
        case 0x3238f4u: goto label_3238f4;
        case 0x3238f8u: goto label_3238f8;
        case 0x3238fcu: goto label_3238fc;
        case 0x323900u: goto label_323900;
        case 0x323904u: goto label_323904;
        case 0x323908u: goto label_323908;
        case 0x32390cu: goto label_32390c;
        case 0x323910u: goto label_323910;
        case 0x323914u: goto label_323914;
        case 0x323918u: goto label_323918;
        case 0x32391cu: goto label_32391c;
        case 0x323920u: goto label_323920;
        case 0x323924u: goto label_323924;
        case 0x323928u: goto label_323928;
        case 0x32392cu: goto label_32392c;
        case 0x323930u: goto label_323930;
        case 0x323934u: goto label_323934;
        case 0x323938u: goto label_323938;
        case 0x32393cu: goto label_32393c;
        case 0x323940u: goto label_323940;
        case 0x323944u: goto label_323944;
        case 0x323948u: goto label_323948;
        case 0x32394cu: goto label_32394c;
        case 0x323950u: goto label_323950;
        case 0x323954u: goto label_323954;
        default: break;
    }

    ctx->pc = 0x3237f8u;

label_3237f8:
    // 0x3237f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3237f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3237fc:
    // 0x3237fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3237fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_323800:
    // 0x323800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323804:
    // 0x323804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323808:
    // 0x323808: 0xc0cb224  jal         func_32C890
label_32380c:
    if (ctx->pc == 0x32380Cu) {
        ctx->pc = 0x32380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323808u;
        // 0x32380c: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323810u;
        goto label_323810;
    }
    ctx->pc = 0x323808u;
    SET_GPR_U32(ctx, 31, 0x323810u);
    ctx->pc = 0x32380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323808u;
    // 0x32380c: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323808u, 0x323810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323810u;
label_323810:
    // 0x323810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323814:
    // 0x323814: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_323818:
    if (ctx->pc == 0x323818u) {
        ctx->pc = 0x323818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323814u;
        // 0x323818: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32381Cu;
        goto label_32381c;
    }
    ctx->pc = 0x323814u;
    {
        const bool branch_taken_0x323814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323814u;
        // 0x323818: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323814) {
            ctx->pc = 0x323840u;
            goto label_323840;
        }
    }
    ctx->pc = 0x32381Cu;
label_32381c:
    // 0x32381c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x32381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323820:
    // 0x323820: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x323820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323824:
    // 0x323824: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323828:
    // 0x323828: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
label_32382c:
    if (ctx->pc == 0x32382Cu) {
        ctx->pc = 0x32382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323828u;
        // 0x32382c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323830u;
        goto label_323830;
    }
    ctx->pc = 0x323828u;
    {
        const bool branch_taken_0x323828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x323828) {
            ctx->pc = 0x32382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323828u;
            // 0x32382c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323830u;
            goto label_323830;
        }
    }
    ctx->pc = 0x323830u;
label_323830:
    // 0x323830: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323834:
    // 0x323834: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x323834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_323838:
    // 0x323838: 0x40f809  jalr        $v0
label_32383c:
    if (ctx->pc == 0x32383Cu) {
        ctx->pc = 0x32383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323838u;
        // 0x32383c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323840u;
        goto label_323840;
    }
    ctx->pc = 0x323838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323840u);
        ctx->pc = 0x32383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323838u;
        // 0x32383c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323838u, 0x323840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323840u;
label_323840:
    // 0x323840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323844:
    // 0x323844: 0x3e00008  jr          $ra
label_323848:
    if (ctx->pc == 0x323848u) {
        ctx->pc = 0x323848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323844u;
        // 0x323848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32384Cu;
        goto label_32384c;
    }
    ctx->pc = 0x323844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323844u;
        // 0x323848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32384Cu;
label_32384c:
    // 0x32384c: 0x0  nop
    ctx->pc = 0x32384cu;
    // NOP
label_323850:
    // 0x323850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323854:
    // 0x323854: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x323854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_323858:
    // 0x323858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32385c:
    // 0x32385c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x32385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323860:
    // 0x323860: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x323860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323864:
    // 0x323864: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323868:
    // 0x323868: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_32386c:
    if (ctx->pc == 0x32386Cu) {
        ctx->pc = 0x32386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323868u;
        // 0x32386c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323870u;
        goto label_323870;
    }
    ctx->pc = 0x323868u;
    {
        const bool branch_taken_0x323868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x323868) {
            ctx->pc = 0x32386Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323868u;
            // 0x32386c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323870u;
            goto label_323870;
        }
    }
    ctx->pc = 0x323870u;
label_323870:
    // 0x323870: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323874:
    // 0x323874: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x323874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_323878:
    // 0x323878: 0x40f809  jalr        $v0
label_32387c:
    if (ctx->pc == 0x32387Cu) {
        ctx->pc = 0x32387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323878u;
        // 0x32387c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323880u;
        goto label_323880;
    }
    ctx->pc = 0x323878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323880u);
        ctx->pc = 0x32387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323878u;
        // 0x32387c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323878u, 0x323880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323880u;
label_323880:
    // 0x323880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323884:
    // 0x323884: 0x3e00008  jr          $ra
label_323888:
    if (ctx->pc == 0x323888u) {
        ctx->pc = 0x323888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323884u;
        // 0x323888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32388Cu;
        goto label_32388c;
    }
    ctx->pc = 0x323884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323884u;
        // 0x323888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32388Cu;
label_32388c:
    // 0x32388c: 0x0  nop
    ctx->pc = 0x32388cu;
    // NOP
label_323890:
    // 0x323890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_323894:
    // 0x323894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323898:
    // 0x323898: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323898u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_32389c:
    // 0x32389c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3238a0:
    // 0x3238a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3238a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3238a4:
    // 0x3238a4: 0x261008c0  addiu       $s0, $s0, 0x8C0
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
label_3238a8:
    // 0x3238a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3238a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3238ac:
    // 0x3238ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3238acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3238b0:
    // 0x3238b0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3238b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3238b4:
    // 0x3238b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3238b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3238b8:
    // 0x3238b8: 0xc0cb224  jal         func_32C890
label_3238bc:
    if (ctx->pc == 0x3238BCu) {
        ctx->pc = 0x3238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238B8u;
        // 0x3238bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238C0u;
        goto label_3238c0;
    }
    ctx->pc = 0x3238B8u;
    SET_GPR_U32(ctx, 31, 0x3238C0u);
    ctx->pc = 0x3238BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238B8u;
    // 0x3238bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x3238B8u, 0x3238C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238C0u;
label_3238c0:
    // 0x3238c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3238c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3238c4:
    // 0x3238c4: 0xc0cb224  jal         func_32C890
label_3238c8:
    if (ctx->pc == 0x3238C8u) {
        ctx->pc = 0x3238C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238C4u;
        // 0x3238c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238CCu;
        goto label_3238cc;
    }
    ctx->pc = 0x3238C4u;
    SET_GPR_U32(ctx, 31, 0x3238CCu);
    ctx->pc = 0x3238C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238C4u;
    // 0x3238c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x3238C4u, 0x3238CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238CCu;
label_3238cc:
    // 0x3238cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3238ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3238d0:
    // 0x3238d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3238d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3238d4:
    // 0x3238d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3238d8:
    if (ctx->pc == 0x3238D8u) {
        ctx->pc = 0x3238D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D4u;
        // 0x3238d8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238DCu;
        goto label_3238dc;
    }
    ctx->pc = 0x3238D4u;
    {
        const bool branch_taken_0x3238d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3238D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D4u;
        // 0x3238d8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3238d4) {
            ctx->pc = 0x323900u;
            goto label_323900;
        }
    }
    ctx->pc = 0x3238DCu;
label_3238dc:
    // 0x3238dc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3238dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3238e0:
    // 0x3238e0: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x3238e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3238e4:
    // 0x3238e4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3238e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_3238e8:
    // 0x3238e8: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
label_3238ec:
    if (ctx->pc == 0x3238ECu) {
        ctx->pc = 0x3238ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238E8u;
        // 0x3238ec: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238F0u;
        goto label_3238f0;
    }
    ctx->pc = 0x3238E8u;
    {
        const bool branch_taken_0x3238e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3238e8) {
            ctx->pc = 0x3238ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3238E8u;
            // 0x3238ec: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3238F0u;
            goto label_3238f0;
        }
    }
    ctx->pc = 0x3238F0u;
label_3238f0:
    // 0x3238f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3238f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3238f4:
    // 0x3238f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3238f8:
    // 0x3238f8: 0x40f809  jalr        $v0
label_3238fc:
    if (ctx->pc == 0x3238FCu) {
        ctx->pc = 0x3238FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238F8u;
        // 0x3238fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323900u;
        goto label_323900;
    }
    ctx->pc = 0x3238F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323900u);
        ctx->pc = 0x3238FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238F8u;
        // 0x3238fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238F8u, 0x323900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323900u;
label_323900:
    // 0x323900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323904:
    // 0x323904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_323908:
    // 0x323908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32390c:
    // 0x32390c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x32390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_323910:
    // 0x323910: 0x3e00008  jr          $ra
label_323914:
    if (ctx->pc == 0x323914u) {
        ctx->pc = 0x323914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323910u;
        // 0x323914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323918u;
        goto label_323918;
    }
    ctx->pc = 0x323910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323910u;
        // 0x323914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323918u;
label_323918:
    // 0x323918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32391c:
    // 0x32391c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_323920:
    // 0x323920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323924:
    // 0x323924: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x323924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323928:
    // 0x323928: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x323928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32392c:
    // 0x32392c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x32392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323930:
    // 0x323930: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_323934:
    if (ctx->pc == 0x323934u) {
        ctx->pc = 0x323934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323930u;
        // 0x323934: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323938u;
        goto label_323938;
    }
    ctx->pc = 0x323930u;
    {
        const bool branch_taken_0x323930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x323930) {
            ctx->pc = 0x323934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323930u;
            // 0x323934: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323938u;
            goto label_323938;
        }
    }
    ctx->pc = 0x323938u;
label_323938:
    // 0x323938: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_32393c:
    // 0x32393c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_323940:
    // 0x323940: 0x40f809  jalr        $v0
label_323944:
    if (ctx->pc == 0x323944u) {
        ctx->pc = 0x323944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323940u;
        // 0x323944: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323948u;
        goto label_323948;
    }
    ctx->pc = 0x323940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323948u);
        ctx->pc = 0x323944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323940u;
        // 0x323944: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323940u, 0x323948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323948u;
label_323948:
    // 0x323948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32394c:
    // 0x32394c: 0x3e00008  jr          $ra
label_323950:
    if (ctx->pc == 0x323950u) {
        ctx->pc = 0x323950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32394Cu;
        // 0x323950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323954u;
        goto label_323954;
    }
    ctx->pc = 0x32394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32394Cu;
        // 0x323950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323954u;
label_323954:
    // 0x323954: 0x0  nop
    ctx->pc = 0x323954u;
    // NOP
    ctx->pc = 0x323958u;
}
