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

// Function: sub_002945B8
// Address: 0x2945b8 - 0x294a50
void sub_002945B8_0x2945b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002945B8_0x2945b8");
#endif

    switch (ctx->pc) {
        case 0x294604u: goto label_294604;
        case 0x294624u: goto label_294624;
        case 0x294638u: goto label_294638;
        case 0x294644u: goto label_294644;
        case 0x294654u: goto label_294654;
        case 0x294658u: goto label_294658;
        case 0x29468cu: goto label_29468c;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946e8u: goto label_2946e8;
        case 0x2946f4u: goto label_2946f4;
        case 0x294718u: goto label_294718;
        case 0x294724u: goto label_294724;
        case 0x294748u: goto label_294748;
        case 0x294754u: goto label_294754;
        case 0x2947a8u: goto label_2947a8;
        case 0x2947b8u: goto label_2947b8;
        case 0x294818u: goto label_294818;
        case 0x294824u: goto label_294824;
        case 0x294838u: goto label_294838;
        case 0x294888u: goto label_294888;
        case 0x2948a0u: goto label_2948a0;
        case 0x2948acu: goto label_2948ac;
        case 0x2948e8u: goto label_2948e8;
        case 0x2948f4u: goto label_2948f4;
        case 0x294930u: goto label_294930;
        default: break;
    }

    ctx->pc = 0x2945b8u;

    // 0x2945b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2945b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2945bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2945bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945c0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2945c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2945c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2945c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945c8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2945c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2945cc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2945ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2945d0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2945d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2945d4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2945d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2945d8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2945d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2945dc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2945dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2945e0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2945e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2945e4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2945e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2945e8: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x2945E8u;
    {
        const bool branch_taken_0x2945e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2945ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945E8u;
        // 0x2945ec: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945e8) {
            ctx->pc = 0x294A20u;
            goto label_294a20;
        }
    }
    ctx->pc = 0x2945F0u;
    // 0x2945f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2945f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2945f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2945f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2945f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2945f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945fc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2945FCu;
    SET_GPR_U32(ctx, 31, 0x294604u);
    ctx->pc = 0x294600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945FCu;
    // 0x294600: 0x24a5b8e0  addiu       $a1, $a1, -0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2945FCu, 0x294604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294604u;
label_294604:
    // 0x294604: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294608: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x294608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x29460c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x29460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x294610: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x294614: 0x24a5b8f8  addiu       $a1, $a1, -0x4708
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949112));
    // 0x294618: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x294618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29461c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29461Cu;
    SET_GPR_U32(ctx, 31, 0x294624u);
    ctx->pc = 0x294620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29461Cu;
    // 0x294620: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29461Cu, 0x294624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294624u;
label_294624:
    // 0x294624: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294628: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29462c: 0x24a5b918  addiu       $a1, $a1, -0x46E8
    ctx->pc = 0x29462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949144));
    // 0x294630: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x294630u;
    SET_GPR_U32(ctx, 31, 0x294638u);
    ctx->pc = 0x294634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294630u;
    // 0x294634: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x294630u, 0x294638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294638u;
label_294638:
    // 0x294638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29463c: 0xc0a52aa  jal         func_294AA8
    ctx->pc = 0x29463Cu;
    SET_GPR_U32(ctx, 31, 0x294644u);
    ctx->pc = 0x294640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29463Cu;
    // 0x294640: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AA8u, 0x29463Cu, 0x294644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294644u;
label_294644:
    // 0x294644: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x294644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
    // 0x294648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x294648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29464c: 0xc0a52d2  jal         func_294B48
    ctx->pc = 0x29464Cu;
    SET_GPR_U32(ctx, 31, 0x294654u);
    ctx->pc = 0x294650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29464Cu;
    // 0x294650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B48u, 0x29464Cu, 0x294654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294654u;
label_294654:
    // 0x294654: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x294654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_294658:
    // 0x294658: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x294658u;
    {
        const bool branch_taken_0x294658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294658u;
        // 0x29465c: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294658) {
            ctx->pc = 0x294790u;
            goto label_294790;
        }
    }
    ctx->pc = 0x294660u;
    // 0x294660: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x294660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x294664: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x294668: 0x8c42b9e0  lw          $v0, -0x4620($v0)
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949344)));
    // 0x29466c: 0x400008  jr          $v0
    ctx->pc = 0x29466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294678u: goto label_294678;
            case 0x294698u: goto label_294698;
            case 0x2946B0u: goto label_2946b0;
            case 0x2946D0u: goto label_2946d0;
            case 0x294700u: goto label_294700;
            case 0x294730u: goto label_294730;
            case 0x294790u: goto label_294790;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29466Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294674u;
    // 0x294674: 0x0  nop
    ctx->pc = 0x294674u;
    // NOP
