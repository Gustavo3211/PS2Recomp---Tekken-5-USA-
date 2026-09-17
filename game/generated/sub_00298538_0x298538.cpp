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

// Function: sub_00298538
// Address: 0x298538 - 0x2988b8
void sub_00298538_0x298538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298538_0x298538");
#endif

    switch (ctx->pc) {
        case 0x298590u: goto label_298590;
        case 0x29859cu: goto label_29859c;
        case 0x2985a8u: goto label_2985a8;
        case 0x2985b8u: goto label_2985b8;
        case 0x2985c4u: goto label_2985c4;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985e8u: goto label_2985e8;
        case 0x2985f0u: goto label_2985f0;
        case 0x2985f8u: goto label_2985f8;
        case 0x298628u: goto label_298628;
        case 0x298630u: goto label_298630;
        case 0x29867cu: goto label_29867c;
        case 0x2986acu: goto label_2986ac;
        case 0x2986c0u: goto label_2986c0;
        case 0x298700u: goto label_298700;
        case 0x298714u: goto label_298714;
        case 0x298734u: goto label_298734;
        case 0x298748u: goto label_298748;
        case 0x298790u: goto label_298790;
        case 0x2987bcu: goto label_2987bc;
        case 0x2987c4u: goto label_2987c4;
        case 0x298838u: goto label_298838;
        case 0x298854u: goto label_298854;
        case 0x298884u: goto label_298884;
        default: break;
    }

    ctx->pc = 0x298538u;

    // 0x298538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29853c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x298540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29854c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x29854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x298550: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x298550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x298554: 0x504000d3  beql        $v0, $zero, . + 4 + (0xD3 << 2)
    ctx->pc = 0x298554u;
    {
        const bool branch_taken_0x298554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298554) {
            ctx->pc = 0x298558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298554u;
            // 0x298558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x29855Cu;
    // 0x29855c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29855cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298560: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x298560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x298564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298568: 0x8c63be20  lw          $v1, -0x41E0($v1)
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950432)));
    // 0x29856c: 0x600008  jr          $v1
    ctx->pc = 0x29856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298578u: goto label_298578;
            case 0x2985E0u: goto label_2985e0;
            case 0x298608u: goto label_298608;
            case 0x298620u: goto label_298620;
            case 0x298648u: goto label_298648;
            case 0x2986E0u: goto label_2986e0;
            case 0x2987B0u: goto label_2987b0;
            case 0x2987E8u: goto label_2987e8;
            case 0x298804u: goto label_298804;
            case 0x2988A0u: goto label_2988a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29856Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298574u;
    // 0x298574: 0x0  nop
    ctx->pc = 0x298574u;
    // NOP
