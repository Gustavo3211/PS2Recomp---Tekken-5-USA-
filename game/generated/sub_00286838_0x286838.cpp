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

// Function: sub_00286838
// Address: 0x286838 - 0x286920
void sub_00286838_0x286838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286838_0x286838");
#endif

    switch (ctx->pc) {
        case 0x286894u: goto label_286894;
        case 0x2868acu: goto label_2868ac;
        case 0x2868dcu: goto label_2868dc;
        case 0x2868f0u: goto label_2868f0;
        case 0x28690cu: goto label_28690c;
        default: break;
    }

    ctx->pc = 0x286838u;

    // 0x286838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28683c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x28683cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28684c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28684cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286854: 0x26080034  addiu       $t0, $s0, 0x34
    ctx->pc = 0x286854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x286858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28685c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28685Cu;
    {
        const bool branch_taken_0x28685c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28685Cu;
        // 0x286860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28685c) {
            ctx->pc = 0x2868B8u;
            goto label_2868b8;
        }
    }
    ctx->pc = 0x286864u;
    // 0x286864: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286868: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28686c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286870: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x286874: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x286874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x286878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28687c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x286880: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x286884: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x286888: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x28688c: 0xc0d46e4  jal         func_351B90
    ctx->pc = 0x28688Cu;
    SET_GPR_U32(ctx, 31, 0x286894u);
    ctx->pc = 0x286890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28688Cu;
    // 0x286890: 0x24e75ee0  addiu       $a3, $a3, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B90u, 0x28688Cu, 0x286894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286894u;
label_286894:
    // 0x286894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28689c: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28689Cu;
    {
        const bool branch_taken_0x28689c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2868A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28689Cu;
        // 0x2868a0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28689c) {
            ctx->pc = 0x28690Cu;
            goto label_28690c;
        }
    }
    ctx->pc = 0x2868A4u;
    // 0x2868a4: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2868A4u;
    SET_GPR_U32(ctx, 31, 0x2868ACu);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2868A4u, 0x2868ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868ACu;
label_2868ac:
    // 0x2868ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868ACu;
        // 0x2868b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x286910u;
            goto label_286910;
        }
    }
    ctx->pc = 0x2868B4u;
    // 0x2868b4: 0x0  nop
    ctx->pc = 0x2868b4u;
    // NOP
label_2868b8:
    // 0x2868b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2868bc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2868c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2868c4: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2868C4u;
    {
        const bool branch_taken_0x2868c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2868c4) {
            ctx->pc = 0x2868C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868C4u;
            // 0x2868c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286910u;
            goto label_286910;
        }
    }
    ctx->pc = 0x2868CCu;
    // 0x2868cc: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2868CCu;
    {
        const bool branch_taken_0x2868cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2868cc) {
            ctx->pc = 0x2868E8u;
            goto label_2868e8;
        }
    }
    ctx->pc = 0x2868D4u;
    // 0x2868d4: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2868D4u;
    SET_GPR_U32(ctx, 31, 0x2868DCu);
    ctx->pc = 0x2868D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2868D4u;
    // 0x2868d8: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2868D4u, 0x2868DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868DCu;
label_2868dc:
    // 0x2868dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2868DCu;
    {
        const bool branch_taken_0x2868dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868DCu;
        // 0x2868e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868dc) {
            ctx->pc = 0x286910u;
            goto label_286910;
        }
    }
    ctx->pc = 0x2868E4u;
    // 0x2868e4: 0x0  nop
    ctx->pc = 0x2868e4u;
    // NOP
label_2868e8:
    // 0x2868e8: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2868E8u;
    SET_GPR_U32(ctx, 31, 0x2868F0u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2868E8u, 0x2868F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868F0u;
label_2868f0:
    // 0x2868f0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2868f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2868f4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2868f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2868f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2868f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2868fc: 0x5c2021  addu        $a0, $v0, $gp
    ctx->pc = 0x2868fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x286900: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x286900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286904: 0xc0d50d9  jal         func_354364
    ctx->pc = 0x286904u;
    SET_GPR_U32(ctx, 31, 0x28690Cu);
    ctx->pc = 0x286908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286904u;
    // 0x286908: 0x24a59760  addiu       $a1, $a1, -0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354364u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354364u, 0x286904u, 0x28690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28690Cu;
label_28690c:
    // 0x28690c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28690cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286910:
    // 0x286910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286918: 0x3e00008  jr          $ra
    ctx->pc = 0x286918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286918u;
        // 0x28691c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286920u;
}
