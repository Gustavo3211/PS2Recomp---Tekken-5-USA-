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

// Function: sub_004FA660
// Address: 0x4fa660 - 0x4fa878
void sub_004FA660_0x4fa660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA660_0x4fa660");
#endif

    switch (ctx->pc) {
        case 0x4fa69cu: goto label_4fa69c;
        case 0x4fa6c0u: goto label_4fa6c0;
        case 0x4fa6c8u: goto label_4fa6c8;
        case 0x4fa6f0u: goto label_4fa6f0;
        case 0x4fa710u: goto label_4fa710;
        case 0x4fa780u: goto label_4fa780;
        case 0x4fa790u: goto label_4fa790;
        case 0x4fa7d0u: goto label_4fa7d0;
        case 0x4fa7f4u: goto label_4fa7f4;
        case 0x4fa800u: goto label_4fa800;
        case 0x4fa810u: goto label_4fa810;
        case 0x4fa824u: goto label_4fa824;
        case 0x4fa840u: goto label_4fa840;
        case 0x4fa848u: goto label_4fa848;
        default: break;
    }

    ctx->pc = 0x4fa660u;

    // 0x4fa660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fa660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4fa664: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4fa664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4fa668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fa668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fa66c: 0x245007c0  addiu       $s0, $v0, 0x7C0
    ctx->pc = 0x4fa66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x4fa670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fa670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fa674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4fa674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4fa678: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4fa678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4fa67c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4fa67cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F07C0u));
    // 0x4fa680: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FA680u;
    {
        const bool branch_taken_0x4fa680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA680u;
        // 0x4fa684: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa680) {
            ctx->pc = 0x4FA694u;
            goto label_4fa694;
        }
    }
    ctx->pc = 0x4FA688u;
    // 0x4fa688: 0x8443d736  lh          $v1, -0x28CA($v0)
    ctx->pc = 0x4fa688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956854)));
    // 0x4fa68c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FA68Cu;
    {
        const bool branch_taken_0x4fa68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA68Cu;
        // 0x4fa690: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa68c) {
            ctx->pc = 0x4FA6A4u;
            goto label_4fa6a4;
        }
    }
    ctx->pc = 0x4FA694u;
label_4fa694:
    // 0x4fa694: 0xc13ea92  jal         func_4FAA48
    ctx->pc = 0x4FA694u;
    SET_GPR_U32(ctx, 31, 0x4FA69Cu);
    ctx->pc = 0x4FAA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA48u, 0x4FA694u, 0x4FA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA69Cu;
label_4fa69c:
    // 0x4fa69c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4fa69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4fa6a0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fa6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_4fa6a4:
    // 0x4fa6a4: 0x2470ce88  addiu       $s0, $v1, -0x3178
    ctx->pc = 0x4fa6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954632));
    // 0x4fa6a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa6ac: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x4fa6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4fa6b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4FA6B0u;
    {
        const bool branch_taken_0x4fa6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa6b0) {
            ctx->pc = 0x4FA6E8u;
            goto label_4fa6e8;
        }
    }
    ctx->pc = 0x4FA6B8u;
    // 0x4fa6b8: 0xc13e812  jal         func_4FA048
    ctx->pc = 0x4FA6B8u;
    SET_GPR_U32(ctx, 31, 0x4FA6C0u);
    ctx->pc = 0x4FA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA6B8u;
    // 0x4fa6bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA048u, 0x4FA6B8u, 0x4FA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA6C0u;
label_4fa6c0:
    // 0x4fa6c0: 0xc13e986  jal         func_4FA618
    ctx->pc = 0x4FA6C0u;
    SET_GPR_U32(ctx, 31, 0x4FA6C8u);
    ctx->pc = 0x4FA618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA618u, 0x4FA6C0u, 0x4FA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA6C8u;