label_298578:
    // 0x298578: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x29857c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298580: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x298580u;
    {
        const bool branch_taken_0x298580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298580u;
        // 0x298584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298580) {
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x298588u;
    // 0x298588: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x298588u;
    SET_GPR_U32(ctx, 31, 0x298590u);
    ctx->pc = 0x29858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298588u;
    // 0x29858c: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x298588u, 0x298590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298590u;
label_298590:
    // 0x298590: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x298590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x298594: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x298594u;
    SET_GPR_U32(ctx, 31, 0x29859Cu);
    ctx->pc = 0x298598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298594u;
    // 0x298598: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x298594u, 0x29859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29859Cu;
label_29859c:
    // 0x29859c: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x29859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2985a0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2985A0u;
    SET_GPR_U32(ctx, 31, 0x2985A8u);
    ctx->pc = 0x2985A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985A0u;
    // 0x2985a4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2985A0u, 0x2985A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985A8u;
label_2985a8:
    // 0x2985a8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2985a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2985ac: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2985acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2985b0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2985B0u;
    SET_GPR_U32(ctx, 31, 0x2985B8u);
    ctx->pc = 0x2985B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985B0u;
    // 0x2985b4: 0x24040056  addiu       $a0, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2985B0u, 0x2985B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985B8u;
label_2985b8:
    // 0x2985b8: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x2985b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x2985bc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2985BCu;
    SET_GPR_U32(ctx, 31, 0x2985C4u);
    ctx->pc = 0x2985C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985BCu;
    // 0x2985c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2985BCu, 0x2985C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985C4u;
label_2985c4:
    // 0x2985c4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2985c8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2985C8u;
    SET_GPR_U32(ctx, 31, 0x2985D0u);
    ctx->pc = 0x2985CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985C8u;
    // 0x2985cc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2985C8u, 0x2985D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D0u;
label_2985d0:
    // 0x2985d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2985d4: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x2985d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
    // 0x2985d8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2985D8u;
    {
        const bool branch_taken_0x2985d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985D8u;
        // 0x2985dc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985d8) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x2985E0u;
label_2985e0:
    // 0x2985e0: 0xc0a60cc  jal         func_298330
    ctx->pc = 0x2985E0u;
    SET_GPR_U32(ctx, 31, 0x2985E8u);
    ctx->pc = 0x2985E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985E0u;
    // 0x2985e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298330u, 0x2985E0u, 0x2985E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985E8u;
label_2985e8:
    // 0x2985e8: 0xc0a60e0  jal         func_298380
    ctx->pc = 0x2985E8u;
    SET_GPR_U32(ctx, 31, 0x2985F0u);
    ctx->pc = 0x2985ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985E8u;
    // 0x2985ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298380u, 0x2985E8u, 0x2985F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985F0u;
label_2985f0:
    // 0x2985f0: 0xc0a60c6  jal         func_298318
    ctx->pc = 0x2985F0u;
    SET_GPR_U32(ctx, 31, 0x2985F8u);
    ctx->pc = 0x2985F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985F0u;
    // 0x2985f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298318u, 0x2985F0u, 0x2985F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985F8u;
label_2985f8:
    // 0x2985f8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2985f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2985fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298600: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x298600u;
    {
        const bool branch_taken_0x298600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298600u;
        // 0x298604: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298600) {
            ctx->pc = 0x29863Cu;
            goto label_29863c;
        }
    }
    ctx->pc = 0x298608u;
label_298608:
    // 0x298608: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x29860c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x298610: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x298610u;
    {
        const bool branch_taken_0x298610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298610u;
        // 0x298614: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298610) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x298618u;
    // 0x298618: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x298618u;
    {
        const bool branch_taken_0x298618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298618u;
        // 0x29861c: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298618) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x298620u;
label_298620:
    // 0x298620: 0xc0a60c8  jal         func_298320
    ctx->pc = 0x298620u;
    SET_GPR_U32(ctx, 31, 0x298628u);
    ctx->pc = 0x298624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298620u;
    // 0x298624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298320u, 0x298620u, 0x298628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298628u;
label_298628:
    // 0x298628: 0xc0cb7c0  jal         func_32DF00
    ctx->pc = 0x298628u;
    SET_GPR_U32(ctx, 31, 0x298630u);
    ctx->pc = 0x29862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298628u;
    // 0x29862c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF00u, 0x298628u, 0x298630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298630u;
label_298630:
    // 0x298630: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x298634: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x298638: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x298638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_29863c:
    // 0x29863c: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x29863cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
    // 0x298640: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x298640u;
    {
        const bool branch_taken_0x298640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298640u;
        // 0x298644: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298640) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x298648u;
label_298648:
    // 0x298648: 0x26300084  addiu       $s0, $s1, 0x84
    ctx->pc = 0x298648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x29864c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298650: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x298654: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x298658: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29865c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x298660: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298660u;
    {
        const bool branch_taken_0x298660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x298664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298660u;
        // 0x298664: 0x8e280014  lw          $t0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298660) {
            ctx->pc = 0x298688u;
            goto label_298688;
        }
    }
    ctx->pc = 0x298668u;
    // 0x298668: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x298668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x29866c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298670: 0x240600f1  addiu       $a2, $zero, 0xF1
    ctx->pc = 0x298670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x298674: 0xc0ace0c  jal         func_2B3830
    ctx->pc = 0x298674u;
    SET_GPR_U32(ctx, 31, 0x29867Cu);
    ctx->pc = 0x298678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298674u;
    // 0x298678: 0x34e70400  ori         $a3, $a3, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3830u, 0x298674u, 0x29867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29867Cu;
label_29867c:
    // 0x29867c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29867Cu;
    {
        const bool branch_taken_0x29867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29867Cu;
        // 0x298680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29867c) {
            ctx->pc = 0x2986ACu;
            goto label_2986ac;
        }
    }
    ctx->pc = 0x298684u;
    // 0x298684: 0x0  nop
    ctx->pc = 0x298684u;
    // NOP
label_298688:
    // 0x298688: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x298688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x29868c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29868cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298694: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x298698: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x298698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29869c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x29869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2986a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2986a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a4: 0xc0acfca  jal         func_2B3F28
    ctx->pc = 0x2986A4u;
    SET_GPR_U32(ctx, 31, 0x2986ACu);
    ctx->pc = 0x2986A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986A4u;
    // 0x2986a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F28u, 0x2986A4u, 0x2986ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986ACu;
label_2986ac:
    // 0x2986ac: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x2986ACu;
    {
        const bool branch_taken_0x2986ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2986ac) {
            ctx->pc = 0x2986B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2986ACu;
            // 0x2986b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x2986B4u;
    // 0x2986b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2986b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986b8: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x2986B8u;
    SET_GPR_U32(ctx, 31, 0x2986C0u);
    ctx->pc = 0x2986BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986B8u;
    // 0x2986bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B10u, 0x2986B8u, 0x2986C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986C0u;
label_2986c0:
    // 0x2986c0: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2986c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2986c4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2986c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2986c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2986cc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2986ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2986d0: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x2986d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
    // 0x2986d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2986d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2986d8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2986D8u;
    {
        const bool branch_taken_0x2986d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986D8u;
        // 0x2986dc: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986d8) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x2986E0u;
label_2986e0:
    // 0x2986e0: 0x8e22016c  lw          $v0, 0x16C($s1)
    ctx->pc = 0x2986e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x2986e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2986E4u;
    {
        const bool branch_taken_0x2986e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986E4u;
        // 0x2986e8: 0x26300084  addiu       $s0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986e4) {
            ctx->pc = 0x298778u;
            goto label_298778;
        }
    }
    ctx->pc = 0x2986ECu;
    // 0x2986ec: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2986f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2986f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2986f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2986f8: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2986F8u;
    SET_GPR_U32(ctx, 31, 0x298700u);
    ctx->pc = 0x2986FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986F8u;
    // 0x2986fc: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2986F8u, 0x298700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298700u;
label_298700:
    // 0x298700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298704: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x298708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29870c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x29870Cu;
    SET_GPR_U32(ctx, 31, 0x298714u);
    ctx->pc = 0x298710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29870Cu;
    // 0x298710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x29870Cu, 0x298714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298714u;
label_298714:
    // 0x298714: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x298718: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x298718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29871c: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x29871cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x298720: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x298720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x298724: 0x24a5be00  addiu       $a1, $a1, -0x4200
    ctx->pc = 0x298724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950400));
    // 0x298728: 0xae200170  sw          $zero, 0x170($s1)
    ctx->pc = 0x298728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
    // 0x29872c: 0xc0ad7a2  jal         func_2B5E88
    ctx->pc = 0x29872Cu;
    SET_GPR_U32(ctx, 31, 0x298734u);
    ctx->pc = 0x298730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29872Cu;
    // 0x298730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E88u, 0x29872Cu, 0x298734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298734u;
label_298734:
    // 0x298734: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298734u;
    {
        const bool branch_taken_0x298734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298734u;
        // 0x298738: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298734) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x29873Cu;
    // 0x29873c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298740: 0xc0ad7a2  jal         func_2B5E88
    ctx->pc = 0x298740u;
    SET_GPR_U32(ctx, 31, 0x298748u);
    ctx->pc = 0x298744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298740u;
    // 0x298744: 0x24a5be10  addiu       $a1, $a1, -0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E88u, 0x298740u, 0x298748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298748u;
label_298748:
    // 0x298748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298748u;
    {
        const bool branch_taken_0x298748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298748u;
        // 0x29874c: 0x8e220158  lw          $v0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298748) {
            ctx->pc = 0x298764u;
            goto label_298764;
        }
    }
    ctx->pc = 0x298750u;
    // 0x298750: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x298750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x298754: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x298754u;
    {
        const bool branch_taken_0x298754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298754u;
        // 0x298758: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298754) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x29875Cu;
    // 0x29875c: 0x0  nop
    ctx->pc = 0x29875cu;
    // NOP
label_298760:
    // 0x298760: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_298764:
    // 0x298764: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x298764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x298768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x298768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29876c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x29876Cu;
    {
        const bool branch_taken_0x29876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29876Cu;
        // 0x298770: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29876c) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x298774u;
    // 0x298774: 0x0  nop
    ctx->pc = 0x298774u;
    // NOP
label_298778:
    // 0x298778: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x29877c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x298780: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x298780u;
    {
        const bool branch_taken_0x298780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298780u;
        // 0x298784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298780) {
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x298788u;
    // 0x298788: 0xc0ace76  jal         func_2B39D8
    ctx->pc = 0x298788u;
    SET_GPR_U32(ctx, 31, 0x298790u);
    ctx->pc = 0x29878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298788u;
    // 0x29878c: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39D8u, 0x298788u, 0x298790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298790u;
label_298790:
    // 0x298790: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x298794: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x298794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x298798: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x298798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x29879c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2987a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2987a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2987a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2987A4u;
    {
        const bool branch_taken_0x2987a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987A4u;
        // 0x2987a8: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987a4) {
            ctx->pc = 0x298824u;
            goto label_298824;
        }
    }
    ctx->pc = 0x2987ACu;
    // 0x2987ac: 0x0  nop
    ctx->pc = 0x2987acu;
    // NOP
label_2987b0:
    // 0x2987b0: 0x26300084  addiu       $s0, $s1, 0x84
    ctx->pc = 0x2987b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x2987b4: 0xc0ad4d2  jal         func_2B5348
    ctx->pc = 0x2987B4u;
    SET_GPR_U32(ctx, 31, 0x2987BCu);
    ctx->pc = 0x2987B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987B4u;
    // 0x2987b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5348u, 0x2987B4u, 0x2987BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987BCu;
label_2987bc:
    // 0x2987bc: 0xc0ad526  jal         func_2B5498
    ctx->pc = 0x2987BCu;
    SET_GPR_U32(ctx, 31, 0x2987C4u);
    ctx->pc = 0x2987C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987BCu;
    // 0x2987c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5498u, 0x2987BCu, 0x2987C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987C4u;
label_2987c4:
    // 0x2987c4: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x2987c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2987c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2987c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2987cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2987ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2987d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2987d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2987d4: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2987D4u;
    {
        const bool branch_taken_0x2987d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2987D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987D4u;
        // 0x2987d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987d4) {
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x2987DCu;
    // 0x2987dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2987dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2987e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2987E0u;
    {
        const bool branch_taken_0x2987e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987E0u;
        // 0x2987e4: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987e0) {
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x2987E8u;
label_2987e8:
    // 0x2987e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2987ec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2987ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2987f0: 0x8c438868  lw          $v1, -0x7798($v0)
    ctx->pc = 0x2987f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8868u));
    // 0x2987f4: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2987F4u;
    {
        const bool branch_taken_0x2987f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987F4u;
        // 0x2987f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987f4) {
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x2987FCu;
    // 0x2987fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2987fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x298800: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x298800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_298804:
    // 0x298804: 0x8e22016c  lw          $v0, 0x16C($s1)
    ctx->pc = 0x298804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x298808: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298808u;
    {
        const bool branch_taken_0x298808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298808u;
        // 0x29880c: 0x26300084  addiu       $s0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298808) {
            ctx->pc = 0x298830u;
            goto label_298830;
        }
    }
    ctx->pc = 0x298810u;
    // 0x298810: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x298810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x298814: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x298818: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x298818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29881c: 0xae200170  sw          $zero, 0x170($s1)
    ctx->pc = 0x29881cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
    // 0x298820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x298820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_298824:
    // 0x298824: 0xae240154  sw          $a0, 0x154($s1)
    ctx->pc = 0x298824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 4));
    // 0x298828: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x298828u;
    {
        const bool branch_taken_0x298828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298828u;
        // 0x29882c: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298828) {
            ctx->pc = 0x2988A0u;
            goto label_2988a0;
        }
    }
    ctx->pc = 0x298830u;
