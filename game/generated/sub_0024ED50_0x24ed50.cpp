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

// Function: sub_0024ED50
// Address: 0x24ed50 - 0x24f198
void sub_0024ED50_0x24ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ED50_0x24ed50");
#endif

    switch (ctx->pc) {
        case 0x24eda0u: goto label_24eda0;
        case 0x24edd4u: goto label_24edd4;
        case 0x24edf8u: goto label_24edf8;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee64u: goto label_24ee64;
        case 0x24f000u: goto label_24f000;
        case 0x24f170u: goto label_24f170;
        default: break;
    }

    ctx->pc = 0x24ed50u;

    // 0x24ed50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ed54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ed58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24ed60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24ed64: 0xe7b80038  swc1        $f24, 0x38($sp)
    ctx->pc = 0x24ed64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ed68: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x24ed68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ed6c: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x24ed6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ed70: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x24ed70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ed74: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x24ed74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24ed78: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24ed78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24ed7c: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x24ED7Cu;
    {
        const bool branch_taken_0x24ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED7Cu;
        // 0x24ed80: 0x261100c0  addiu       $s1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed7c) {
            ctx->pc = 0x24F0A8u;
            goto label_24f0a8;
        }
    }
    ctx->pc = 0x24ED84u;
    // 0x24ed84: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x24ed84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x24ed88: 0xc78088c8  lwc1        $f0, -0x7738($gp)
    ctx->pc = 0x24ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ed8c: 0xe6170044  swc1        $f23, 0x44($s0)
    ctx->pc = 0x24ed8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x24ed90: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24ed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24ed94: 0xc79488cc  lwc1        $f20, -0x7734($gp)
    ctx->pc = 0x24ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24ed98: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24ED98u;
    SET_GPR_U32(ctx, 31, 0x24EDA0u);
    ctx->pc = 0x24ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED98u;
    // 0x24ed9c: 0xe6170070  swc1        $f23, 0x70($s0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24ED98u, 0x24EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDA0u;
label_24eda0:
    // 0x24eda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24eda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eda8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24eda8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24edac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24edacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24edb0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24edb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24edb4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x24edb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x24edb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24edb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24edbc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24edbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x24edc0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x24edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24edc4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24edc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24edc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24edc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24edcc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EDCCu;
    SET_GPR_U32(ctx, 31, 0x24EDD4u);
    ctx->pc = 0x24EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDCCu;
    // 0x24edd0: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EDCCu, 0x24EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDD4u;
label_24edd4:
    // 0x24edd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24edd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eddc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24eddcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ede0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24ede0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x24ede4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x24ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ede8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24ede8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24edec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24edecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24edf0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EDF0u;
    SET_GPR_U32(ctx, 31, 0x24EDF8u);
    ctx->pc = 0x24EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDF0u;
    // 0x24edf4: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EDF0u, 0x24EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDF8u;
label_24edf8:
    // 0x24edf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24edfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ee00: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ee00u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ee04: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24ee04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x24ee08: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x24ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ee0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ee0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ee10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee14: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x24ee14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x24ee18: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24ee18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24ee1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24ee1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24ee20: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EE20u;
    SET_GPR_U32(ctx, 31, 0x24EE28u);
    ctx->pc = 0x24EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE20u;
    // 0x24ee24: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EE20u, 0x24EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE28u;
label_24ee28:
    // 0x24ee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ee2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ee30: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ee30u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ee34: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24ee34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x24ee38: 0xc79588d0  lwc1        $f21, -0x7730($gp)
    ctx->pc = 0x24ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24ee3c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x24ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ee40: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24ee40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24ee44: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EE44u;
    SET_GPR_U32(ctx, 31, 0x24EE4Cu);
    ctx->pc = 0x24EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE44u;
    // 0x24ee48: 0x46010600  add.s       $f24, $f0, $f1 (Delay Slot)
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EE44u, 0x24EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE4Cu;
label_24ee4c:
    // 0x24ee4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ee50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ee54: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ee54u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ee58: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24ee58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x24ee5c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EE5Cu;
    SET_GPR_U32(ctx, 31, 0x24EE64u);
    ctx->pc = 0x24EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE5Cu;
    // 0x24ee60: 0x46150542  mul.s       $f21, $f0, $f21 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EE5Cu, 0x24EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE64u;
