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

// Function: sub_002E6768
// Address: 0x2e6768 - 0x2e69d0
void sub_002E6768_0x2e6768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6768_0x2e6768");
#endif

    switch (ctx->pc) {
        case 0x2e6788u: goto label_2e6788;
        case 0x2e67a0u: goto label_2e67a0;
        case 0x2e67e8u: goto label_2e67e8;
        case 0x2e67f8u: goto label_2e67f8;
        case 0x2e6820u: goto label_2e6820;
        case 0x2e6830u: goto label_2e6830;
        case 0x2e6850u: goto label_2e6850;
        case 0x2e6860u: goto label_2e6860;
        case 0x2e6880u: goto label_2e6880;
        case 0x2e6890u: goto label_2e6890;
        case 0x2e68b0u: goto label_2e68b0;
        case 0x2e68c0u: goto label_2e68c0;
        case 0x2e68e0u: goto label_2e68e0;
        case 0x2e68f0u: goto label_2e68f0;
        case 0x2e6910u: goto label_2e6910;
        case 0x2e6920u: goto label_2e6920;
        case 0x2e6954u: goto label_2e6954;
        case 0x2e6964u: goto label_2e6964;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e69b8u: goto label_2e69b8;
        default: break;
    }

    ctx->pc = 0x2e6768u;

    // 0x2e6768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6770: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e6770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e6774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e6778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e6778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e677c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e6780: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2E6780u;
    SET_GPR_U32(ctx, 31, 0x2E6788u);
    ctx->pc = 0x2E6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6780u;
    // 0x2e6784: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2E6780u, 0x2E6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6788u;
label_2e6788:
    // 0x2e6788: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e6788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e678c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e6790: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x2e6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x2e6794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6798: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2E6798u;
    SET_GPR_U32(ctx, 31, 0x2E67A0u);
    ctx->pc = 0x2E679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6798u;
    // 0x2e679c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2E6798u, 0x2E67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67A0u;
label_2e67a0:
    // 0x2e67a0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x2e67a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e67a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e67a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E67A8u;
    {
        const bool branch_taken_0x2e67a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67A8u;
        // 0x2e67ac: 0x262800b8  addiu       $t0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67a8) {
            ctx->pc = 0x2E67C4u;
            goto label_2e67c4;
        }
    }
    ctx->pc = 0x2E67B0u;
    // 0x2e67b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e67b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e67b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67b8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e67bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E67BCu;
    {
        const bool branch_taken_0x2e67bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e67bc) {
            ctx->pc = 0x2E67C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E67BCu;
            // 0x2e67c0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E67D4u;
            goto label_2e67d4;
        }
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2e67c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e67c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67cc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e67d0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2e67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2e67d4:
    // 0x2e67d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e67d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67dc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2e67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2e67e0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E67E0u;
    SET_GPR_U32(ctx, 31, 0x2E67E8u);
    ctx->pc = 0x2E67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67E0u;
    // 0x2e67e4: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E67E0u, 0x2E67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67E8u;
label_2e67e8:
    // 0x2e67e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e67e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e67ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67f0: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E67F0u;
    SET_GPR_U32(ctx, 31, 0x2E67F8u);
    ctx->pc = 0x2E67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67F0u;
    // 0x2e67f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E67F0u, 0x2E67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67F8u;
label_2e67f8:
    // 0x2e67f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e67fc: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2e67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2e6800: 0x245205b8  addiu       $s2, $v0, 0x5B8
    ctx->pc = 0x2e6800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1464));
    // 0x2e6804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6808: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e6808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e680c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6810: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e6810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e6814: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e6818: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6818u;
    SET_GPR_U32(ctx, 31, 0x2E6820u);
    ctx->pc = 0x2E681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6818u;
    // 0x2e681c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6818u, 0x2E6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6820u;
label_2e6820:
    // 0x2e6820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6828: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E6828u;
    SET_GPR_U32(ctx, 31, 0x2E6830u);
    ctx->pc = 0x2E682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6828u;
    // 0x2e682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E6828u, 0x2E6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6830u;
label_2e6830:
    // 0x2e6830: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2e6830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2e6834: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e6834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e6838: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e6838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e683c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6844: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e6848: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6848u;
    SET_GPR_U32(ctx, 31, 0x2E6850u);
    ctx->pc = 0x2E684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6848u;
    // 0x2e684c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6848u, 0x2E6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6850u;
label_2e6850:
    // 0x2e6850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6858: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E6858u;
    SET_GPR_U32(ctx, 31, 0x2E6860u);
    ctx->pc = 0x2E685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6858u;
    // 0x2e685c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E6858u, 0x2E6860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6860u;
label_2e6860:
    // 0x2e6860: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2e6864: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e6864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e6868: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e6868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e686c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6874: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e6878: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6878u;
    SET_GPR_U32(ctx, 31, 0x2E6880u);
    ctx->pc = 0x2E687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6878u;
    // 0x2e687c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6878u, 0x2E6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6880u;