label_294678:
    // 0x294678: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29467c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29467cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294680: 0x24a5b930  addiu       $a1, $a1, -0x46D0
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
    // 0x294684: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x294684u;
    SET_GPR_U32(ctx, 31, 0x29468Cu);
    ctx->pc = 0x294688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294684u;
    // 0x294688: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x294684u, 0x29468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29468Cu;
label_29468c:
    // 0x29468c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294690: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x294690u;
    {
        const bool branch_taken_0x294690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294690u;
        // 0x294694: 0xae640120  sw          $a0, 0x120($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294690) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x294698u;
label_294698:
    // 0x294698: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29469c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29469cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2946a0: 0x24a5b940  addiu       $a1, $a1, -0x46C0
    ctx->pc = 0x2946a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
    // 0x2946a4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2946A4u;
    {
        const bool branch_taken_0x2946a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946A4u;
        // 0x2946a8: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946a4) {
            ctx->pc = 0x2947B0u;
            goto label_2947b0;
        }
    }
    ctx->pc = 0x2946ACu;
    // 0x2946ac: 0x0  nop
    ctx->pc = 0x2946acu;
    // NOP
label_2946b0:
    // 0x2946b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2946b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2946b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2946b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2946b8: 0x24a5b950  addiu       $a1, $a1, -0x46B0
    ctx->pc = 0x2946b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
    // 0x2946bc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2946BCu;
    SET_GPR_U32(ctx, 31, 0x2946C4u);
    ctx->pc = 0x2946C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946BCu;
    // 0x2946c0: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2946BCu, 0x2946C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946C4u;
label_2946c4:
    // 0x2946c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2946c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946c8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2946C8u;
    {
        const bool branch_taken_0x2946c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946C8u;
        // 0x2946cc: 0xae640128  sw          $a0, 0x128($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946c8) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x2946D0u;
label_2946d0:
    // 0x2946d0: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2946d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2946d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2946d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2946d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2946d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946dc: 0x24a5b960  addiu       $a1, $a1, -0x46A0
    ctx->pc = 0x2946dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
    // 0x2946e0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2946E0u;
    SET_GPR_U32(ctx, 31, 0x2946E8u);
    ctx->pc = 0x2946E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946E0u;
    // 0x2946e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2946E0u, 0x2946E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946E8u;
label_2946e8:
    // 0x2946e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2946e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2946ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2946ECu;
    SET_GPR_U32(ctx, 31, 0x2946F4u);
    ctx->pc = 0x2946F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946ECu;
    // 0x2946f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2946ECu, 0x2946F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946F4u;
label_2946f4:
    // 0x2946f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2946f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946f8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2946F8u;
    {
        const bool branch_taken_0x2946f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946F8u;
        // 0x2946fc: 0xae64012c  sw          $a0, 0x12C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946f8) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x294700u;
label_294700:
    // 0x294700: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x294700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294704: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x294704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29470c: 0x24a5b960  addiu       $a1, $a1, -0x46A0
    ctx->pc = 0x29470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
    // 0x294710: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x294710u;
    SET_GPR_U32(ctx, 31, 0x294718u);
    ctx->pc = 0x294714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294710u;
    // 0x294714: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x294710u, 0x294718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294718u;
label_294718:
    // 0x294718: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29471c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29471Cu;
    SET_GPR_U32(ctx, 31, 0x294724u);
    ctx->pc = 0x294720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29471Cu;
    // 0x294720: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29471Cu, 0x294724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294724u;
label_294724:
    // 0x294724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294728: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x294728u;
    {
        const bool branch_taken_0x294728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294728u;
        // 0x29472c: 0xae640130  sw          $a0, 0x130($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294728) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x294730u;
label_294730:
    // 0x294730: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x294730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294734: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x294734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29473c: 0x24a5b960  addiu       $a1, $a1, -0x46A0
    ctx->pc = 0x29473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
    // 0x294740: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x294740u;
    SET_GPR_U32(ctx, 31, 0x294748u);
    ctx->pc = 0x294744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294740u;
    // 0x294744: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x294740u, 0x294748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294748u;
label_294748:
    // 0x294748: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x294748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29474c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29474Cu;
    SET_GPR_U32(ctx, 31, 0x294754u);
    ctx->pc = 0x294750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29474Cu;
    // 0x294750: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29474Cu, 0x294754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294754u;
label_294754:
    // 0x294754: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x294754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x294758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29475c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294764: 0xae640124  sw          $a0, 0x124($s3)
    ctx->pc = 0x294764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 4));
    // 0x294768: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x294768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29476c: 0x90650080  lbu         $a1, 0x80($v1)
    ctx->pc = 0x29476cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294770: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294770u;
    {
        const bool branch_taken_0x294770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x294774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294770u;
        // 0x294774: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294770) {
            ctx->pc = 0x294780u;
            goto label_294780;
        }
    }
    ctx->pc = 0x294778u;
    // 0x294778: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x294778u;
    {
        const bool branch_taken_0x294778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294778u;
        // 0x29477c: 0xe46000cc  swc1        $f0, 0xCC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294778) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x294780u;
label_294780:
    // 0x294780: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x294780u;
    {
        const bool branch_taken_0x294780 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x294784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294780u;
        // 0x294784: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294780) {
            ctx->pc = 0x2947C4u;
            goto label_2947c4;
        }
    }
    ctx->pc = 0x294788u;
    // 0x294788: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x294788u;
    {
        const bool branch_taken_0x294788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294788u;
        // 0x29478c: 0xe46000cc  swc1        $f0, 0xCC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294788) {
            ctx->pc = 0x2947BCu;
            goto label_2947bc;
        }
    }
    ctx->pc = 0x294790u;