label_24ee64:
    // 0x24ee64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ee6c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ee6cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ee70: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x24ee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x24ee74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee78: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x24ee78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee7c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x24ee7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x24ee80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24ee80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ee84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ee84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ee88: 0xc78188d4  lwc1        $f1, -0x772C($gp)
    ctx->pc = 0x24ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ee8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24EE8Cu;
    {
        const bool branch_taken_0x24ee8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE8Cu;
        // 0x24ee90: 0x46020180  add.s       $f6, $f0, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee8c) {
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EE94u;
    // 0x24ee94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EE94u;
    {
        const bool branch_taken_0x24ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE94u;
        // 0x24ee98: 0x4601c000  add.s       $f0, $f24, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee94) {
            ctx->pc = 0x24EEA4u;
            goto label_24eea4;
        }
    }
    ctx->pc = 0x24EE9Cu;
    // 0x24ee9c: 0x0  nop
    ctx->pc = 0x24ee9cu;
    // NOP
label_24eea0:
    // 0x24eea0: 0x46180801  sub.s       $f0, $f1, $f24
    ctx->pc = 0x24eea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
label_24eea4:
    // 0x24eea4: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24eea4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24eea8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24eeac: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24eeb0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24eeb0u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eeb4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24eeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24eeb8: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24eeb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24eebc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24eebcu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eec0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24eec0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24eec4: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24eec4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24eec8: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24eec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24eecc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24eeccu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eed0: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24eed0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24eed4: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24eed4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24eed8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24eed8u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eedc: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24eedcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24eee0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24eee0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24eee4: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24eee4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24eee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24eee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24eeec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eef0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x24eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x24eef4: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x24eef4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x24eef8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24eef8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24eefc: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x24eefcu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ef00: 0x460100c4  c1          0x100C4
    ctx->pc = 0x24ef00u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ef04: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x24ef04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24ef08: 0x4604c034  c.lt.s      $f24, $f4
    ctx->pc = 0x24ef08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24EF0Cu;
    {
        const bool branch_taken_0x24ef0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF0Cu;
        // 0x24ef10: 0x460611c2  mul.s       $f7, $f2, $f6 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef0c) {
            ctx->pc = 0x24EF18u;
            goto label_24ef18;
        }
    }
    ctx->pc = 0x24EF14u;
    // 0x24ef14: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24ef14u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24ef18:
    // 0x24ef18: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x24ef18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x24ef1c: 0xc78188d8  lwc1        $f1, -0x7728($gp)
    ctx->pc = 0x24ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef20: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x24ef20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24EF24u;
    {
        const bool branch_taken_0x24ef24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF24u;
        // 0x24ef28: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef24) {
            ctx->pc = 0x24EF38u;
            goto label_24ef38;
        }
    }
    ctx->pc = 0x24EF2Cu;
    // 0x24ef2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EF2Cu;
    {
        const bool branch_taken_0x24ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF2Cu;
        // 0x24ef30: 0x4601a800  add.s       $f0, $f21, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef2c) {
            ctx->pc = 0x24EF3Cu;
            goto label_24ef3c;
        }
    }
    ctx->pc = 0x24EF34u;
    // 0x24ef34: 0x0  nop
    ctx->pc = 0x24ef34u;
    // NOP
label_24ef38:
    // 0x24ef38: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x24ef38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_24ef3c:
    // 0x24ef3c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24ef3cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24ef40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24ef44: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24ef48: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24ef48u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ef4c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24ef4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24ef50: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24ef50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24ef54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24ef54u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef58: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24ef58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24ef5c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24ef5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24ef60: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24ef60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24ef64: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24ef64u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ef68: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24ef68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24ef6c: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24ef6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24ef70: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ef70u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef74: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24ef74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24ef78: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24ef78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24ef7c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24ef7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24ef80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ef84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ef84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef88: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x24ef88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x24ef8c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24ef8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24ef90: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x24ef90u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x24ef94: 0x460200c4  c1          0x200C4
    ctx->pc = 0x24ef94u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ef98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ef98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef9c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x24ef9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x24efa0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x24efa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24efa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24EFA4u;
    {
        const bool branch_taken_0x24efa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFA4u;
        // 0x24efa8: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efa4) {
            ctx->pc = 0x24EFB0u;
            goto label_24efb0;
        }
    }
    ctx->pc = 0x24EFACu;
    // 0x24efac: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24efacu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24efb0:
    // 0x24efb0: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x24efb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x24efb4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x24efb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efb8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x24efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24efbc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x24efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x24efc0: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x24efc0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24efc4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x24efc4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24efc8: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24efc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24efcc: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x24efccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24efd0: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x24efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x24efd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24efd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24efd8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x24efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24efdc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x24efdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efe0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24efe0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24efe4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24efe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24efe8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x24efe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24efec: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24efecu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eff0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x24eff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24eff4: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x24eff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24eff8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EFF8u;
    SET_GPR_U32(ctx, 31, 0x24F000u);
    ctx->pc = 0x24EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFF8u;
    // 0x24effc: 0xf8500000  sqc2        $vf16, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EFF8u, 0x24F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F000u;
