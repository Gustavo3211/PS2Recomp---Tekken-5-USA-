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

// Function: sub_0010A5F0
// Address: 0x10a5f0 - 0x10a7d8
void sub_0010A5F0_0x10a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5F0_0x10a5f0");
#endif

    switch (ctx->pc) {
        case 0x10a608u: goto label_10a608;
        case 0x10a618u: goto label_10a618;
        case 0x10a628u: goto label_10a628;
        case 0x10a638u: goto label_10a638;
        case 0x10a648u: goto label_10a648;
        case 0x10a678u: goto label_10a678;
        case 0x10a698u: goto label_10a698;
        case 0x10a6a8u: goto label_10a6a8;
        case 0x10a6b8u: goto label_10a6b8;
        case 0x10a6c8u: goto label_10a6c8;
        case 0x10a6f8u: goto label_10a6f8;
        case 0x10a728u: goto label_10a728;
        case 0x10a758u: goto label_10a758;
        case 0x10a768u: goto label_10a768;
        case 0x10a774u: goto label_10a774;
        case 0x10a784u: goto label_10a784;
        case 0x10a794u: goto label_10a794;
        case 0x10a7a0u: goto label_10a7a0;
        case 0x10a7acu: goto label_10a7ac;
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7c4u: goto label_10a7c4;
        default: break;
    }

    ctx->pc = 0x10a5f0u;

    // 0x10a5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a5f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a5f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a5fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a600: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A600u;
    SET_GPR_U32(ctx, 31, 0x10A608u);
    ctx->pc = 0x10A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A600u;
    // 0x10a604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A600u, 0x10A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A608u;
label_10a608:
    // 0x10a608: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x10a608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x10a60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a610: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A610u;
    SET_GPR_U32(ctx, 31, 0x10A618u);
    ctx->pc = 0x10A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A610u;
    // 0x10a614: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A610u, 0x10A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A618u;
label_10a618:
    // 0x10a618: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x10a618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x10a61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a620: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A620u;
    SET_GPR_U32(ctx, 31, 0x10A628u);
    ctx->pc = 0x10A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A620u;
    // 0x10a624: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A620u, 0x10A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A628u;
label_10a628:
    // 0x10a628: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x10a628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x10a62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a630: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A630u;
    SET_GPR_U32(ctx, 31, 0x10A638u);
    ctx->pc = 0x10A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A630u;
    // 0x10a634: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A630u, 0x10A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A638u;
label_10a638:
    // 0x10a638: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x10a638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x10a63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a640: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A640u;
    SET_GPR_U32(ctx, 31, 0x10A648u);
    ctx->pc = 0x10A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A640u;
    // 0x10a644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A640u, 0x10A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A648u;
label_10a648:
    // 0x10a648: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10a648u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10a64c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x10a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x10a650: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10a650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10a654: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10a654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10a658: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10a658u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a65c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10a660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a664: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a668: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10a66c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10a66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10a670: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A670u;
    SET_GPR_U32(ctx, 31, 0x10A678u);
    ctx->pc = 0x10A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A670u;
    // 0x10a674: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A670u, 0x10A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a67c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x10a680: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A680u;
    {
        const bool branch_taken_0x10a680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A680u;
        // 0x10a684: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a680) {
            ctx->pc = 0x10A68Cu;
            goto label_10a68c;
        }
    }
    ctx->pc = 0x10A688u;
    // 0x10a688: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x10a688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_10a68c:
    // 0x10a68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a690: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A690u;
    SET_GPR_U32(ctx, 31, 0x10A698u);
    ctx->pc = 0x10A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A690u;
    // 0x10a694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A690u, 0x10A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A698u;
label_10a698:
    // 0x10a698: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x10a698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x10a69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A6A0u;
    SET_GPR_U32(ctx, 31, 0x10A6A8u);
    ctx->pc = 0x10A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6A0u;
    // 0x10a6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A6A0u, 0x10A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6A8u;
label_10a6a8:
    // 0x10a6a8: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x10a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x10a6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6b0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A6B0u;
    SET_GPR_U32(ctx, 31, 0x10A6B8u);
    ctx->pc = 0x10A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B0u;
    // 0x10a6b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A6B0u, 0x10A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6B8u;
