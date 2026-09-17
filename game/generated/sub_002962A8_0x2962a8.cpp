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

// Function: sub_002962A8
// Address: 0x2962a8 - 0x296378
void sub_002962A8_0x2962a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002962A8_0x2962a8");
#endif

    switch (ctx->pc) {
        case 0x2962e8u: goto label_2962e8;
        case 0x2962f8u: goto label_2962f8;
        case 0x296304u: goto label_296304;
        case 0x296318u: goto label_296318;
        case 0x296324u: goto label_296324;
        case 0x296344u: goto label_296344;
        case 0x296358u: goto label_296358;
        default: break;
    }

    ctx->pc = 0x2962a8u;

    // 0x2962a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2962ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2962acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2962b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2962b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2962b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2962b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2962b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2962bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2962bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2962c0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2962c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2962C4u;
    {
        const bool branch_taken_0x2962c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962C4u;
        // 0x2962c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962c4) {
            ctx->pc = 0x2962E0u;
            goto label_2962e0;
        }
    }
    ctx->pc = 0x2962CCu;
    // 0x2962cc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2962CCu;
    {
        const bool branch_taken_0x2962cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2962D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962CCu;
        // 0x2962d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962cc) {
            ctx->pc = 0x296350u;
            goto label_296350;
        }
    }
    ctx->pc = 0x2962D4u;
    // 0x2962d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2962D4u;
    {
        const bool branch_taken_0x2962d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962D4u;
        // 0x2962d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962d4) {
            ctx->pc = 0x296360u;
            goto label_296360;
        }
    }
    ctx->pc = 0x2962DCu;
    // 0x2962dc: 0x0  nop
    ctx->pc = 0x2962dcu;
    // NOP
label_2962e0:
    // 0x2962e0: 0xc089622  jal         func_225888
    ctx->pc = 0x2962E0u;
    SET_GPR_U32(ctx, 31, 0x2962E8u);
    ctx->pc = 0x2962E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962E0u;
    // 0x2962e4: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2962E0u, 0x2962E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962E8u;
label_2962e8:
    // 0x2962e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2962E8u;
    {
        const bool branch_taken_0x2962e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962E8u;
        // 0x2962ec: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962e8) {
            ctx->pc = 0x296358u;
            goto label_296358;
        }
    }
    ctx->pc = 0x2962F0u;
    // 0x2962f0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2962F0u;
    SET_GPR_U32(ctx, 31, 0x2962F8u);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2962F0u, 0x2962F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962F8u;
label_2962f8:
    // 0x2962f8: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2962fc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2962FCu;
    SET_GPR_U32(ctx, 31, 0x296304u);
    ctx->pc = 0x296300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962FCu;
    // 0x296300: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2962FCu, 0x296304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296304u;
label_296304:
    // 0x296304: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x296308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29630c: 0x34a5f480  ori         $a1, $a1, 0xF480
    ctx->pc = 0x29630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62592);
    // 0x296310: 0xc04057e  jal         func_1015F8
    ctx->pc = 0x296310u;
    SET_GPR_U32(ctx, 31, 0x296318u);
    ctx->pc = 0x296314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296310u;
    // 0x296314: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015F8u, 0x296310u, 0x296318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296318u;
label_296318:
    // 0x296318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29631c: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x29631Cu;
    SET_GPR_U32(ctx, 31, 0x296324u);
    ctx->pc = 0x296320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29631Cu;
    // 0x296320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x29631Cu, 0x296324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296324u;
label_296324:
    // 0x296324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296328: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29632c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296330: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x296330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296334: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x296334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x296338: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x296338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x29633c: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x29633Cu;
    SET_GPR_U32(ctx, 31, 0x296344u);
    ctx->pc = 0x296340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29633Cu;
    // 0x296340: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x29633Cu, 0x296344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296344u;
label_296344:
    // 0x296344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296348u;
    {
        const bool branch_taken_0x296348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296348u;
        // 0x29634c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296348) {
            ctx->pc = 0x296358u;
            goto label_296358;
        }
    }
    ctx->pc = 0x296350u;
label_296350:
    // 0x296350: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x296350u;
    SET_GPR_U32(ctx, 31, 0x296358u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x296350u, 0x296358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296358u;
label_296358:
    // 0x296358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29635c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296360:
    // 0x296360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296368: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x296368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29636c: 0x3e00008  jr          $ra
    ctx->pc = 0x29636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29636Cu;
        // 0x296370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296374u;
    // 0x296374: 0x0  nop
    ctx->pc = 0x296374u;
    // NOP
    ctx->pc = 0x296378u;
}