label_298830:
    // 0x298830: 0xc0ad6da  jal         func_2B5B68
    ctx->pc = 0x298830u;
    SET_GPR_U32(ctx, 31, 0x298838u);
    ctx->pc = 0x298834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298830u;
    // 0x298834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B68u, 0x298830u, 0x298838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298838u;
label_298838:
    // 0x298838: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x298838u;
    {
        const bool branch_taken_0x298838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298838) {
            ctx->pc = 0x29887Cu;
            goto label_29887c;
        }
    }
    ctx->pc = 0x298840u;
    // 0x298840: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x298840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x298844: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x298844u;
    {
        const bool branch_taken_0x298844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298844) {
            ctx->pc = 0x298848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298844u;
            // 0x298848: 0x8e220158  lw          $v0, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298860u;
            goto label_298860;
        }
    }
    ctx->pc = 0x29884Cu;
    // 0x29884c: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x29884Cu;
    SET_GPR_U32(ctx, 31, 0x298854u);
    ctx->pc = 0x298850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29884Cu;
    // 0x298850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x29884Cu, 0x298854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298854u;
label_298854:
    // 0x298854: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298854u;
    {
        const bool branch_taken_0x298854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298854) {
            ctx->pc = 0x29887Cu;
            goto label_29887c;
        }
    }
    ctx->pc = 0x29885Cu;
    // 0x29885c: 0x0  nop
    ctx->pc = 0x29885cu;
    // NOP
