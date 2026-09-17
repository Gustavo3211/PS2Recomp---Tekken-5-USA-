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

// Function: sub_0035E7B0
// Address: 0x35e7b0 - 0x35e988
void sub_0035E7B0_0x35e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E7B0_0x35e7b0");
#endif

    switch (ctx->pc) {
        case 0x35e7ecu: goto label_35e7ec;
        case 0x35e82cu: goto label_35e82c;
        case 0x35e848u: goto label_35e848;
        case 0x35e86cu: goto label_35e86c;
        case 0x35e898u: goto label_35e898;
        case 0x35e8c0u: goto label_35e8c0;
        case 0x35e8e4u: goto label_35e8e4;
        case 0x35e920u: goto label_35e920;
        case 0x35e95cu: goto label_35e95c;
        default: break;
    }

    ctx->pc = 0x35e7b0u;

    // 0x35e7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e7b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e7b8: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x35e7b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35e7bc: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x35e7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35e7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e7c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e7c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35e7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e7d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35e7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e7d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E7D4u;
    {
        const bool branch_taken_0x35e7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7D4u;
        // 0x35e7d8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7d4) {
            ctx->pc = 0x35E7F8u;
            goto label_35e7f8;
        }
    }
    ctx->pc = 0x35E7DCu;
    // 0x35e7dc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e7e4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E7E4u;
    SET_GPR_U32(ctx, 31, 0x35E7ECu);
    ctx->pc = 0x35E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7E4u;
    // 0x35e7e8: 0x248461e0  addiu       $a0, $a0, 0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E7E4u, 0x35E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7ECu;
label_35e7ec:
    // 0x35e7ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e7f0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x35E7F0u;
    {
        const bool branch_taken_0x35e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7F0u;
        // 0x35e7f4: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7f0) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E7F8u;
label_35e7f8:
    // 0x35e7f8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x35e7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x35e7fc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x35e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x35e800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e804: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35e804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35e808: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35e808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e80c: 0x8c632ff4  lw          $v1, 0x2FF4($v1)
    ctx->pc = 0x35e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12276)));
    // 0x35e810: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E810u;
    {
        const bool branch_taken_0x35e810 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x35E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E810u;
        // 0x35e814: 0x8f82c7e4  lw          $v0, -0x381C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e810) {
            ctx->pc = 0x35E838u;
            goto label_35e838;
        }
    }
    ctx->pc = 0x35E818u;
    // 0x35e818: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E818u;
    {
        const bool branch_taken_0x35e818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x35E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E818u;
        // 0x35e81c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e818) {
            ctx->pc = 0x35E838u;
            goto label_35e838;
        }
    }
    ctx->pc = 0x35E820u;
    // 0x35e820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e824: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E824u;
    SET_GPR_U32(ctx, 31, 0x35E82Cu);
    ctx->pc = 0x35E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E824u;
    // 0x35e828: 0x24846220  addiu       $a0, $a0, 0x6220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E824u, 0x35E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E82Cu;
label_35e82c:
    // 0x35e82c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e830: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x35E830u;
    {
        const bool branch_taken_0x35e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E830u;
        // 0x35e834: 0x3442001d  ori         $v0, $v0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e830) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E838u;
label_35e838:
    // 0x35e838: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E838u;
    {
        const bool branch_taken_0x35e838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E838u;
        // 0x35e83c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e838) {
            ctx->pc = 0x35E858u;
            goto label_35e858;
        }
    }
    ctx->pc = 0x35E840u;
    // 0x35e840: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E840u;
    SET_GPR_U32(ctx, 31, 0x35E848u);
    ctx->pc = 0x35E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E840u;
    // 0x35e844: 0x24846270  addiu       $a0, $a0, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E840u, 0x35E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E848u;
label_35e848:
    // 0x35e848: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e84c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x35E84Cu;
    {
        const bool branch_taken_0x35e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E84Cu;
        // 0x35e850: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e84c) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E854u;
    // 0x35e854: 0x0  nop
    ctx->pc = 0x35e854u;
    // NOP
label_35e858:
    // 0x35e858: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E858u;
    {
        const bool branch_taken_0x35e858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e858) {
            ctx->pc = 0x35E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E858u;
            // 0x35e85c: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E878u;
            goto label_35e878;
        }
    }
    ctx->pc = 0x35E860u;
    // 0x35e860: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e864: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E864u;
    SET_GPR_U32(ctx, 31, 0x35E86Cu);
    ctx->pc = 0x35E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E864u;
    // 0x35e868: 0x248462a8  addiu       $a0, $a0, 0x62A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E864u, 0x35E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E86Cu;
