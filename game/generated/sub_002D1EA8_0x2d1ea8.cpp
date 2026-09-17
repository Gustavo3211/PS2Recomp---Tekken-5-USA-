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

// Function: sub_002D1EA8
// Address: 0x2d1ea8 - 0x2d20d8
void sub_002D1EA8_0x2d1ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1EA8_0x2d1ea8");
#endif

    switch (ctx->pc) {
        case 0x2d1ee0u: goto label_2d1ee0;
        case 0x2d1f24u: goto label_2d1f24;
        case 0x2d1f58u: goto label_2d1f58;
        case 0x2d1f80u: goto label_2d1f80;
        case 0x2d1fa8u: goto label_2d1fa8;
        case 0x2d1fe0u: goto label_2d1fe0;
        case 0x2d2008u: goto label_2d2008;
        default: break;
    }

    ctx->pc = 0x2d1ea8u;

    // 0x2d1ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1eb0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1eb8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2d1eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d1ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1ec0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2d1ec0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1ec4: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2d1ec4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d1ec8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2d1ec8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d1ecc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2d1eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1ed0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d1ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d1ed4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d1ed8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1ED8u;
    SET_GPR_U32(ctx, 31, 0x2D1EE0u);
    ctx->pc = 0x2D1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1ED8u;
    // 0x2d1edc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1ED8u, 0x2D1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EE0u;
label_2d1ee0:
    // 0x2d1ee0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1ee4: 0xc796938c  lwc1        $f22, -0x6C74($gp)
    ctx->pc = 0x2d1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d1ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1eec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1ef0: 0xc7949390  lwc1        $f20, -0x6C70($gp)
    ctx->pc = 0x2d1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1ef4: 0xc7959394  lwc1        $f21, -0x6C6C($gp)
    ctx->pc = 0x2d1ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d1ef8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2d1efc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2d1efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d1f00: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x2d1f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x2d1f04: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2d1f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2d1f08: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2d1f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2d1f0c: 0x0  nop
    ctx->pc = 0x2d1f0cu;
    // NOP
    // 0x2d1f10: 0x0  nop
    ctx->pc = 0x2d1f10u;
    // NOP
    // 0x2d1f14: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1f14u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1f18: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2d1f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2d1f1c: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F24u);
    ctx->pc = 0x2D1F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F1Cu;
    // 0x2d1f20: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1F1Cu, 0x2D1F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F24u;
label_2d1f24:
    // 0x2d1f24: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x2d1f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x2d1f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1f2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1f30: 0xc7829398  lwc1        $f2, -0x6C68($gp)
    ctx->pc = 0x2d1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1f38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d1f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1f40: 0x0  nop
    ctx->pc = 0x2d1f40u;
    // NOP
    // 0x2d1f44: 0x0  nop
    ctx->pc = 0x2d1f44u;
    // NOP
    // 0x2d1f48: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1f48u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1f4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d1f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d1f50: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1F50u;
    SET_GPR_U32(ctx, 31, 0x2D1F58u);
    ctx->pc = 0x2D1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F50u;
    // 0x2d1f54: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1F50u, 0x2D1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F58u;
label_2d1f58:
    // 0x2d1f58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1f58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1f60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1f64: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2d1f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2d1f68: 0x0  nop
    ctx->pc = 0x2d1f68u;
    // NOP
    // 0x2d1f6c: 0x0  nop
    ctx->pc = 0x2d1f6cu;
    // NOP
    // 0x2d1f70: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1f70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1f74: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2d1f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2d1f78: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1F78u;
    SET_GPR_U32(ctx, 31, 0x2D1F80u);
    ctx->pc = 0x2D1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F78u;
    // 0x2d1f7c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1F78u, 0x2D1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F80u;
label_2d1f80:
    // 0x2d1f80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1f8c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2d1f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2d1f90: 0x0  nop
    ctx->pc = 0x2d1f90u;
    // NOP
    // 0x2d1f94: 0x0  nop
    ctx->pc = 0x2d1f94u;
    // NOP
    // 0x2d1f98: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1f98u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1f9c: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2d1f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2d1fa0: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1FA0u;
    SET_GPR_U32(ctx, 31, 0x2D1FA8u);
    ctx->pc = 0x2D1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FA0u;
    // 0x2d1fa4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1FA0u, 0x2D1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FA8u;
label_2d1fa8:
    // 0x2d1fa8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2d1fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2d1fac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1fb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1fb4: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x2d1fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x2d1fb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d1fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d1fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1fc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d1fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1fc8: 0x0  nop
    ctx->pc = 0x2d1fc8u;
    // NOP
    // 0x2d1fcc: 0x0  nop
    ctx->pc = 0x2d1fccu;
    // NOP
    // 0x2d1fd0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1fd0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1fd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d1fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d1fd8: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D1FD8u;
    SET_GPR_U32(ctx, 31, 0x2D1FE0u);
    ctx->pc = 0x2D1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FD8u;
    // 0x2d1fdc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D1FD8u, 0x2D1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FE0u;
label_2d1fe0:
    // 0x2d1fe0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d1fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d1fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1fe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d1fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d1fec: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2d1fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2d1ff0: 0x0  nop
    ctx->pc = 0x2d1ff0u;
    // NOP
    // 0x2d1ff4: 0x0  nop
    ctx->pc = 0x2d1ff4u;
    // NOP
    // 0x2d1ff8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d1ff8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d1ffc: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2d1ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2d2000: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D2000u;
    SET_GPR_U32(ctx, 31, 0x2D2008u);
    ctx->pc = 0x2D2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2000u;
    // 0x2d2004: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D2000u, 0x2D2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2008u;
label_2d2008:
    // 0x2d2008: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d2008u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d200c: 0xc782939c  lwc1        $f2, -0x6C64($gp)
    ctx->pc = 0x2d200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2018: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2d2018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2d201c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d2020: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2028: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d2028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d202c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d202cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d2030: 0x0  nop
    ctx->pc = 0x2d2030u;
    // NOP
    // 0x2d2034: 0x0  nop
    ctx->pc = 0x2d2034u;
    // NOP
    // 0x2d2038: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2d2038u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2d203c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d203cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2040: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2d2040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2044: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2048: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d2048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d204c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D204Cu;
    {
        const bool branch_taken_0x2d204c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d204c) {
            ctx->pc = 0x2D2068u;
            goto label_2d2068;
        }
    }
    ctx->pc = 0x2D2054u;
    // 0x2d2054: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2d2054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d2058: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d205c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d205cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d2060: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d2064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d2068:
    // 0x2d2068: 0xc78093a0  lwc1        $f0, -0x6C60($gp)
    ctx->pc = 0x2d2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d206c: 0xc78193a4  lwc1        $f1, -0x6C5C($gp)
    ctx->pc = 0x2d206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2070: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2d2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2d2074: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2d2074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2d2078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d207c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d2080: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2d2080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2d2084: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x2d2084u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d2088: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2d2088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d208c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d208cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d2090: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x2d2090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d2094: 0xe603003c  swc1        $f3, 0x3C($s0)
    ctx->pc = 0x2d2094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d2098: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d2098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d209c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d209cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2d20a0: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x2d20a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d20a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d20a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20a8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2d20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x2d20ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d20acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d20b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d20b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d20b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d20b8: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2d20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d20bc: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2d20bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d20c0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2d20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d20c4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2d20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d20c8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d20c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20CCu;
        // 0x2d20d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D20CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D20D4u;
    // 0x2d20d4: 0x0  nop
    ctx->pc = 0x2d20d4u;
    // NOP
    ctx->pc = 0x2d20d8u;
}