label_2e6880:
    // 0x2e6880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6884: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e6884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e6888: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E6888u;
    SET_GPR_U32(ctx, 31, 0x2E6890u);
    ctx->pc = 0x2E688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6888u;
    // 0x2e688c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E6888u, 0x2E6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6890u;
label_2e6890:
    // 0x2e6890: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2e6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e6894: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e6894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e6898: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e6898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e689c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e68a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e68a8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E68A8u;
    SET_GPR_U32(ctx, 31, 0x2E68B0u);
    ctx->pc = 0x2E68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68A8u;
    // 0x2e68ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E68A8u, 0x2E68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68B0u;
label_2e68b0:
    // 0x2e68b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e68b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e68b8: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E68B8u;
    SET_GPR_U32(ctx, 31, 0x2E68C0u);
    ctx->pc = 0x2E68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68B8u;
    // 0x2e68bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E68B8u, 0x2E68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68C0u;
label_2e68c0:
    // 0x2e68c0: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2e68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2e68c4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e68c8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e68cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e68ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e68d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e68d8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E68D8u;
    SET_GPR_U32(ctx, 31, 0x2E68E0u);
    ctx->pc = 0x2E68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68D8u;
    // 0x2e68dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E68D8u, 0x2E68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68E0u;
label_2e68e0:
    // 0x2e68e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e68e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e68e8: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E68E8u;
    SET_GPR_U32(ctx, 31, 0x2E68F0u);
    ctx->pc = 0x2E68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68E8u;
    // 0x2e68ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E68E8u, 0x2E68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68F0u;
label_2e68f0:
    // 0x2e68f0: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x2e68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2e68f4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e68f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e68f8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e68fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e68fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6904: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e6908: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6908u;
    SET_GPR_U32(ctx, 31, 0x2E6910u);
    ctx->pc = 0x2E690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6908u;
    // 0x2e690c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6908u, 0x2E6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6910u;
label_2e6910:
    // 0x2e6910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6914: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e6914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6918: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E6918u;
    SET_GPR_U32(ctx, 31, 0x2E6920u);
    ctx->pc = 0x2E691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6918u;
    // 0x2e691c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E6918u, 0x2E6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6920u;
label_2e6920:
    // 0x2e6920: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e6920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e6924: 0x26260088  addiu       $a2, $s1, 0x88
    ctx->pc = 0x2e6924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2e6928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e692c: 0x24630428  addiu       $v1, $v1, 0x428
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
    // 0x2e6930: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2e6930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2e6934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6938: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e6938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e693c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6940: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2e6940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2e6944: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2e6944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2e6948: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e694c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E694Cu;
    SET_GPR_U32(ctx, 31, 0x2E6954u);
    ctx->pc = 0x2E6950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E694Cu;
    // 0x2e6950: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E694Cu, 0x2E6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6954u;
label_2e6954:
    // 0x2e6954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6958: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e695c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E695Cu;
    SET_GPR_U32(ctx, 31, 0x2E6964u);
    ctx->pc = 0x2E6960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E695Cu;
    // 0x2e6960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E695Cu, 0x2E6964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6964u;
label_2e6964:
    // 0x2e6964: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e6964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e6968: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x2e6968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2e696c: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2e696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2e6970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6974: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e6974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e6978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e697c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e697cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e6980: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e6980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e6984: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2e6984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2e6988: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e698c: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2E698Cu;
    SET_GPR_U32(ctx, 31, 0x2E6994u);
    ctx->pc = 0x2E6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E698Cu;
    // 0x2e6990: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2E698Cu, 0x2E6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6994u;
label_2e6994:
    // 0x2e6994: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6994u;
    {
        const bool branch_taken_0x2e6994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6994u;
        // 0x2e6998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6994) {
            ctx->pc = 0x2E69B8u;
            goto label_2e69b8;
        }
    }
    ctx->pc = 0x2E699Cu;
    // 0x2e699c: 0x0  nop
    ctx->pc = 0x2e699cu;
    // NOP
    // 0x2e69a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e69a4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e69a8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e69ac: 0x2484053c  addiu       $a0, $a0, 0x53C
    ctx->pc = 0x2e69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1340));
    // 0x2e69b0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E69B0u;
    SET_GPR_U32(ctx, 31, 0x2E69B8u);
    ctx->pc = 0x2E69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69B0u;
    // 0x2e69b4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E69B0u, 0x2E69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69B8u;
label_2e69b8:
    // 0x2e69b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e69b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e69bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e69bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e69c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e69c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e69c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E69C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69C4u;
        // 0x2e69c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E69C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E69CCu;
    // 0x2e69cc: 0x0  nop
    ctx->pc = 0x2e69ccu;
    // NOP
    ctx->pc = 0x2e69d0u;
}
