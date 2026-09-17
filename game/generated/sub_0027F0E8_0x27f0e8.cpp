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

// Function: sub_0027F0E8
// Address: 0x27f0e8 - 0x27f1c0
void sub_0027F0E8_0x27f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F0E8_0x27f0e8");
#endif

    switch (ctx->pc) {
        case 0x27f108u: goto label_27f108;
        case 0x27f11cu: goto label_27f11c;
        case 0x27f134u: goto label_27f134;
        case 0x27f144u: goto label_27f144;
        case 0x27f1a8u: goto label_27f1a8;
        default: break;
    }

    ctx->pc = 0x27f0e8u;

    // 0x27f0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f0ec: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x27f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x27f0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27f0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f0f8: 0x24500880  addiu       $s0, $v0, 0x880
    ctx->pc = 0x27f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x27f0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27f100: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f104: 0x0  nop
    ctx->pc = 0x27f104u;
    // NOP
label_27f108:
    // 0x27f108: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x27f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x27f10c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F10Cu;
    {
        const bool branch_taken_0x27f10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f10c) {
            ctx->pc = 0x27F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F10Cu;
            // 0x27f110: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F120u;
            goto label_27f120;
        }
    }
    ctx->pc = 0x27F114u;
    // 0x27f114: 0xc09fb1a  jal         func_27EC68
    ctx->pc = 0x27F114u;
    SET_GPR_U32(ctx, 31, 0x27F11Cu);
    ctx->pc = 0x27F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F114u;
    // 0x27f118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EC68u, 0x27F114u, 0x27F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F11Cu;
label_27f11c:
    // 0x27f11c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27f120:
    // 0x27f120: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x27f120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27f124: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27F124u;
    {
        const bool branch_taken_0x27f124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F124u;
        // 0x27f128: 0x26101070  addiu       $s0, $s0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f124) {
            ctx->pc = 0x27F108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f108;
        }
    }
    ctx->pc = 0x27F12Cu;
    // 0x27f12c: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x27F12Cu;
    SET_GPR_U32(ctx, 31, 0x27F134u);
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x27F12Cu, 0x27F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F134u;
label_27f134:
    // 0x27f134: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x27F134u;
    {
        const bool branch_taken_0x27f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f134) {
            ctx->pc = 0x27F138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F134u;
            // 0x27f138: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F1ACu;
            goto label_27f1ac;
        }
    }
    ctx->pc = 0x27F13Cu;
    // 0x27f13c: 0xc090c22  jal         func_243088
    ctx->pc = 0x27F13Cu;
    SET_GPR_U32(ctx, 31, 0x27F144u);
    ctx->pc = 0x243088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243088u, 0x27F13Cu, 0x27F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F144u;
label_27f144:
    // 0x27f144: 0xc7828e3c  lwc1        $f2, -0x71C4($gp)
    ctx->pc = 0x27f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f148: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27f148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27f14c: 0xc7818e40  lwc1        $f1, -0x71C0($gp)
    ctx->pc = 0x27f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f150: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27f150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27f154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f15c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27f15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27f160: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27f160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27f164: 0x0  nop
    ctx->pc = 0x27f164u;
    // NOP
    // 0x27f168: 0x0  nop
    ctx->pc = 0x27f168u;
    // NOP
    // 0x27f16c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x27f16cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x27f170: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x27f170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f174: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27F174u;
    {
        const bool branch_taken_0x27f174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f174) {
            ctx->pc = 0x27F188u;
            goto label_27f188;
        }
    }
    ctx->pc = 0x27F17Cu;
    // 0x27f17c: 0xc7808e44  lwc1        $f0, -0x71BC($gp)
    ctx->pc = 0x27f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F180u;
    {
        const bool branch_taken_0x27f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F180u;
        // 0x27f184: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f180) {
            ctx->pc = 0x27F1A0u;
            goto label_27f1a0;
        }
    }
    ctx->pc = 0x27F188u;
label_27f188:
    // 0x27f188: 0xc7808e48  lwc1        $f0, -0x71B8($gp)
    ctx->pc = 0x27f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f18c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x27f18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f190: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27F190u;
    {
        const bool branch_taken_0x27f190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f190) {
            ctx->pc = 0x27F1A0u;
            goto label_27f1a0;
        }
    }
    ctx->pc = 0x27F198u;
    // 0x27f198: 0xc7808e4c  lwc1        $f0, -0x71B4($gp)
    ctx->pc = 0x27f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f19c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x27f19cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_27f1a0:
    // 0x27f1a0: 0xc09fcaa  jal         func_27F2A8
    ctx->pc = 0x27F1A0u;
    SET_GPR_U32(ctx, 31, 0x27F1A8u);
    ctx->pc = 0x27F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F2A8u, 0x27F1A0u, 0x27F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1A8u;
label_27f1a8:
    // 0x27f1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f1ac:
    // 0x27f1ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27f1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1B4u;
        // 0x27f1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1BCu;
    // 0x27f1bc: 0x0  nop
    ctx->pc = 0x27f1bcu;
    // NOP
    ctx->pc = 0x27f1c0u;
}
