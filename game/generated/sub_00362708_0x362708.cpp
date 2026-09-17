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

// Function: sub_00362708
// Address: 0x362708 - 0x3628e8
void sub_00362708_0x362708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362708_0x362708");
#endif

    switch (ctx->pc) {
        case 0x362718u: goto label_362718;
        case 0x362734u: goto label_362734;
        case 0x362744u: goto label_362744;
        case 0x362764u: goto label_362764;
        case 0x36276cu: goto label_36276c;
        case 0x362774u: goto label_362774;
        case 0x362784u: goto label_362784;
        case 0x3627a0u: goto label_3627a0;
        case 0x3627b0u: goto label_3627b0;
        case 0x3627b8u: goto label_3627b8;
        case 0x3627d8u: goto label_3627d8;
        case 0x3627e8u: goto label_3627e8;
        case 0x3627f0u: goto label_3627f0;
        case 0x3627f8u: goto label_3627f8;
        case 0x362800u: goto label_362800;
        case 0x362808u: goto label_362808;
        case 0x362810u: goto label_362810;
        case 0x362824u: goto label_362824;
        case 0x362840u: goto label_362840;
        case 0x362854u: goto label_362854;
        case 0x362868u: goto label_362868;
        case 0x362880u: goto label_362880;
        case 0x362890u: goto label_362890;
        case 0x362898u: goto label_362898;
        case 0x3628a0u: goto label_3628a0;
        case 0x3628a8u: goto label_3628a8;
        case 0x3628b0u: goto label_3628b0;
        case 0x3628b8u: goto label_3628b8;
        case 0x3628c0u: goto label_3628c0;
        case 0x3628d4u: goto label_3628d4;
        default: break;
    }

    ctx->pc = 0x362708u;

label_362708:
    // 0x362708: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x36270c: 0x3e00008  jr          $ra
    ctx->pc = 0x36270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36270Cu;
        // 0x362710: 0x8c625d00  lw          $v0, 0x5D00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362714u;
    // 0x362714: 0x0  nop
    ctx->pc = 0x362714u;
    // NOP
label_362718:
    // 0x362718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36271c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x362724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x362728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36272c: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x36272Cu;
    SET_GPR_U32(ctx, 31, 0x362734u);
    ctx->pc = 0x362730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36272Cu;
    // 0x362730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x36272Cu, 0x362734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362734u;
label_362734:
    // 0x362734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362734u;
    {
        const bool branch_taken_0x362734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362734u;
        // 0x362738: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362734) {
            ctx->pc = 0x362750u;
            goto label_362750;
        }
    }
    ctx->pc = 0x36273Cu;
    // 0x36273c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36273Cu;
    SET_GPR_U32(ctx, 31, 0x362744u);
    ctx->pc = 0x362740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36273Cu;
    // 0x362740: 0x24847408  addiu       $a0, $a0, 0x7408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36273Cu, 0x362744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362744u;
label_362744:
    // 0x362744: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362748: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x362748u;
    {
        const bool branch_taken_0x362748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362748u;
        // 0x36274c: 0x34420029  ori         $v0, $v0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362748) {
            ctx->pc = 0x362828u;
            goto label_362828;
        }
    }
    ctx->pc = 0x362750u;
label_362750:
    // 0x362750: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362758: 0x24847458  addiu       $a0, $a0, 0x7458
    ctx->pc = 0x362758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29784));
    // 0x36275c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36275Cu;
    SET_GPR_U32(ctx, 31, 0x362764u);
    ctx->pc = 0x362760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36275Cu;
    // 0x362760: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36275Cu, 0x362764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362764u;
label_362764:
    // 0x362764: 0xc0d89a6  jal         func_362698
    ctx->pc = 0x362764u;
    SET_GPR_U32(ctx, 31, 0x36276Cu);
    ctx->pc = 0x362698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362698u, 0x362764u, 0x36276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36276Cu;
