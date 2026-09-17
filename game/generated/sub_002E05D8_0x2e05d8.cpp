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

// Function: sub_002E05D8
// Address: 0x2e05d8 - 0x2e06e8
void sub_002E05D8_0x2e05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E05D8_0x2e05d8");
#endif

    switch (ctx->pc) {
        case 0x2e061cu: goto label_2e061c;
        case 0x2e068cu: goto label_2e068c;
        case 0x2e06b4u: goto label_2e06b4;
        case 0x2e06ccu: goto label_2e06cc;
        default: break;
    }

    ctx->pc = 0x2e05d8u;

    // 0x2e05d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e05d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e05dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e05e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e05e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e05e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e05e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e05ec: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x2e05ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x2e05f0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x2e05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e05f4: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x2e05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x2e05f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e05f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e05fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e0600: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0604: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e0604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e0608: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e060c: 0x2442ebc8  addiu       $v0, $v0, -0x1438
    ctx->pc = 0x2e060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962120));
    // 0x2e0610: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2e0610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2e0614: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x2E0614u;
    SET_GPR_U32(ctx, 31, 0x2E061Cu);
    ctx->pc = 0x2E0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0614u;
    // 0x2e0618: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA698u, 0x2E0614u, 0x2E061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E061Cu;
label_2e061c:
    // 0x2e061c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e0620: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e0624: 0x2442eb38  addiu       $v0, $v0, -0x14C8
    ctx->pc = 0x2e0624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961976));
    // 0x2e0628: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x2e0628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x2e062c: 0x26060084  addiu       $a2, $s0, 0x84
    ctx->pc = 0x2e062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2e0630: 0x2607008c  addiu       $a3, $s0, 0x8C
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2e0634: 0x26080094  addiu       $t0, $s0, 0x94
    ctx->pc = 0x2e0634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x2e0638: 0x2609009c  addiu       $t1, $s0, 0x9C
    ctx->pc = 0x2e0638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x2e063c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e0640: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e0640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2e0644: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e0648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e064c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e064cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0654: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e0654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e0658: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e0658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e065c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e065cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2e0660: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e0660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e0664: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e0664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e0668: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e0668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e066c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2e066cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2e0670: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2e0670u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2e0674: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2e0674u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2e0678: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2e0678u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2e067c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e0680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e0684: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2E0684u;
    SET_GPR_U32(ctx, 31, 0x2E068Cu);
    ctx->pc = 0x2E0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0684u;
    // 0x2e0688: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2E0684u, 0x2E068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E068Cu;
label_2e068c:
    // 0x2e068c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e0690: 0x2463fa60  addiu       $v1, $v1, -0x5A0
    ctx->pc = 0x2e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965856));
    // 0x2e0694: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E0694u;
    {
        const bool branch_taken_0x2e0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0694u;
        // 0x2e0698: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0694) {
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E069Cu;
    // 0x2e069c: 0x0  nop
    ctx->pc = 0x2e069cu;
    // NOP
    // 0x2e06a0: 0x2622d620  addiu       $v0, $s1, -0x29E0
    ctx->pc = 0x2e06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956576));
    // 0x2e06a4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e06a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e06a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e06ac: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E06ACu;
    SET_GPR_U32(ctx, 31, 0x2E06B4u);
    ctx->pc = 0x2E06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06ACu;
    // 0x2e06b0: 0x2484039c  addiu       $a0, $a0, 0x39C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E06ACu, 0x2E06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06B4u;
label_2e06b4:
    // 0x2e06b4: 0x0  nop
    ctx->pc = 0x2e06b4u;
    // NOP
    // 0x2e06b8: 0x2622d620  addiu       $v0, $s1, -0x29E0
    ctx->pc = 0x2e06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956576));
    // 0x2e06bc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e06c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e06c4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E06C4u;
    SET_GPR_U32(ctx, 31, 0x2E06CCu);
    ctx->pc = 0x2E06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06C4u;
    // 0x2e06c8: 0x248403ac  addiu       $a0, $a0, 0x3AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 940));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E06C4u, 0x2E06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06CCu;
label_2e06cc:
    // 0x2e06cc: 0x0  nop
    ctx->pc = 0x2e06ccu;
    // NOP
label_2e06d0:
    // 0x2e06d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e06d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e06d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e06d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e06d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e06d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e06dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E06DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06DCu;
        // 0x2e06e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E06DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E06E4u;
    // 0x2e06e4: 0x0  nop
    ctx->pc = 0x2e06e4u;
    // NOP
    ctx->pc = 0x2e06e8u;
}