label_10a6b8:
    // 0x10a6b8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x10a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x10a6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6c0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A6C0u;
    SET_GPR_U32(ctx, 31, 0x10A6C8u);
    ctx->pc = 0x10A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6C0u;
    // 0x10a6c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A6C0u, 0x10A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6C8u;
label_10a6c8:
    // 0x10a6c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a6cc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a6d0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x10a6d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a6d8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x10a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x10a6dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a6e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6ec: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a6f0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A6F0u;
    SET_GPR_U32(ctx, 31, 0x10A6F8u);
    ctx->pc = 0x10A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6F0u;
    // 0x10a6f4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A6F0u, 0x10A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6F8u;
label_10a6f8:
    // 0x10a6f8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a6fc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a700: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x10a700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x10a704: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a708: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x10a708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x10a70c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a714: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a71c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a720: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A720u;
    SET_GPR_U32(ctx, 31, 0x10A728u);
    ctx->pc = 0x10A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A720u;
    // 0x10a724: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A720u, 0x10A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A728u;
label_10a728:
    // 0x10a728: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a72c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a730: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x10a734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a738: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x10a73c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a744: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a74c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a750: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A750u;
    SET_GPR_U32(ctx, 31, 0x10A758u);
    ctx->pc = 0x10A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A750u;
    // 0x10a754: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A750u, 0x10A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A758u;
label_10a758:
    // 0x10a758: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x10a758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x10a75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a760: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A760u;
    SET_GPR_U32(ctx, 31, 0x10A768u);
    ctx->pc = 0x10A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A760u;
    // 0x10a764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A760u, 0x10A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A768u;
label_10a768:
    // 0x10a768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a76c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A76Cu;
    SET_GPR_U32(ctx, 31, 0x10A774u);
    ctx->pc = 0x10A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A76Cu;
    // 0x10a770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A76Cu, 0x10A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A774u;
label_10a774:
    // 0x10a774: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x10a774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x10a778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a77c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A77Cu;
    SET_GPR_U32(ctx, 31, 0x10A784u);
    ctx->pc = 0x10A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A77Cu;
    // 0x10a780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A77Cu, 0x10A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A784u;
label_10a784:
    // 0x10a784: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A784u;
    {
        const bool branch_taken_0x10a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A784u;
        // 0x10a788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a784) {
            ctx->pc = 0x10A7C4u;
            goto label_10a7c4;
        }
    }
    ctx->pc = 0x10A78Cu;
    // 0x10a78c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A78Cu;
    SET_GPR_U32(ctx, 31, 0x10A794u);
    ctx->pc = 0x10A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A78Cu;
    // 0x10a790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A78Cu, 0x10A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A794u;
label_10a794:
    // 0x10a794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a798: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A798u;
    SET_GPR_U32(ctx, 31, 0x10A7A0u);
    ctx->pc = 0x10A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A798u;
    // 0x10a79c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A798u, 0x10A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7A0u;
label_10a7a0:
    // 0x10a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7a4: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A7A4u;
    SET_GPR_U32(ctx, 31, 0x10A7ACu);
    ctx->pc = 0x10A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7A4u;
    // 0x10a7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A7A4u, 0x10A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7ACu;
label_10a7ac:
    // 0x10a7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A7B0u;
    SET_GPR_U32(ctx, 31, 0x10A7B8u);
    ctx->pc = 0x10A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7B0u;
    // 0x10a7b4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A7B0u, 0x10A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B8u;
label_10a7b8:
    // 0x10a7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7bc: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A7BCu;
    SET_GPR_U32(ctx, 31, 0x10A7C4u);
    ctx->pc = 0x10A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7BCu;
    // 0x10a7c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A7BCu, 0x10A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7C4u;
label_10a7c4:
    // 0x10a7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a7c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7CCu;
        // 0x10a7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A7D4u;
    // 0x10a7d4: 0x0  nop
    ctx->pc = 0x10a7d4u;
    // NOP
    ctx->pc = 0x10a7d8u;
}