label_294790:
    // 0x294790: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x294790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294794: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x294794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x294798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29479c: 0x24a5b960  addiu       $a1, $a1, -0x46A0
    ctx->pc = 0x29479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
    // 0x2947a0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2947A0u;
    SET_GPR_U32(ctx, 31, 0x2947A8u);
    ctx->pc = 0x2947A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2947A0u;
    // 0x2947a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2947A0u, 0x2947A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947A8u;
label_2947a8:
    // 0x2947a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2947a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2947ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2947acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2947b0:
    // 0x2947b0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2947B0u;
    SET_GPR_U32(ctx, 31, 0x2947B8u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2947B0u, 0x2947B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947B8u;
label_2947b8:
    // 0x2947b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2947b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2947bc:
    // 0x2947bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2947bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2947c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2947c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2947c4:
    // 0x2947c4: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x2947c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2947c8: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2947c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2947cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2947CCu;
    {
        const bool branch_taken_0x2947cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947CCu;
        // 0x2947d0: 0xac430090  sw          $v1, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947cc) {
            ctx->pc = 0x2947E8u;
            goto label_2947e8;
        }
    }
    ctx->pc = 0x2947D4u;
    // 0x2947d4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2947d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2947d8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2947d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2947dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2947e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2947e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2947e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2947e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2947e8:
    // 0x2947e8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2947e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947ec: 0x2a420023  slti        $v0, $s2, 0x23
    ctx->pc = 0x2947ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x2947f0: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2947F0u;
    {
        const bool branch_taken_0x2947f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2947F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947F0u;
        // 0x2947f4: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947f0) {
            ctx->pc = 0x294658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294658;
        }
    }
    ctx->pc = 0x2947F8u;
    // 0x2947f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2947f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2947fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2947fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294800: 0x2455b728  addiu       $s5, $v0, -0x48D8
    ctx->pc = 0x294800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948648));
    // 0x294804: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x294804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x294808: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x294808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x29480c: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x29480cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x294810: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x294810u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x294814: 0x0  nop
    ctx->pc = 0x294814u;
    // NOP
label_294818:
    // 0x294818: 0x2358021  addu        $s0, $s1, $s5
    ctx->pc = 0x294818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x29481c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x29481Cu;
    SET_GPR_U32(ctx, 31, 0x294824u);
    ctx->pc = 0x294820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29481Cu;
    // 0x294820: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x29481Cu, 0x294824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294824u;