label_24f000:
    // 0x24f000: 0x96030066  lhu         $v1, 0x66($s0)
    ctx->pc = 0x24f000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24f004: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x24f008: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x24f008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24f00c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f014: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24f014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24f018: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f01c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24f020: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24f020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24f024: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F024u;
    {
        const bool branch_taken_0x24f024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F024u;
        // 0x24f028: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f024) {
            ctx->pc = 0x24F040u;
            goto label_24f040;
        }
    }
    ctx->pc = 0x24F02Cu;
    // 0x24f02c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f030: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F038u;
    {
        const bool branch_taken_0x24f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F038u;
        // 0x24f03c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f038) {
            ctx->pc = 0x24F044u;
            goto label_24f044;
        }
    }
    ctx->pc = 0x24F040u;
label_24f040:
    // 0x24f040: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f044:
    // 0x24f044: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24f044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24f048: 0x0  nop
    ctx->pc = 0x24f048u;
    // NOP
    // 0x24f04c: 0x0  nop
    ctx->pc = 0x24f04cu;
    // NOP
    // 0x24f050: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24f050u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x24f054: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x24f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x24f058: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x24f058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24f05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f068: 0x0  nop
    ctx->pc = 0x24f068u;
    // NOP
    // 0x24f06c: 0x0  nop
    ctx->pc = 0x24f06cu;
    // NOP
    // 0x24f070: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24f070u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x24f074: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x24f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x24f078: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x24f078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x24f07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f084: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x24f084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x24f088: 0x9602011c  lhu         $v0, 0x11C($s0)
    ctx->pc = 0x24f088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24f08c: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x24f08cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24f090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f098: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x24f098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f09c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24F09Cu;
    {
        const bool branch_taken_0x24f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F09Cu;
        // 0x24f0a0: 0xa6030064  sh          $v1, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f09c) {
            ctx->pc = 0x24F148u;
            goto label_24f148;
        }
    }
    ctx->pc = 0x24F0A4u;
    // 0x24f0a4: 0x0  nop
    ctx->pc = 0x24f0a4u;
    // NOP
label_24f0a8:
    // 0x24f0a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24f0ac: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24f0b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F0B0u;
    {
        const bool branch_taken_0x24f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0B0u;
        // 0x24f0b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0b0) {
            ctx->pc = 0x24F0C8u;
            goto label_24f0c8;
        }
    }
    ctx->pc = 0x24F0B8u;
    // 0x24f0b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f0bc: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24f0c0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24f0c4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24f0c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24f0c8:
    // 0x24f0c8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24F0C8u;
    {
        const bool branch_taken_0x24f0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C8u;
        // 0x24f0cc: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0c8) {
            ctx->pc = 0x24F148u;
            goto label_24f148;
        }
    }
    ctx->pc = 0x24F0D0u;
    // 0x24f0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0d4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24f0d8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f0d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f0dc: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24f0dcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f0e0: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24f0e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f0e4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24f0e8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x24f0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x24f0ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24f0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24f0f0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x24f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f0f4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x24f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f0f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24f0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24f0fc: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x24f0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x24f100: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x24f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f104: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x24f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24f108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24f10c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x24f10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f110: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x24f110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x24f114: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24f118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24f118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f11c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x24F11Cu;
    {
        const bool branch_taken_0x24f11c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f11c) {
            ctx->pc = 0x24F120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F11Cu;
            // 0x24f120: 0x96020064  lhu         $v0, 0x64($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F124u;
    // 0x24f124: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24f124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24f128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24f128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24f12c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f12cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24f130: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24f130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f134: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24f134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24f138: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x24f138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24f13c:
    // 0x24f13c: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x24f13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x24f140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f144: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x24f144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
label_24f148:
    // 0x24f148: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24f148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24f14c: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24f14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24f150: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24f150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f154: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F154u;
    {
        const bool branch_taken_0x24f154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F154u;
        // 0x24f158: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f154) {
            ctx->pc = 0x24F168u;
            goto label_24f168;
        }
    }
    ctx->pc = 0x24F15Cu;
    // 0x24f15c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24f160: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24f164: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24f164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24f168:
    // 0x24f168: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24F168u;
    SET_GPR_U32(ctx, 31, 0x24F170u);
    ctx->pc = 0x24F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F168u;
    // 0x24f16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24F168u, 0x24F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F170u;
label_24f170:
    // 0x24f170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24f174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f17c: 0xc7b80038  lwc1        $f24, 0x38($sp)
    ctx->pc = 0x24f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24f180: 0xc7b70030  lwc1        $f23, 0x30($sp)
    ctx->pc = 0x24f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24f184: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x24f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24f188: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x24f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24f18c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x24f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f190: 0x3e00008  jr          $ra
    ctx->pc = 0x24F190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F190u;
        // 0x24f194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F198u;
}