label_36276c:
    // 0x36276c: 0xc0d89c2  jal         func_362708
    ctx->pc = 0x36276Cu;
    SET_GPR_U32(ctx, 31, 0x362774u);
    ctx->pc = 0x362708u;
    goto label_362708;
    ctx->pc = 0x362774u;
label_362774:
    // 0x362774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362774u;
    {
        const bool branch_taken_0x362774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362774) {
            ctx->pc = 0x362798u;
            goto label_362798;
        }
    }
    ctx->pc = 0x36277Cu;
    // 0x36277c: 0xc0d6eb0  jal         func_35BAC0
    ctx->pc = 0x36277Cu;
    SET_GPR_U32(ctx, 31, 0x362784u);
    ctx->pc = 0x362780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36277Cu;
    // 0x362780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BAC0u, 0x36277Cu, 0x362784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362784u;
label_362784:
    // 0x362784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x362784u;
    {
        const bool branch_taken_0x362784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362784) {
            ctx->pc = 0x3627B0u;
            goto label_3627b0;
        }
    }
    ctx->pc = 0x36278Cu;
    // 0x36278c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36278Cu;
    {
        const bool branch_taken_0x36278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36278c) {
            ctx->pc = 0x3627C0u;
            goto label_3627c0;
        }
    }
    ctx->pc = 0x362794u;
    // 0x362794: 0x0  nop
    ctx->pc = 0x362794u;
    // NOP
label_362798:
    // 0x362798: 0xc0d6e8a  jal         func_35BA28
    ctx->pc = 0x362798u;
    SET_GPR_U32(ctx, 31, 0x3627A0u);
    ctx->pc = 0x36279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362798u;
    // 0x36279c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA28u, 0x362798u, 0x3627A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627A0u;
label_3627a0:
    // 0x3627a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3627A0u;
    {
        const bool branch_taken_0x3627a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3627a0) {
            ctx->pc = 0x3627C0u;
            goto label_3627c0;
        }
    }
    ctx->pc = 0x3627A8u;
    // 0x3627a8: 0xc0d89be  jal         func_3626F8
    ctx->pc = 0x3627A8u;
    SET_GPR_U32(ctx, 31, 0x3627B0u);
    ctx->pc = 0x3627ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627A8u;
    // 0x3627ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626F8u, 0x3627A8u, 0x3627B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627B0u;
label_3627b0:
    // 0x3627b0: 0xc0d8b18  jal         func_362C60
    ctx->pc = 0x3627B0u;
    SET_GPR_U32(ctx, 31, 0x3627B8u);
    ctx->pc = 0x3627B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627B0u;
    // 0x3627b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C60u, 0x3627B0u, 0x3627B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627B8u;
label_3627b8:
    // 0x3627b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3627B8u;
    {
        const bool branch_taken_0x3627b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3627b8) {
            ctx->pc = 0x3627D0u;
            goto label_3627d0;
        }
    }
    ctx->pc = 0x3627C0u;
label_3627c0:
    // 0x3627c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3627c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3627c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3627C4u;
    {
        const bool branch_taken_0x3627c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3627C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627C4u;
        // 0x3627c8: 0x3442002b  ori         $v0, $v0, 0x2B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627c4) {
            ctx->pc = 0x362828u;
            goto label_362828;
        }
    }
    ctx->pc = 0x3627CCu;
    // 0x3627cc: 0x0  nop
    ctx->pc = 0x3627ccu;
    // NOP
label_3627d0:
    // 0x3627d0: 0xc0d60f8  jal         func_3583E0
    ctx->pc = 0x3627D0u;
    SET_GPR_U32(ctx, 31, 0x3627D8u);
    ctx->pc = 0x3627D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627D0u;
    // 0x3627d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583E0u, 0x3627D0u, 0x3627D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627D8u;