label_4fa6c8:
    // 0x4fa6c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4fa6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa6cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4fa6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fa6d0: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4FA6D0u;
    {
        const bool branch_taken_0x4fa6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA6D0u;
        // 0x4fa6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa6d0) {
            ctx->pc = 0x4FA860u;
            goto label_4fa860;
        }
    }
    ctx->pc = 0x4FA6D8u;
    // 0x4fa6d8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fa6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fa6dc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4FA6DCu;
    {
        const bool branch_taken_0x4fa6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA6DCu;
        // 0x4fa6e0: 0xac40ce94  sw          $zero, -0x316C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa6dc) {
            ctx->pc = 0x4FA860u;
            goto label_4fa860;
        }
    }
    ctx->pc = 0x4FA6E4u;
    // 0x4fa6e4: 0x0  nop
    ctx->pc = 0x4fa6e4u;
    // NOP
label_4fa6e8:
    // 0x4fa6e8: 0xc13e7ee  jal         func_4F9FB8
    ctx->pc = 0x4FA6E8u;
    SET_GPR_U32(ctx, 31, 0x4FA6F0u);
    ctx->pc = 0x4FA6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA6E8u;
    // 0x4fa6ec: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9FB8u, 0x4FA6E8u, 0x4FA6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA6F0u;
label_4fa6f0:
    // 0x4fa6f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4fa6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4fa6f4: 0x2622d680  addiu       $v0, $s1, -0x2980
    ctx->pc = 0x4fa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4fa6f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x4fa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x4fa6fc: 0x2470003e  addiu       $s0, $v1, 0x3E
    ctx->pc = 0x4fa6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x4fa700: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4fa700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa704: 0x1044002d  beq         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4FA704u;
    {
        const bool branch_taken_0x4fa704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4FA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA704u;
        // 0x4fa708: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa704) {
            ctx->pc = 0x4FA7BCu;
            goto label_4fa7bc;
        }
    }
    ctx->pc = 0x4FA70Cu;
    // 0x4fa70c: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4fa70cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_4fa710:
    // 0x4fa710: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4fa714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fa714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fa718: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x4fa718u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4fa71c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4FA71Cu;
    {
        const bool branch_taken_0x4fa71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA71Cu;
        // 0x4fa720: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa71c) {
            ctx->pc = 0x4FA768u;
            goto label_4fa768;
        }
    }
    ctx->pc = 0x4FA724u;
    // 0x4fa724: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FA724u;
    {
        const bool branch_taken_0x4fa724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa724) {
            ctx->pc = 0x4FA728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FA724u;
            // 0x4fa728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA740u;
            goto label_4fa740;
        }
    }
    ctx->pc = 0x4FA72Cu;
    // 0x4fa72c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4FA72Cu;
    {
        const bool branch_taken_0x4fa72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa72c) {
            ctx->pc = 0x4FA730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FA72Cu;
            // 0x4fa730: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA758u;
            goto label_4fa758;
        }
    }
    ctx->pc = 0x4FA734u;
    // 0x4fa734: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4FA734u;
    {
        const bool branch_taken_0x4fa734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa734) {
            ctx->pc = 0x4FA788u;
            goto label_4fa788;
        }
    }
    ctx->pc = 0x4FA73Cu;
    // 0x4fa73c: 0x0  nop
    ctx->pc = 0x4fa73cu;
    // NOP
label_4fa740:
    // 0x4fa740: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FA740u;
    {
        const bool branch_taken_0x4fa740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA740u;
        // 0x4fa744: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa740) {
            ctx->pc = 0x4FA768u;
            goto label_4fa768;
        }
    }
    ctx->pc = 0x4FA748u;
    // 0x4fa748: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FA748u;
    {
        const bool branch_taken_0x4fa748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fa748) {
            ctx->pc = 0x4FA74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FA748u;
            // 0x4fa74c: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA76Cu;
            goto label_4fa76c;
        }
    }
    ctx->pc = 0x4FA750u;
    // 0x4fa750: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4FA750u;
    {
        const bool branch_taken_0x4fa750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa750) {
            ctx->pc = 0x4FA788u;
            goto label_4fa788;
        }
    }
    ctx->pc = 0x4FA758u;