label_298860:
    // 0x298860: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x298864: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x298864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298868: 0xae20016c  sw          $zero, 0x16C($s1)
    ctx->pc = 0x298868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
    // 0x29886c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x298870: 0xae240154  sw          $a0, 0x154($s1)
    ctx->pc = 0x298870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 4));
    // 0x298874: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x298874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x298878: 0xae200170  sw          $zero, 0x170($s1)
    ctx->pc = 0x298878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
label_29887c:
    // 0x29887c: 0xc0ad4d2  jal         func_2B5348
    ctx->pc = 0x29887Cu;
    SET_GPR_U32(ctx, 31, 0x298884u);
    ctx->pc = 0x298880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29887Cu;
    // 0x298880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5348u, 0x29887Cu, 0x298884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298884u;
label_298884:
    // 0x298884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29888c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29888cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298894: 0x80ad526  j           func_2B5498
    ctx->pc = 0x298894u;
    ctx->pc = 0x298898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298894u;
    // 0x298898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5498u;
    sub_002B5498_0x2b5498(rdram, ctx, runtime); return;
    ctx->pc = 0x29889Cu;
    // 0x29889c: 0x0  nop
    ctx->pc = 0x29889cu;
    // NOP
label_2988a0:
    // 0x2988a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2988a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2988a4:
    // 0x2988a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2988a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2988a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2988a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2988ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2988ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2988B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988ACu;
        // 0x2988b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2988B4u;
    // 0x2988b4: 0x0  nop
    ctx->pc = 0x2988b4u;
    // NOP
    ctx->pc = 0x2988b8u;
}