label_294824:
    // 0x294824: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x294824u;
    {
        const bool branch_taken_0x294824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294824) {
            ctx->pc = 0x294828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294824u;
            // 0x294828: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29485Cu;
            goto label_29485c;
        }
    }
    ctx->pc = 0x29482Cu;
    // 0x29482c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294830: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x294830u;
    SET_GPR_U32(ctx, 31, 0x294838u);
    ctx->pc = 0x294834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294830u;
    // 0x294834: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x294830u, 0x294838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294838u;
label_294838:
    // 0x294838: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29483c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294840: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x294844: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x294844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x294848: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x294848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29484c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294850: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x294850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x294854: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x294858: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29485c:
    // 0x29485c: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x29485cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x294860: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x294860u;
    {
        const bool branch_taken_0x294860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294860u;
        // 0x294864: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294860) {
            ctx->pc = 0x294818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294818;
        }
    }
    ctx->pc = 0x294868u;
    // 0x294868: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x294868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29486c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29486cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294870: 0x2456b970  addiu       $s6, $v0, -0x4690
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x294874: 0x267e0008  addiu       $fp, $s3, 0x8
    ctx->pc = 0x294874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x294878: 0x2677000c  addiu       $s7, $s3, 0xC
    ctx->pc = 0x294878u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x29487c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x29487cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294880: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x294880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294884: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x294884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_294888:
    // 0x294888: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x294888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29488c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294890: 0x2445b9b8  addiu       $a1, $v0, -0x4648
    ctx->pc = 0x294890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949304));
    // 0x294894: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294898: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x294898u;
    SET_GPR_U32(ctx, 31, 0x2948A0u);
    ctx->pc = 0x29489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294898u;
    // 0x29489c: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x294898u, 0x2948A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948A0u;
label_2948a0:
    // 0x2948a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2948a4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2948A4u;
    SET_GPR_U32(ctx, 31, 0x2948ACu);
    ctx->pc = 0x2948A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948A4u;
    // 0x2948a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2948A4u, 0x2948ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948ACu;
label_2948ac:
    // 0x2948ac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2948acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2948b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2948b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2948b4: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2948b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2948b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2948B8u;
    {
        const bool branch_taken_0x2948b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2948BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948B8u;
        // 0x2948bc: 0xac430130  sw          $v1, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948b8) {
            ctx->pc = 0x2948D4u;
            goto label_2948d4;
        }
    }
    ctx->pc = 0x2948C0u;
    // 0x2948c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2948c4: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2948c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2948c8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2948c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2948cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2948ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2948d0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2948d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2948d4:
    // 0x2948d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2948d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2948d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2948dc: 0x2445b9c8  addiu       $a1, $v0, -0x4638
    ctx->pc = 0x2948dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949320));
    // 0x2948e0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2948E0u;
    SET_GPR_U32(ctx, 31, 0x2948E8u);
    ctx->pc = 0x2948E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948E0u;
    // 0x2948e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2948E0u, 0x2948E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948E8u;
label_2948e8:
    // 0x2948e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2948e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2948ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2948ECu;
    SET_GPR_U32(ctx, 31, 0x2948F4u);
    ctx->pc = 0x2948F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948ECu;
    // 0x2948f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2948ECu, 0x2948F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948F4u;
label_2948f4:
    // 0x2948f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2948f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2948f8: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x2948fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2948FCu;
    {
        const bool branch_taken_0x2948fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948FCu;
        // 0x294900: 0xac430140  sw          $v1, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948fc) {
            ctx->pc = 0x294918u;
            goto label_294918;
        }
    }
    ctx->pc = 0x294904u;
    // 0x294904: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x294904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x294908: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29490c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294910: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x294910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x294914: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x294914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_294918:
    // 0x294918: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x294918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29491c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x29491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x294920: 0x24a5b7b0  addiu       $a1, $a1, -0x4850
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948784));
    // 0x294924: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x294928: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x294928u;
    SET_GPR_U32(ctx, 31, 0x294930u);
    ctx->pc = 0x29492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294928u;
    // 0x29492c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x294928u, 0x294930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294930u;