label_4fa758:
    // 0x4fa758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fa758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fa75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa760: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4FA760u;
    {
        const bool branch_taken_0x4fa760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA760u;
        // 0x4fa764: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa760) {
            ctx->pc = 0x4FA778u;
            goto label_4fa778;
        }
    }
    ctx->pc = 0x4FA768u;
label_4fa768:
    // 0x4fa768: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4fa768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4fa76c:
    // 0x4fa76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fa76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fa770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa774: 0x2610001a  addiu       $s0, $s0, 0x1A
    ctx->pc = 0x4fa774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
label_4fa778:
    // 0x4fa778: 0xc13f5de  jal         func_4FD778
    ctx->pc = 0x4FA778u;
    SET_GPR_U32(ctx, 31, 0x4FA780u);
    ctx->pc = 0x4FA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA778u;
    // 0x4fa77c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD778u, 0x4FA778u, 0x4FA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA780u;
label_4fa780:
    // 0x4fa780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4FA780u;
    {
        const bool branch_taken_0x4fa780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA780u;
        // 0x4fa784: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa780) {
            ctx->pc = 0x4FA7B0u;
            goto label_4fa7b0;
        }
    }
    ctx->pc = 0x4FA788u;
label_4fa788:
    // 0x4fa788: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FA788u;
    SET_GPR_U32(ctx, 31, 0x4FA790u);
    ctx->pc = 0x4FA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA788u;
    // 0x4fa78c: 0x2644bc40  addiu       $a0, $s2, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FA788u, 0x4FA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA790u;
label_4fa790:
    // 0x4fa790: 0x0  nop
    ctx->pc = 0x4fa790u;
    // NOP
    // 0x4fa794: 0x0  nop
    ctx->pc = 0x4fa794u;
    // NOP
    // 0x4fa798: 0x0  nop
    ctx->pc = 0x4fa798u;
    // NOP
    // 0x4fa79c: 0x0  nop
    ctx->pc = 0x4fa79cu;
    // NOP
    // 0x4fa7a0: 0x0  nop
    ctx->pc = 0x4fa7a0u;
    // NOP
    // 0x4fa7a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FA7A4u;
    {
        const bool branch_taken_0x4fa7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa7a4) {
            ctx->pc = 0x4FA790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fa790;
        }
    }
    ctx->pc = 0x4FA7ACu;
    // 0x4fa7ac: 0x0  nop
    ctx->pc = 0x4fa7acu;
    // NOP
label_4fa7b0:
    // 0x4fa7b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4fa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4fa7b4: 0x1462ffd6  bne         $v1, $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4FA7B4u;
    {
        const bool branch_taken_0x4fa7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA7B4u;
        // 0x4fa7b8: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa7b4) {
            ctx->pc = 0x4FA710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fa710;
        }
    }
    ctx->pc = 0x4FA7BCu;
label_4fa7bc:
    // 0x4fa7bc: 0x2623d680  addiu       $v1, $s1, -0x2980
    ctx->pc = 0x4fa7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4fa7c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fa7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa7c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4fa7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x4fa7c8: 0x2443003e  addiu       $v1, $v0, 0x3E
    ctx->pc = 0x4fa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
    // 0x4fa7cc: 0x0  nop
    ctx->pc = 0x4fa7ccu;
    // NOP