label_3627d8:
    // 0x3627d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3627D8u;
    {
        const bool branch_taken_0x3627d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3627DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627D8u;
        // 0x3627dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627d8) {
            ctx->pc = 0x36282Cu;
            goto label_36282c;
        }
    }
    ctx->pc = 0x3627E0u;
    // 0x3627e0: 0xc0d89b6  jal         func_3626D8
    ctx->pc = 0x3627E0u;
    SET_GPR_U32(ctx, 31, 0x3627E8u);
    ctx->pc = 0x3627E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627E0u;
    // 0x3627e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626D8u, 0x3627E0u, 0x3627E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627E8u;
label_3627e8:
    // 0x3627e8: 0xc0d89ba  jal         func_3626E8
    ctx->pc = 0x3627E8u;
    SET_GPR_U32(ctx, 31, 0x3627F0u);
    ctx->pc = 0x3627ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627E8u;
    // 0x3627ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626E8u, 0x3627E8u, 0x3627F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627F0u;
label_3627f0:
    // 0x3627f0: 0xc0d5f34  jal         func_357CD0
    ctx->pc = 0x3627F0u;
    SET_GPR_U32(ctx, 31, 0x3627F8u);
    ctx->pc = 0x357CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CD0u, 0x3627F0u, 0x3627F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627F8u;
label_3627f8:
    // 0x3627f8: 0xc0d70ee  jal         func_35C3B8
    ctx->pc = 0x3627F8u;
    SET_GPR_U32(ctx, 31, 0x362800u);
    ctx->pc = 0x35C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3B8u, 0x3627F8u, 0x362800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362800u;
label_362800:
    // 0x362800: 0xc0d77fa  jal         func_35DFE8
    ctx->pc = 0x362800u;
    SET_GPR_U32(ctx, 31, 0x362808u);
    ctx->pc = 0x35DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DFE8u, 0x362800u, 0x362808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362808u;
label_362808:
    // 0x362808: 0xc0d8b52  jal         func_362D48
    ctx->pc = 0x362808u;
    SET_GPR_U32(ctx, 31, 0x362810u);
    ctx->pc = 0x362D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D48u, 0x362808u, 0x362810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362810u;
label_362810:
    // 0x362810: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x362810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x362814: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x362814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x362818: 0x248434f0  addiu       $a0, $a0, 0x34F0
    ctx->pc = 0x362818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
    // 0x36281c: 0xc0d6c4e  jal         func_35B138
    ctx->pc = 0x36281Cu;
    SET_GPR_U32(ctx, 31, 0x362824u);
    ctx->pc = 0x362820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36281Cu;
    // 0x362820: 0x24a554f0  addiu       $a1, $a1, 0x54F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B138u, 0x36281Cu, 0x362824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362824u;
label_362824:
    // 0x362824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362828:
    // 0x362828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36282c:
    // 0x36282c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36282cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362834: 0x3e00008  jr          $ra
    ctx->pc = 0x362834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362834u;
        // 0x362838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36283Cu;
    // 0x36283c: 0x0  nop
    ctx->pc = 0x36283cu;
    // NOP
label_362840:
    // 0x362840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36284c: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x36284Cu;
    SET_GPR_U32(ctx, 31, 0x362854u);
    ctx->pc = 0x362850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36284Cu;
    // 0x362850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x36284Cu, 0x362854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362854u;
label_362854:
    // 0x362854: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362854u;
    {
        const bool branch_taken_0x362854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362854u;
        // 0x362858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362854) {
            ctx->pc = 0x362878u;
            goto label_362878;
        }
    }
    ctx->pc = 0x36285Cu;
    // 0x36285c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36285cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362860: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362860u;
    SET_GPR_U32(ctx, 31, 0x362868u);
    ctx->pc = 0x362864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362860u;
    // 0x362864: 0x24847478  addiu       $a0, $a0, 0x7478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362860u, 0x362868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362868u;
