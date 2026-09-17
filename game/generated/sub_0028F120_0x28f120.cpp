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

// Function: sub_0028F120
// Address: 0x28f120 - 0x28f1f8
void sub_0028F120_0x28f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F120_0x28f120");
#endif

    switch (ctx->pc) {
        case 0x28f138u: goto label_28f138;
        case 0x28f158u: goto label_28f158;
        case 0x28f16cu: goto label_28f16c;
        case 0x28f180u: goto label_28f180;
        case 0x28f18cu: goto label_28f18c;
        case 0x28f1e0u: goto label_28f1e0;
        default: break;
    }

    ctx->pc = 0x28f120u;

    // 0x28f120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f12c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f130: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x28F130u;
    SET_GPR_U32(ctx, 31, 0x28F138u);
    ctx->pc = 0x28F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F130u;
    // 0x28f134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x28F130u, 0x28F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F138u;
label_28f138:
    // 0x28f138: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x28f138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x28f13c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x28f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x28f140: 0x2611015c  addiu       $s1, $s0, 0x15C
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x28f144: 0x2463e0c8  addiu       $v1, $v1, -0x1F38
    ctx->pc = 0x28f144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959304));
    // 0x28f148: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28f148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x28f14c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x28f150: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28F150u;
    SET_GPR_U32(ctx, 31, 0x28F158u);
    ctx->pc = 0x28F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F150u;
    // 0x28f154: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28F150u, 0x28F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F158u;
label_28f158:
    // 0x28f158: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28f158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f15c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x28f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x28f160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f164: 0xc089636  jal         func_2258D8
    ctx->pc = 0x28F164u;
    SET_GPR_U32(ctx, 31, 0x28F16Cu);
    ctx->pc = 0x28F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F164u;
    // 0x28f168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x28F164u, 0x28F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F16Cu;
label_28f16c:
    // 0x28f16c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28f170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f174: 0x2442a878  addiu       $v0, $v0, -0x5788
    ctx->pc = 0x28f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944888));
    // 0x28f178: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28F178u;
    SET_GPR_U32(ctx, 31, 0x28F180u);
    ctx->pc = 0x28F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F178u;
    // 0x28f17c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28F178u, 0x28F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F180u;
label_28f180:
    // 0x28f180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f184: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28F184u;
    SET_GPR_U32(ctx, 31, 0x28F18Cu);
    ctx->pc = 0x28F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F184u;
    // 0x28f188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28F184u, 0x28F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F18Cu;
label_28f18c:
    // 0x28f18c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28f190: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x28f190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28f194: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x28f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x28f198: 0x2484e098  addiu       $a0, $a0, -0x1F68
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959256));
    // 0x28f19c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x28f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x28f1a0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x28f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x28f1a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28f1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f1ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f1b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28f1b4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28f1b8: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x28f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x28f1bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28F1BCu;
    {
        const bool branch_taken_0x28f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1BCu;
        // 0x28f1c0: 0xae00016c  sw          $zero, 0x16C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1bc) {
            ctx->pc = 0x28F200u;
            return;
        }
    }
    ctx->pc = 0x28F1C4u;
    // 0x28f1c4: 0x0  nop
    ctx->pc = 0x28f1c4u;
    // NOP
    // 0x28f1c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28f1cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x28f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x28f1d0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x28f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x28f1d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28f1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f1d8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x28F1D8u;
    SET_GPR_U32(ctx, 31, 0x28F1E0u);
    ctx->pc = 0x28F1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1D8u;
    // 0x28f1dc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x28F1D8u, 0x28F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1E0u;
label_28f1e0:
    // 0x28f1e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28f1e4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28f1e8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x28f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x28f1ec: 0x2484fde8  addiu       $a0, $a0, -0x218
    ctx->pc = 0x28f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966760));
    // 0x28f1f0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28F1F0u;
    SET_GPR_U32(ctx, 31, 0x28F1F8u);
    ctx->pc = 0x28F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1F0u;
    // 0x28f1f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28F1F0u, 0x28F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1F8u;
}