label_4fa7d0:
    // 0x4fa7d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4fa7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4fa7d4: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4fa7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4fa7d8: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x4fa7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x4fa7dc: 0x0  nop
    ctx->pc = 0x4fa7dcu;
    // NOP
    // 0x4fa7e0: 0x0  nop
    ctx->pc = 0x4fa7e0u;
    // NOP
    // 0x4fa7e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FA7E4u;
    {
        const bool branch_taken_0x4fa7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA7E4u;
        // 0x4fa7e8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa7e4) {
            ctx->pc = 0x4FA7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fa7d0;
        }
    }
    ctx->pc = 0x4FA7ECu;
    // 0x4fa7ec: 0xc13e73a  jal         func_4F9CE8
    ctx->pc = 0x4FA7ECu;
    SET_GPR_U32(ctx, 31, 0x4FA7F4u);
    ctx->pc = 0x4F9CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CE8u, 0x4FA7ECu, 0x4FA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA7F4u;
label_4fa7f4:
    // 0x4fa7f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4FA7F4u;
    {
        const bool branch_taken_0x4fa7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA7F4u;
        // 0x4fa7f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa7f4) {
            ctx->pc = 0x4FA828u;
            goto label_4fa828;
        }
    }
    ctx->pc = 0x4FA7FCu;
    // 0x4fa7fc: 0x0  nop
    ctx->pc = 0x4fa7fcu;
    // NOP
label_4fa800:
    // 0x4fa800: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FA800u;
    {
        const bool branch_taken_0x4fa800 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4fa800) {
            ctx->pc = 0x4FA804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FA800u;
            // 0x4fa804: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA828u;
            goto label_4fa828;
        }
    }
    ctx->pc = 0x4FA808u;
    // 0x4fa808: 0xc13e736  jal         func_4F9CD8
    ctx->pc = 0x4FA808u;
    SET_GPR_U32(ctx, 31, 0x4FA810u);
    ctx->pc = 0x4F9CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CD8u, 0x4FA808u, 0x4FA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA810u;
label_4fa810:
    // 0x4fa810: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x4fa810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa818: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4fa818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4fa81c: 0xc13f000  jal         func_4FC000
    ctx->pc = 0x4FA81Cu;
    SET_GPR_U32(ctx, 31, 0x4FA824u);
    ctx->pc = 0x4FA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA81Cu;
    // 0x4fa820: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC000u, 0x4FA81Cu, 0x4FA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA824u;
label_4fa824:
    // 0x4fa824: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4fa824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_4fa828:
    // 0x4fa828: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4fa828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa82c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x4fa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4fa830: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4FA830u;
    {
        const bool branch_taken_0x4fa830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA830u;
        // 0x4fa834: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa830) {
            ctx->pc = 0x4FA800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fa800;
        }
    }
    ctx->pc = 0x4FA838u;
    // 0x4fa838: 0xc13e7f8  jal         func_4F9FE0
    ctx->pc = 0x4FA838u;
    SET_GPR_U32(ctx, 31, 0x4FA840u);
    ctx->pc = 0x4F9FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9FE0u, 0x4FA838u, 0x4FA840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA840u;
label_4fa840:
    // 0x4fa840: 0xc13e812  jal         func_4FA048
    ctx->pc = 0x4FA840u;
    SET_GPR_U32(ctx, 31, 0x4FA848u);
    ctx->pc = 0x4FA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA840u;
    // 0x4fa844: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA048u, 0x4FA840u, 0x4FA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA848u;
label_4fa848:
    // 0x4fa848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fa848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fa84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fa850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4fa850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fa854: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4fa854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fa858: 0x813e986  j           func_4FA618
    ctx->pc = 0x4FA858u;
    ctx->pc = 0x4FA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA858u;
    // 0x4fa85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA618u;
    sub_004FA618_0x4fa618(rdram, ctx, runtime); return;
    ctx->pc = 0x4FA860u;
label_4fa860:
    // 0x4fa860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fa860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fa864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4fa864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fa868: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4fa868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fa86c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FA86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA86Cu;
        // 0x4fa870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FA86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FA874u;
    // 0x4fa874: 0x0  nop
    ctx->pc = 0x4fa874u;
    // NOP
    ctx->pc = 0x4fa878u;
}