label_35e86c:
    // 0x35e86c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e870: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x35E870u;
    {
        const bool branch_taken_0x35e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E870u;
        // 0x35e874: 0x34420027  ori         $v0, $v0, 0x27 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e870) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E878u;
label_35e878:
    // 0x35e878: 0x24020a01  addiu       $v0, $zero, 0xA01
    ctx->pc = 0x35e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35e87c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35E87Cu;
    {
        const bool branch_taken_0x35e87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35e87c) {
            ctx->pc = 0x35E880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E87Cu;
            // 0x35e880: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E8A8u;
            goto label_35e8a8;
        }
    }
    ctx->pc = 0x35E884u;
    // 0x35e884: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x35e884u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x35e888: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e88c: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x35e88cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35e890: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E890u;
    SET_GPR_U32(ctx, 31, 0x35E898u);
    ctx->pc = 0x35E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E890u;
    // 0x35e894: 0x248462f0  addiu       $a0, $a0, 0x62F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E890u, 0x35E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E898u;
label_35e898:
    // 0x35e898: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e89c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x35E89Cu;
    {
        const bool branch_taken_0x35e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E89Cu;
        // 0x35e8a0: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e89c) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E8A4u;
    // 0x35e8a4: 0x0  nop
    ctx->pc = 0x35e8a4u;
    // NOP
label_35e8a8:
    // 0x35e8a8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35e8ac: 0x24422fe8  addiu       $v0, $v0, 0x2FE8
    ctx->pc = 0x35e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12264));
    // 0x35e8b0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x35e8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35e8b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x35e8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35e8b8: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x35E8B8u;
    SET_GPR_U32(ctx, 31, 0x35E8C0u);
    ctx->pc = 0x35E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8B8u;
    // 0x35e8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x35E8B8u, 0x35E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8C0u;
label_35e8c0:
    // 0x35e8c0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x35e8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35e8c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35e8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8c8: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x35e8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35e8cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E8CCu;
    {
        const bool branch_taken_0x35e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e8cc) {
            ctx->pc = 0x35E8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E8CCu;
            // 0x35e8d0: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E8F0u;
            goto label_35e8f0;
        }
    }
    ctx->pc = 0x35E8D4u;
    // 0x35e8d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e8d8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35e8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8dc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E8DCu;
    SET_GPR_U32(ctx, 31, 0x35E8E4u);
    ctx->pc = 0x35E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8DCu;
    // 0x35e8e0: 0x24846338  addiu       $a0, $a0, 0x6338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E8DCu, 0x35E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8E4u;
label_35e8e4:
    // 0x35e8e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e8e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35E8E8u;
    {
        const bool branch_taken_0x35e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8E8u;
        // 0x35e8ec: 0x34420021  ori         $v0, $v0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e8e8) {
            ctx->pc = 0x35E96Cu;
            goto label_35e96c;
        }
    }
    ctx->pc = 0x35E8F0u;
label_35e8f0:
    // 0x35e8f0: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x35e8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x35e8f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35e8f8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x35e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35e8fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e900: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x35e900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x35e904: 0x24a52c68  addiu       $a1, $a1, 0x2C68
    ctx->pc = 0x35e904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11368));
    // 0x35e908: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x35e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35e90c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35e910: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x35e910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x35e914: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x35e914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x35e918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35E918u;
    {
        const bool branch_taken_0x35e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E918u;
        // 0x35e91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e918) {
            ctx->pc = 0x35E944u;
            goto label_35e944;
        }
    }
    ctx->pc = 0x35E920u;
label_35e920:
    // 0x35e920: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x35e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x35e924: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35e924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35e928: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x35e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35e92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e930: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x35e930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x35e934: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x35e934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x35e938: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x35e938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35e93c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35E93Cu;
    {
        const bool branch_taken_0x35e93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E93Cu;
        // 0x35e940: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e93c) {
            ctx->pc = 0x35E920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e920;
        }
    }
    ctx->pc = 0x35E944u;
label_35e944:
    // 0x35e944: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x35e944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35e948: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35e948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35e950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e954: 0xc0d8b5e  jal         func_362D78
    ctx->pc = 0x35E954u;
    SET_GPR_U32(ctx, 31, 0x35E95Cu);
    ctx->pc = 0x35E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E954u;
    // 0x35e958: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D78u, 0x35E954u, 0x35E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E95Cu;
label_35e95c:
    // 0x35e95c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e960: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x35e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x35e964: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x35e964u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35e968: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35e968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35e96c:
    // 0x35e96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e978: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e97c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e980: 0x3e00008  jr          $ra
    ctx->pc = 0x35E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E980u;
        // 0x35e984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E988u;
}
