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

// Function: sub_002DCE88
// Address: 0x2dce88 - 0x2dcff0
void sub_002DCE88_0x2dce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE88_0x2dce88");
#endif

    switch (ctx->pc) {
        case 0x2dcec4u: goto label_2dcec4;
        case 0x2dced4u: goto label_2dced4;
        case 0x2dcee8u: goto label_2dcee8;
        case 0x2dcf00u: goto label_2dcf00;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf98u: goto label_2dcf98;
        default: break;
    }

    ctx->pc = 0x2dce88u;

    // 0x2dce88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dce8c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2dce8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2dce90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dce90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dce94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dce98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dce98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dce9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dcea0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2dcea0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dcea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dcea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcea8: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2dcea8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dceac: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2dceacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dceb0: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2dceb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dceb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dceb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dcebc: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2DCEBCu;
    SET_GPR_U32(ctx, 31, 0x2DCEC4u);
    ctx->pc = 0x2DCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEBCu;
    // 0x2dcec0: 0xe7b50028  swc1        $f21, 0x28($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2DCEBCu, 0x2DCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEC4u;
label_2dcec4:
    // 0x2dcec4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dcec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dcec8: 0xc79994ec  lwc1        $f25, -0x6B14($gp)
    ctx->pc = 0x2dcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2dcecc: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2DCECCu;
    SET_GPR_U32(ctx, 31, 0x2DCED4u);
    ctx->pc = 0x2DCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCECCu;
    // 0x2dced0: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2DCECCu, 0x2DCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCED4u;
label_2dced4:
    // 0x2dced4: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x2dced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x2dced8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2dced8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2dcedc: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2dcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2dcee0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2dcee0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2dcee4: 0x24512b80  addiu       $s1, $v0, 0x2B80
    ctx->pc = 0x2dcee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11136));
label_2dcee8:
    // 0x2dcee8: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2dcee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dceec: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x2dceecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dcef0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2dcef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2dcef4: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x2dcef4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2dcef8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2DCEF8u;
    SET_GPR_U32(ctx, 31, 0x2DCF00u);
    ctx->pc = 0x2DCEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEF8u;
    // 0x2dcefc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2DCEF8u, 0x2DCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF00u;
label_2dcf00:
    // 0x2dcf00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dcf00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dcf04: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2DCF04u;
    SET_GPR_U32(ctx, 31, 0x2DCF0Cu);
    ctx->pc = 0x2DCF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF04u;
    // 0x2dcf08: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2DCF04u, 0x2DCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF0Cu;
label_2dcf0c:
    // 0x2dcf0c: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x2dcf0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2dcf10: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2dcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2dcf14: 0x4617a881  sub.s       $f2, $f21, $f23
    ctx->pc = 0x2dcf14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x2dcf18: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2dcf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dcf1c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2dcf1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf20: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2dcf20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf24: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2dcf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf28: 0x2a450400  slti        $a1, $s2, 0x400
    ctx->pc = 0x2dcf28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2dcf2c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2dcf2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2dcf30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dcf30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf34: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x2dcf34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x2dcf38: 0xe4770000  swc1        $f23, 0x0($v1)
    ctx->pc = 0x2dcf38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2dcf3c: 0xe4960004  swc1        $f22, 0x4($a0)
    ctx->pc = 0x2dcf3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2dcf40: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2dcf40u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2dcf44: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x2dcf44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x2dcf48: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2dcf48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dcf4c: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DCF4Cu;
    {
        const bool branch_taken_0x2dcf4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF4Cu;
        // 0x2dcf50: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf4c) {
            ctx->pc = 0x2DCEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcee8;
        }
    }
    ctx->pc = 0x2DCF54u;
    // 0x2dcf54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dcf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dcf58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dcf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dcf5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dcf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dcf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcf64: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x2dcf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x2dcf68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dcf68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dcf6c: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x2DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF74u);
    ctx->pc = 0x2DCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF6Cu;
    // 0x2dcf70: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x2DCF6Cu, 0x2DCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF74u;
label_2dcf74:
    // 0x2dcf74: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2dcf78: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2dcf78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2dcf7c: 0x24526b80  addiu       $s2, $v0, 0x6B80
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
label_2dcf80:
    // 0x2dcf80: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dcf84: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x2dcf84u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcf88: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2dcf88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2dcf8c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2dcf8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x2dcf90: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x2DCF90u;
    SET_GPR_U32(ctx, 31, 0x2DCF98u);
    ctx->pc = 0x2DCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF90u;
    // 0x2dcf94: 0x460ca341  sub.s       $f13, $f20, $f12 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x2DCF90u, 0x2DCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF98u;
label_2dcf98:
    // 0x2dcf98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2dcf9c: 0x46150041  sub.s       $f1, $f0, $f21
    ctx->pc = 0x2dcf9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2dcfa0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2dcfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2dcfa4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2dcfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dcfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfac: 0x2a230401  slti        $v1, $s1, 0x401
    ctx->pc = 0x2dcfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2dcfb0: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x2dcfb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dcfb4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2dcfb4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2dcfb8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DCFB8u;
    {
        const bool branch_taken_0x2dcfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFB8u;
        // 0x2dcfbc: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfb8) {
            ctx->pc = 0x2DCF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcf80;
        }
    }
    ctx->pc = 0x2DCFC0u;
    // 0x2dcfc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dcfc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcfc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dcfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dcfc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dcfc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcfcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dcfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dcfd0: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2dcfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2dcfd4: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2dcfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2dcfd8: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2dcfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2dcfdc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2dcfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dcfe0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2dcfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dcfe4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2dcfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dcfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE8u;
        // 0x2dcfec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCFF0u;
}