label_362868:
    // 0x362868: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36286c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x36286Cu;
    {
        const bool branch_taken_0x36286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36286Cu;
        // 0x362870: 0x34420029  ori         $v0, $v0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36286c) {
            ctx->pc = 0x3628D8u;
            goto label_3628d8;
        }
    }
    ctx->pc = 0x362874u;
    // 0x362874: 0x0  nop
    ctx->pc = 0x362874u;
    // NOP
label_362878:
    // 0x362878: 0xc0d60f8  jal         func_3583E0
    ctx->pc = 0x362878u;
    SET_GPR_U32(ctx, 31, 0x362880u);
    ctx->pc = 0x3583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583E0u, 0x362878u, 0x362880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362880u;
label_362880:
    // 0x362880: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x362880u;
    {
        const bool branch_taken_0x362880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362880u;
        // 0x362884: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362880) {
            ctx->pc = 0x3628DCu;
            goto label_3628dc;
        }
    }
    ctx->pc = 0x362888u;
    // 0x362888: 0xc0d89a6  jal         func_362698
    ctx->pc = 0x362888u;
    SET_GPR_U32(ctx, 31, 0x362890u);
    ctx->pc = 0x362698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362698u, 0x362888u, 0x362890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362890u;
label_362890:
    // 0x362890: 0xc0d89b6  jal         func_3626D8
    ctx->pc = 0x362890u;
    SET_GPR_U32(ctx, 31, 0x362898u);
    ctx->pc = 0x362894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362890u;
    // 0x362894: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626D8u, 0x362890u, 0x362898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362898u;
label_362898:
    // 0x362898: 0xc0d89ba  jal         func_3626E8
    ctx->pc = 0x362898u;
    SET_GPR_U32(ctx, 31, 0x3628A0u);
    ctx->pc = 0x36289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362898u;
    // 0x36289c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626E8u, 0x362898u, 0x3628A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A0u;
label_3628a0:
    // 0x3628a0: 0xc0d5f34  jal         func_357CD0
    ctx->pc = 0x3628A0u;
    SET_GPR_U32(ctx, 31, 0x3628A8u);
    ctx->pc = 0x357CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CD0u, 0x3628A0u, 0x3628A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A8u;
label_3628a8:
    // 0x3628a8: 0xc0d70ee  jal         func_35C3B8
    ctx->pc = 0x3628A8u;
    SET_GPR_U32(ctx, 31, 0x3628B0u);
    ctx->pc = 0x35C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3B8u, 0x3628A8u, 0x3628B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628B0u;
label_3628b0:
    // 0x3628b0: 0xc0d77fa  jal         func_35DFE8
    ctx->pc = 0x3628B0u;
    SET_GPR_U32(ctx, 31, 0x3628B8u);
    ctx->pc = 0x35DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DFE8u, 0x3628B0u, 0x3628B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628B8u;
label_3628b8:
    // 0x3628b8: 0xc0d8b52  jal         func_362D48
    ctx->pc = 0x3628B8u;
    SET_GPR_U32(ctx, 31, 0x3628C0u);
    ctx->pc = 0x362D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D48u, 0x3628B8u, 0x3628C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628C0u;
label_3628c0:
    // 0x3628c0: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x3628c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x3628c4: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x3628c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x3628c8: 0x248434f0  addiu       $a0, $a0, 0x34F0
    ctx->pc = 0x3628c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
    // 0x3628cc: 0xc0d6c4e  jal         func_35B138
    ctx->pc = 0x3628CCu;
    SET_GPR_U32(ctx, 31, 0x3628D4u);
    ctx->pc = 0x3628D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628CCu;
    // 0x3628d0: 0x24a554f0  addiu       $a1, $a1, 0x54F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B138u, 0x3628CCu, 0x3628D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628D4u;
label_3628d4:
    // 0x3628d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3628d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3628d8:
    // 0x3628d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3628d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3628dc:
    // 0x3628dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3628dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3628e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3628E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628E0u;
        // 0x3628e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3628E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3628E8u;
}
