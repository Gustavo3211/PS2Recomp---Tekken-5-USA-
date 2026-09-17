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

// Function: sub_002F4418
// Address: 0x2f4418 - 0x2f4538
void sub_002F4418_0x2f4418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4418_0x2f4418");
#endif

    switch (ctx->pc) {
        case 0x2f4448u: goto label_2f4448;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f4510u: goto label_2f4510;
        default: break;
    }

    ctx->pc = 0x2f4418u;

    // 0x2f4418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f4418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f441c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f441cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4424: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f4424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f4428: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f4428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f442c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f4430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f4430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f4434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f4434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f4438: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f443c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f443cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f4440: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2F4440u;
    SET_GPR_U32(ctx, 31, 0x2F4448u);
    ctx->pc = 0x2F4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4440u;
    // 0x2f4444: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F4440u, 0x2F4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4448u;
label_2f4448:
    // 0x2f4448: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f4448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f444c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f444cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4450: 0x26120110  addiu       $s2, $s0, 0x110
    ctx->pc = 0x2f4450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2f4454: 0x26130118  addiu       $s3, $s0, 0x118
    ctx->pc = 0x2f4454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2f4458: 0x24630c58  addiu       $v1, $v1, 0xC58
    ctx->pc = 0x2f4458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
    // 0x2f445c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4460: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f4460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f4464: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f4464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f4468: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f4468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f446c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f446cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f4470: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F4470u;
    SET_GPR_U32(ctx, 31, 0x2F4478u);
    ctx->pc = 0x2F4474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4470u;
    // 0x2f4474: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F4470u, 0x2F4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4478u;
label_2f4478:
    // 0x2f4478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f4478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f447c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f447cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4484: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f4484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f448c: 0xc0bc762  jal         func_2F1D88
    ctx->pc = 0x2F448Cu;
    SET_GPR_U32(ctx, 31, 0x2F4494u);
    ctx->pc = 0x2F4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F448Cu;
    // 0x2f4490: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1D88u, 0x2F448Cu, 0x2F4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4494u;
label_2f4494:
    // 0x2f4494: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2f4494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2f4498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f449c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f44a4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F44A4u;
    SET_GPR_U32(ctx, 31, 0x2F44ACu);
    ctx->pc = 0x2F44A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44A4u;
    // 0x2f44a8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F44A4u, 0x2F44ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44ACu;
label_2f44ac:
    // 0x2f44ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f44acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f44b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44b4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2f44b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f44b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f44bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44c0: 0xc0bc762  jal         func_2F1D88
    ctx->pc = 0x2F44C0u;
    SET_GPR_U32(ctx, 31, 0x2F44C8u);
    ctx->pc = 0x2F44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44C0u;
    // 0x2f44c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1D88u, 0x2F44C0u, 0x2F44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44C8u;
label_2f44c8:
    // 0x2f44c8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f44c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f44cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f44d0: 0x244212b8  addiu       $v0, $v0, 0x12B8
    ctx->pc = 0x2f44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4792));
    // 0x2f44d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2f44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f44d8: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2f44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2f44dc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2f44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2f44e0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2f44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2f44e4: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x2f44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x2f44e8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2f44e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2f44ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F44ECu;
    {
        const bool branch_taken_0x2f44ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44ECu;
        // 0x2f44f0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44ec) {
            ctx->pc = 0x2F4510u;
            goto label_2f4510;
        }
    }
    ctx->pc = 0x2F44F4u;
    // 0x2f44f4: 0x0  nop
    ctx->pc = 0x2f44f4u;
    // NOP
    // 0x2f44f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2f44fc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f44fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2f4500: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2f4500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2f4504: 0x248406d4  addiu       $a0, $a0, 0x6D4
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1748));
    // 0x2f4508: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2F4508u;
    SET_GPR_U32(ctx, 31, 0x2F4510u);
    ctx->pc = 0x2F450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4508u;
    // 0x2f450c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2F4508u, 0x2F4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4510u;
label_2f4510:
    // 0x2f4510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f4514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f4518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f451c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f451cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f4520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f4524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f4528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f452c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F452Cu;
        // 0x2f4530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4534u;
    // 0x2f4534: 0x0  nop
    ctx->pc = 0x2f4534u;
    // NOP
    ctx->pc = 0x2f4538u;
}