label_294930:
    // 0x294930: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x294930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x294934: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x294934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
    // 0x294938: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x294938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29493c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x29493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294940: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x294944: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x294948: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29494c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294950: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x294950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x294954: 0x50750004  beql        $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x294954u;
    {
        const bool branch_taken_0x294954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x294954) {
            ctx->pc = 0x294958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294954u;
            // 0x294958: 0xe44000d0  swc1        $f0, 0xD0($v0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x294968u;
            goto label_294968;
        }
    }
    ctx->pc = 0x29495Cu;
    // 0x29495c: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29495Cu;
    {
        const bool branch_taken_0x29495c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x294960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29495Cu;
        // 0x294960: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29495c) {
            ctx->pc = 0x29496Cu;
            goto label_29496c;
        }
    }
    ctx->pc = 0x294964u;
    // 0x294964: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x294964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_294968:
    // 0x294968: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29496c:
    // 0x29496c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x29496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x294970: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294974: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x294978: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x294978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29497c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294980: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x294980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x294984: 0x50750004  beql        $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x294984u;
    {
        const bool branch_taken_0x294984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x294984) {
            ctx->pc = 0x294988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294984u;
            // 0x294988: 0xe44000d0  swc1        $f0, 0xD0($v0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x294998u;
            goto label_294998;
        }
    }
    ctx->pc = 0x29498Cu;
    // 0x29498c: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29498Cu;
    {
        const bool branch_taken_0x29498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x294990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29498Cu;
        // 0x294990: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29498c) {
            ctx->pc = 0x29499Cu;
            goto label_29499c;
        }
    }
    ctx->pc = 0x294994u;
    // 0x294994: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x294994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_294998:
    // 0x294998: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_29499c:
    // 0x29499c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2949a0: 0x8c640140  lw          $a0, 0x140($v1)
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x2949a4: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2949a8: 0x24a2b988  addiu       $v0, $a1, -0x4678
    ctx->pc = 0x2949a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949256));
    // 0x2949ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2949acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2949b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2949b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2949b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2949b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2949bc: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x2949bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2949c0: 0x10750003  beq         $v1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2949C0u;
    {
        const bool branch_taken_0x2949c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949C0u;
        // 0x2949c4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949c0) {
            ctx->pc = 0x2949D0u;
            goto label_2949d0;
        }
    }
    ctx->pc = 0x2949C8u;
    // 0x2949c8: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2949C8u;
    {
        const bool branch_taken_0x2949c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949C8u;
        // 0x2949cc: 0x2171821  addu        $v1, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949c8) {
            ctx->pc = 0x2949D8u;
            goto label_2949d8;
        }
    }
    ctx->pc = 0x2949D0u;
label_2949d0:
    // 0x2949d0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2949d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2949d4: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x2949d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2949d8:
    // 0x2949d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2949dc: 0x2482b9a0  addiu       $v0, $a0, -0x4660
    ctx->pc = 0x2949dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949280));
    // 0x2949e0: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2949e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2949e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2949e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2949e8: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x2949e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2949ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2949ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2949f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2949f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2949f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949f8: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x2949f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2949fc: 0x10750003  beq         $v1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2949FCu;
    {
        const bool branch_taken_0x2949fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x294A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949FCu;
        // 0x294a00: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949fc) {
            ctx->pc = 0x294A0Cu;
            goto label_294a0c;
        }
    }
    ctx->pc = 0x294A04u;
    // 0x294a04: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x294A04u;
    {
        const bool branch_taken_0x294a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x294A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A04u;
        // 0x294a08: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a04) {
            ctx->pc = 0x294A14u;
            goto label_294a14;
        }
    }
    ctx->pc = 0x294A0Cu;
label_294a0c:
    // 0x294a0c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x294a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x294a10: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x294a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_294a14:
    // 0x294a14: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x294a18: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x294A18u;
    {
        const bool branch_taken_0x294a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A18u;
        // 0x294a1c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a18) {
            ctx->pc = 0x294888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294888;
        }
    }
    ctx->pc = 0x294A20u;
label_294a20:
    // 0x294a20: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x294a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294a24: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x294a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x294a28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x294a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294a2c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x294a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x294a30: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x294a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294a34: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x294a34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x294a38: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x294a38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294a3c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x294a3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x294a40: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x294a40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294a44: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x294a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x294a48: 0x3e00008  jr          $ra
    ctx->pc = 0x294A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A48u;
        // 0x294a4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A50u;
}
