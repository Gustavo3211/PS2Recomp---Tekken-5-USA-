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

// Function: sub_0029E9E8
// Address: 0x29e9e8 - 0x29eb08
void sub_0029E9E8_0x29e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9E8_0x29e9e8");
#endif

    switch (ctx->pc) {
        case 0x29ea0cu: goto label_29ea0c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea80u: goto label_29ea80;
        case 0x29eaf0u: goto label_29eaf0;
        default: break;
    }

    ctx->pc = 0x29e9e8u;

    // 0x29e9e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e9f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29e9f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29e9fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ea00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ea04: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x29EA04u;
    SET_GPR_U32(ctx, 31, 0x29EA0Cu);
    ctx->pc = 0x29EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA04u;
    // 0x29ea08: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x29EA04u, 0x29EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA0Cu;
label_29ea0c:
    // 0x29ea0c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29ea10: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x29ea10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x29ea14: 0x26110158  addiu       $s1, $s0, 0x158
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x29ea18: 0x26120160  addiu       $s2, $s0, 0x160
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x29ea1c: 0x2463e540  addiu       $v1, $v1, -0x1AC0
    ctx->pc = 0x29ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960448));
    // 0x29ea20: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29ea20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29ea24: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x29ea28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x29ea30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x29ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x29ea38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x29ea3c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x29ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x29ea40: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x29ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x29ea44: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x29ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29ea48: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29EA48u;
    SET_GPR_U32(ctx, 31, 0x29EA50u);
    ctx->pc = 0x29EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA48u;
    // 0x29ea4c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29EA48u, 0x29EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA50u;
label_29ea50:
    // 0x29ea50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29ea54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x29ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x29ea58: 0x2463c710  addiu       $v1, $v1, -0x38F0
    ctx->pc = 0x29ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952720));
    // 0x29ea5c: 0x2484e510  addiu       $a0, $a0, -0x1AF0
    ctx->pc = 0x29ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
    // 0x29ea60: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x29ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x29ea64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea68: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x29ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x29ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29ea74: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29ea78: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29EA78u;
    SET_GPR_U32(ctx, 31, 0x29EA80u);
    ctx->pc = 0x29EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA78u;
    // 0x29ea7c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29EA78u, 0x29EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA80u;
label_29ea80:
    // 0x29ea80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29ea84: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x29ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x29ea88: 0x2463c730  addiu       $v1, $v1, -0x38D0
    ctx->pc = 0x29ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952752));
    // 0x29ea8c: 0x2484e4e0  addiu       $a0, $a0, -0x1B20
    ctx->pc = 0x29ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960352));
    // 0x29ea90: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x29ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x29ea94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29ea98: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x29ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x29ea9c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x29ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x29eaa0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29eaa4: 0x24a5c750  addiu       $a1, $a1, -0x38B0
    ctx->pc = 0x29eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952784));
    // 0x29eaa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29eaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29eaac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29eaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eab0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29eab4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x29eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x29eab8: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x29eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x29eabc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x29eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x29eac0: 0xae130150  sw          $s3, 0x150($s0)
    ctx->pc = 0x29eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 19));
    // 0x29eac4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29eac8: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x29eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x29eacc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x29eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x29ead0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29EAD0u;
    {
        const bool branch_taken_0x29ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAD0u;
        // 0x29ead4: 0xaf80b6cc  sw          $zero, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ead0) {
            ctx->pc = 0x29EB10u;
            return;
        }
    }
    ctx->pc = 0x29EAD8u;
    // 0x29ead8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29eadc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x29eae0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x29eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x29eae4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29eae8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x29EAE8u;
    SET_GPR_U32(ctx, 31, 0x29EAF0u);
    ctx->pc = 0x29EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAE8u;
    // 0x29eaec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x29EAE8u, 0x29EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAF0u;
label_29eaf0:
    // 0x29eaf0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29eaf4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x29eaf8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x29eafc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x29eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x29eb00: 0xc048b90  jal         func_122E40
    ctx->pc = 0x29EB00u;
    SET_GPR_U32(ctx, 31, 0x29EB08u);
    ctx->pc = 0x29EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB00u;
    // 0x29eb04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x29EB00u, 0x29EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB08u;
}
