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

// Function: sub_00311BF0
// Address: 0x311bf0 - 0x3127a0
void sub_00311BF0_0x311bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311BF0_0x311bf0");
#endif

    switch (ctx->pc) {
        case 0x311c90u: goto label_311c90;
        case 0x311c98u: goto label_311c98;
        case 0x311cb4u: goto label_311cb4;
        case 0x311cd0u: goto label_311cd0;
        case 0x311d08u: goto label_311d08;
        case 0x311d28u: goto label_311d28;
        case 0x311d58u: goto label_311d58;
        case 0x311da0u: goto label_311da0;
        case 0x311ea8u: goto label_311ea8;
        case 0x311eb4u: goto label_311eb4;
        case 0x311ec8u: goto label_311ec8;
        case 0x311ef8u: goto label_311ef8;
        case 0x311f04u: goto label_311f04;
        case 0x311f34u: goto label_311f34;
        case 0x311f58u: goto label_311f58;
        case 0x31237cu: goto label_31237c;
        case 0x31243cu: goto label_31243c;
        case 0x312474u: goto label_312474;
        case 0x312528u: goto label_312528;
        case 0x312698u: goto label_312698;
        case 0x312728u: goto label_312728;
        case 0x312734u: goto label_312734;
        case 0x31273cu: goto label_31273c;
        case 0x31274cu: goto label_31274c;
        case 0x312754u: goto label_312754;
        default: break;
    }

    ctx->pc = 0x311bf0u;

    // 0x311bf0: 0x8f87cbb0  lw          $a3, -0x3450($gp)
    ctx->pc = 0x311bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953904)));
    // 0x311bf4: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x311bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x311bf8: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x311bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x311bfc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x311bfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c00: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x311c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311c04: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x311c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x311c08: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x311c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x311c0c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x311c10: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x311c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x311c14: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x311c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x311c18: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x311c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x311c1c: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x311c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x311c20: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x311c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x311c24: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x311c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x311c28: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x311c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x311c2c: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x311c2cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x311c30: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x311c30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x311c34: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x311c34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x311c38: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x311c38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x311c3c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x311c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x311c40: 0x106002c5  beqz        $v1, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x311C40u;
    {
        const bool branch_taken_0x311c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C40u;
        // 0x311c44: 0xafa60070  sw          $a2, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c40) {
            ctx->pc = 0x312758u;
            goto label_312758;
        }
    }
    ctx->pc = 0x311C48u;
    // 0x311c48: 0xc795c560  lwc1        $f21, -0x3AA0($gp)
    ctx->pc = 0x311c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x311c4c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x311c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x311c50: 0xc78095d4  lwc1        $f0, -0x6A2C($gp)
    ctx->pc = 0x311c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c58: 0xaf83cbb0  sw          $v1, -0x3450($gp)
    ctx->pc = 0x311c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953904), GPR_U32(ctx, 3));
    // 0x311c5c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x311c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311c60: 0x450102bd  bc1t        . + 4 + (0x2BD << 2)
    ctx->pc = 0x311C60u;
    {
        const bool branch_taken_0x311c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C60u;
        // 0x311c64: 0xc797c564  lwc1        $f23, -0x3A9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c60) {
            ctx->pc = 0x312758u;
            goto label_312758;
        }
    }
    ctx->pc = 0x311C68u;
    // 0x311c68: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x311c68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x311c6c: 0x2674f6d0  addiu       $s4, $s3, -0x930
    ctx->pc = 0x311c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x311c70: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x311c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x311c74: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x311c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x311c78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x311c7c: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x311c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311c80: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x311c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311c84: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x311c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c88: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x311C88u;
    SET_GPR_U32(ctx, 31, 0x311C90u);
    ctx->pc = 0x311C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C88u;
    // 0x311c8c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x311C88u, 0x311C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C90u;
label_311c90:
    // 0x311c90: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x311C90u;
    SET_GPR_U32(ctx, 31, 0x311C98u);
    ctx->pc = 0x311C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C90u;
    // 0x311c94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x311C90u, 0x311C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C98u;
label_311c98:
    // 0x311c98: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x311c98u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311c9c: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x311c9cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311ca0: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x311ca0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311ca4: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x311ca4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cac: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311CACu;
    SET_GPR_U32(ctx, 31, 0x311CB4u);
    ctx->pc = 0x311CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311CACu;
    // 0x311cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311CACu, 0x311CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CB4u;
label_311cb4:
    // 0x311cb4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x311cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311cb8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x311cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x311cbc: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x311cbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311cc0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x311CC0u;
    {
        const bool branch_taken_0x311cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311cc0) {
            ctx->pc = 0x311CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311CC0u;
            // 0x311cc4: 0xc6810000  lwc1        $f1, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311CD8u;
            goto label_311cd8;
        }
    }
    ctx->pc = 0x311CC8u;
    // 0x311cc8: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311CC8u;
    SET_GPR_U32(ctx, 31, 0x311CD0u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311CC8u, 0x311CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CD0u;
label_311cd0:
    // 0x311cd0: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x311CD0u;
    {
        const bool branch_taken_0x311cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CD0u;
        // 0x311cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cd0) {
            ctx->pc = 0x312758u;
            goto label_312758;
        }
    }
    ctx->pc = 0x311CD8u;
label_311cd8:
    // 0x311cd8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x311cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311cdc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x311cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311ce0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x311ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x311ce4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x311ce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311ce8: 0x0  nop
    ctx->pc = 0x311ce8u;
    // NOP
    // 0x311cec: 0x0  nop
    ctx->pc = 0x311cecu;
    // NOP
    // 0x311cf0: 0x460c0504  c1          0xC0504
    ctx->pc = 0x311cf0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x311cf4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x311cf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311cf8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x311CF8u;
    {
        const bool branch_taken_0x311cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311cf8) {
            ctx->pc = 0x311CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311CF8u;
            // 0x311cfc: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311D10u;
            goto label_311d10;
        }
    }
    ctx->pc = 0x311D00u;
    // 0x311d00: 0xc04754c  jal         func_11D530
    ctx->pc = 0x311D00u;
    SET_GPR_U32(ctx, 31, 0x311D08u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x311D00u, 0x311D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D08u;
label_311d08:
    // 0x311d08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x311d08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x311d0c: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x311d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_311d10:
    // 0x311d10: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x311d10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x311d14: 0x0  nop
    ctx->pc = 0x311d14u;
    // NOP
    // 0x311d18: 0x0  nop
    ctx->pc = 0x311d18u;
    // NOP
    // 0x311d1c: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x311d1cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x311d20: 0xc0473c8  jal         func_11CF20
    ctx->pc = 0x311D20u;
    SET_GPR_U32(ctx, 31, 0x311D28u);
    ctx->pc = 0x11CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF20u, 0x311D20u, 0x311D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D28u;
label_311d28:
    // 0x311d28: 0xc78195d8  lwc1        $f1, -0x6A28($gp)
    ctx->pc = 0x311d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d2c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x311d2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x311d30: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x311d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x311d34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x311d38: 0x0  nop
    ctx->pc = 0x311d38u;
    // NOP
    // 0x311d3c: 0x0  nop
    ctx->pc = 0x311d3cu;
    // NOP
    // 0x311d40: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x311d40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x311d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311d48: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x311D48u;
    {
        const bool branch_taken_0x311d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311d48) {
            ctx->pc = 0x311D98u;
            goto label_311d98;
        }
    }
    ctx->pc = 0x311D50u;
    // 0x311d50: 0xc04750a  jal         func_11D428
    ctx->pc = 0x311D50u;
    SET_GPR_U32(ctx, 31, 0x311D58u);
    ctx->pc = 0x311D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311D50u;
    // 0x311d54: 0x4615b301  sub.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D428u, 0x311D50u, 0x311D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D58u;
label_311d58:
    // 0x311d58: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x311d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311d5c: 0x2662f6d0  addiu       $v0, $s3, -0x930
    ctx->pc = 0x311d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x311d60: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x311d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311d64: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x311d64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x311d68: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x311d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311d6c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x311d6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x311d70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x311d74: 0x0  nop
    ctx->pc = 0x311d74u;
    // NOP
    // 0x311d78: 0x0  nop
    ctx->pc = 0x311d78u;
    // NOP
    // 0x311d7c: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x311d7cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x311d80: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x311d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x311d84: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x311d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x311d88: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x311d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x311d8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x311D8Cu;
    {
        const bool branch_taken_0x311d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D8Cu;
        // 0x311d90: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d8c) {
            ctx->pc = 0x311DC4u;
            goto label_311dc4;
        }
    }
    ctx->pc = 0x311D94u;
    // 0x311d94: 0x0  nop
    ctx->pc = 0x311d94u;
    // NOP
label_311d98:
    // 0x311d98: 0xc04750a  jal         func_11D428
    ctx->pc = 0x311D98u;
    SET_GPR_U32(ctx, 31, 0x311DA0u);
    ctx->pc = 0x311D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311D98u;
    // 0x311d9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D428u, 0x311D98u, 0x311DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DA0u;
label_311da0:
    // 0x311da0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x311da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311da4: 0x2662f6d0  addiu       $v0, $s3, -0x930
    ctx->pc = 0x311da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x311da8: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x311da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311dac: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x311dacu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x311db0: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x311db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x311db4: 0xe4580010  swc1        $f24, 0x10($v0)
    ctx->pc = 0x311db4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x311db8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x311db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311dbc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x311dbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x311dc0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x311dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_311dc4:
    // 0x311dc4: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x311dc4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x311dc8: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x311dc8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x311dcc: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x311dccu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x311dd0: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x311dd0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x311dd4: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x311dd4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x311dd8: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x311dd8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x311ddc: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x311ddcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x311de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311de4: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x311de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311de8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x311de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x311dec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x311decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311df0: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x311df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x311df4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x311df4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x311df8: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x311df8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x311dfc: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x311dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e00: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x311e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e04: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x311e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e08: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x311e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x311e0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311e10: 0x24420340  addiu       $v0, $v0, 0x340
    ctx->pc = 0x311e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x311e14: 0xc4412350  lwc1        $f1, 0x2350($v0)
    ctx->pc = 0x311e14u;
    { uint32_t bits = FAST_READ32(0x3F2690u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311e18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x311e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x311e1c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x311e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x311e20: 0xc420dcb0  lwc1        $f0, -0x2350($at)
    ctx->pc = 0x311e20u;
    { uint32_t bits = FAST_READ32(0x3FDFF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e24: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x311e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x311e28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x311e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x311e2c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x311e2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x311e30: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x311e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x311e34: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x311e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e38: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x311e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x311e3c: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x311e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e40: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x311e40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x311e44: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x311e44u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x311e48: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x311e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311e4c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x311e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311e50: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x311e50u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x311e54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x311e54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x311e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e5c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x311e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x311e60: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x311e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311e64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x311e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x311e68: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x311e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x311e6c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x311e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x311e70: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x311e70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x311e74: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x311e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e78: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x311e78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e7c: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x311e7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311e80: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x311e80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x311e84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311e88: 0x2451f6e8  addiu       $s1, $v0, -0x918
    ctx->pc = 0x311e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964968));
    // 0x311e8c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x311e90: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x311e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x311e94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x311E94u;
    {
        const bool branch_taken_0x311e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E94u;
        // 0x311e98: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e94) {
            ctx->pc = 0x311EC0u;
            goto label_311ec0;
        }
    }
    ctx->pc = 0x311E9Cu;
    // 0x311e9c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x311e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ea4: 0x0  nop
    ctx->pc = 0x311ea4u;
    // NOP
label_311ea8:
    // 0x311ea8: 0x2625fff4  addiu       $a1, $s1, -0xC
    ctx->pc = 0x311ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x311eac: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311EACu;
    SET_GPR_U32(ctx, 31, 0x311EB4u);
    ctx->pc = 0x311EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EACu;
    // 0x311eb0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311EACu, 0x311EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EB4u;
label_311eb4:
    // 0x311eb4: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x311eb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x311eb8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311EB8u;
    {
        const bool branch_taken_0x311eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311eb8) {
            ctx->pc = 0x311EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311EB8u;
            // 0x311ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311ea8;
        }
    }
    ctx->pc = 0x311EC0u;
label_311ec0:
    // 0x311ec0: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x311EC0u;
    SET_GPR_U32(ctx, 31, 0x311EC8u);
    ctx->pc = 0x311EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EC0u;
    // 0x311ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x311EC0u, 0x311EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EC8u;
label_311ec8:
    // 0x311ec8: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x311ec8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311ecc: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x311eccu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311ed0: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x311ed0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311ed4: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x311ed4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311ed8: 0x2671f6d0  addiu       $s1, $s3, -0x930
    ctx->pc = 0x311ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964944));
    // 0x311edc: 0x26230168  addiu       $v1, $s1, 0x168
    ctx->pc = 0x311edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x311ee0: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x311ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x311ee4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x311EE4u;
    {
        const bool branch_taken_0x311ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x311ee4) {
            ctx->pc = 0x311EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311EE4u;
            // 0x311ee8: 0x2610f838  addiu       $s0, $s0, -0x7C8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F14u;
            goto label_311f14;
        }
    }
    ctx->pc = 0x311EECu;
    // 0x311eec: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x311eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ef4: 0x0  nop
    ctx->pc = 0x311ef4u;
    // NOP
label_311ef8:
    // 0x311ef8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311efc: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x311EFCu;
    SET_GPR_U32(ctx, 31, 0x311F04u);
    ctx->pc = 0x311F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EFCu;
    // 0x311f00: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x311EFCu, 0x311F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F04u;
label_311f04:
    // 0x311f04: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x311f04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x311f08: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311F08u;
    {
        const bool branch_taken_0x311f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x311F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F08u;
        // 0x311f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f08) {
            ctx->pc = 0x311EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311ef8;
        }
    }
    ctx->pc = 0x311F10u;
    // 0x311f10: 0x2610f838  addiu       $s0, $s0, -0x7C8
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965304));
label_311f14:
    // 0x311f14: 0x6a03feab  ldl         $v1, -0x155($s0)
    ctx->pc = 0x311f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294966955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x311f18: 0x6e03fea4  ldr         $v1, -0x15C($s0)
    ctx->pc = 0x311f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294966948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x311f1c: 0x8e04feac  lw          $a0, -0x154($s0)
    ctx->pc = 0x311f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966956)));
    // 0x311f20: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x311f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311f24: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x311f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311f28: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x311f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x311f2c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x311F2Cu;
    SET_GPR_U32(ctx, 31, 0x311F34u);
    ctx->pc = 0x311F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F2Cu;
    // 0x311f30: 0x2611fe98  addiu       $s1, $s0, -0x168 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x311F2Cu, 0x311F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F34u;
label_311f34:
    // 0x311f34: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x311f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x311f38: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x311f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x311f3c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x311F3Cu;
    {
        const bool branch_taken_0x311f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x311f3c) {
            ctx->pc = 0x311FB4u;
            goto label_311fb4;
        }
    }
    ctx->pc = 0x311F44u;
    // 0x311f44: 0xc78395dc  lwc1        $f3, -0x6A24($gp)
    ctx->pc = 0x311f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311f48: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x311f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x311f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x311f50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x311f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f54: 0x0  nop
    ctx->pc = 0x311f54u;
    // NOP
label_311f58:
    // 0x311f58: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x311f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x311F5Cu;
    {
        const bool branch_taken_0x311f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f5c) {
            ctx->pc = 0x311F70u;
            goto label_311f70;
        }
    }
    ctx->pc = 0x311F64u;
    // 0x311f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x311F64u;
    {
        const bool branch_taken_0x311f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F64u;
        // 0x311f68: 0xe6230000  swc1        $f3, 0x0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f64) {
            ctx->pc = 0x311F7Cu;
            goto label_311f7c;
        }
    }
    ctx->pc = 0x311F6Cu;
    // 0x311f6c: 0x0  nop
    ctx->pc = 0x311f6cu;
    // NOP
label_311f70:
    // 0x311f70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x311f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x311F74u;
    {
        const bool branch_taken_0x311f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f74) {
            ctx->pc = 0x311F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F74u;
            // 0x311f78: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F7Cu;
            goto label_311f7c;
        }
    }
    ctx->pc = 0x311F7Cu;
label_311f7c:
    // 0x311f7c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x311f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f80: 0xc78195e0  lwc1        $f1, -0x6A20($gp)
    ctx->pc = 0x311f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311f84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311F88u;
    {
        const bool branch_taken_0x311f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f88) {
            ctx->pc = 0x311F98u;
            goto label_311f98;
        }
    }
    ctx->pc = 0x311F90u;
    // 0x311f90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x311F90u;
    {
        const bool branch_taken_0x311f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F90u;
        // 0x311f94: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f90) {
            ctx->pc = 0x311FA4u;
            goto label_311fa4;
        }
    }
    ctx->pc = 0x311F98u;
label_311f98:
    // 0x311f98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x311f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x311F9Cu;
    {
        const bool branch_taken_0x311f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f9c) {
            ctx->pc = 0x311FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F9Cu;
            // 0x311fa0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311FA4u;
            goto label_311fa4;
        }
    }
    ctx->pc = 0x311FA4u;
label_311fa4:
    // 0x311fa4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x311fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x311fa8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x311fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x311fac: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x311FACu;
    {
        const bool branch_taken_0x311fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311fac) {
            ctx->pc = 0x311FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311FACu;
            // 0x311fb0: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311f58;
        }
    }
    ctx->pc = 0x311FB4u;
label_311fb4:
    // 0x311fb4: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x311fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311fbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x311fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x311fc0: 0xc780c56c  lwc1        $f0, -0x3A94($gp)
    ctx->pc = 0x311fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311fc4: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x311fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x311fc8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x311FC8u;
    {
        const bool branch_taken_0x311fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FC8u;
        // 0x311fcc: 0x46030101  sub.s       $f4, $f0, $f3 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fc8) {
            ctx->pc = 0x312034u;
            goto label_312034;
        }
    }
    ctx->pc = 0x311FD0u;
    // 0x311fd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x311fd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x311fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311fd8: 0x460cb802  mul.s       $f0, $f23, $f12
    ctx->pc = 0x311fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
    // 0x311fdc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x311fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311fe0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x311FE0u;
    {
        const bool branch_taken_0x311fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311fe0) {
            ctx->pc = 0x312008u;
            goto label_312008;
        }
    }
    ctx->pc = 0x311FE8u;
    // 0x311fe8: 0x0  nop
    ctx->pc = 0x311fe8u;
    // NOP
    // 0x311fec: 0x0  nop
    ctx->pc = 0x311fecu;
    // NOP
    // 0x311ff0: 0x4617b003  div.s       $f0, $f22, $f23
    ctx->pc = 0x311ff0u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[23];
    // 0x311ff4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x311ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x311ff8: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x311ff8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x311ffc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x311FFCu;
    {
        const bool branch_taken_0x311ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FFCu;
        // 0x312000: 0x46021042  mul.s       $f1, $f2, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ffc) {
            ctx->pc = 0x312028u;
            goto label_312028;
        }
    }
    ctx->pc = 0x312004u;
    // 0x312004: 0x0  nop
    ctx->pc = 0x312004u;
    // NOP
label_312008:
    // 0x312008: 0x0  nop
    ctx->pc = 0x312008u;
    // NOP
    // 0x31200c: 0x0  nop
    ctx->pc = 0x31200cu;
    // NOP
    // 0x312010: 0x4617b003  div.s       $f0, $f22, $f23
    ctx->pc = 0x312010u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[23];
    // 0x312014: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x312014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x312018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31201c: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x31201cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x312020: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x312020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x312024: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x312024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_312028:
    // 0x312028: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x312028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x31202c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x31202cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x312030: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x312030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_312034:
    // 0x312034: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x312034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x312038: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31203c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31203cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312040: 0xc460f850  lwc1        $f0, -0x7B0($v1)
    ctx->pc = 0x312040u;
    { uint32_t bits = FAST_READ32(0x3EF850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312044: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312048: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31204c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31204cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x312050: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x312050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x312054: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x312054u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312058: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x312058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31205c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31205Cu;
    {
        const bool branch_taken_0x31205c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31205c) {
            ctx->pc = 0x312060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31205Cu;
            // 0x312060: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312064u;
            goto label_312064;
        }
    }
    ctx->pc = 0x312064u;
label_312064:
    // 0x312064: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31206c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31206cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312070: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x312070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312074: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x312074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312078: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x312078u;
    {
        const bool branch_taken_0x312078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312078u;
        // 0x31207c: 0x2462f850  addiu       $v0, $v1, -0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312078) {
            ctx->pc = 0x312098u;
            goto label_312098;
        }
    }
    ctx->pc = 0x312080u;
    // 0x312080: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x312080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x312084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31208c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31208cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312090: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x312090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x312094: 0x2462f850  addiu       $v0, $v1, -0x7B0
    ctx->pc = 0x312094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
label_312098:
    // 0x312098: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31209c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3120a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3120a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3120a4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3120a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3120a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3120a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3120ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3120acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3120b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3120b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3120b4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3120b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3120b8: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3120b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3120bc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3120bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3120c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3120C0u;
    {
        const bool branch_taken_0x3120c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120C0u;
        // 0x3120c4: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120c0) {
            ctx->pc = 0x3120CCu;
            goto label_3120cc;
        }
    }
    ctx->pc = 0x3120C8u;
    // 0x3120c8: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x3120c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_3120cc:
    // 0x3120cc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x3120ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x3120d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3120d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3120d4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3120d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3120d8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3120d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3120dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3120dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3120e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3120E0u;
    {
        const bool branch_taken_0x3120e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3120E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120E0u;
        // 0x3120e4: 0x2462f850  addiu       $v0, $v1, -0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120e0) {
            ctx->pc = 0x312100u;
            goto label_312100;
        }
    }
    ctx->pc = 0x3120E8u;
    // 0x3120e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3120e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3120ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3120f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3120f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3120f4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3120f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3120f8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3120f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3120fc: 0x2462f850  addiu       $v0, $v1, -0x7B0
    ctx->pc = 0x3120fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
label_312100:
    // 0x312100: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312104: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312108: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31210c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x31210cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x312110: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312118: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x312118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31211c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x31211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x312120: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x312120u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312124: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x312124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312128: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312128u;
    {
        const bool branch_taken_0x312128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312128u;
        // 0x31212c: 0xafa60090  sw          $a2, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312128) {
            ctx->pc = 0x312134u;
            goto label_312134;
        }
    }
    ctx->pc = 0x312130u;
    // 0x312130: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x312130u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_312134:
    // 0x312134: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31213c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31213cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312140: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312144: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x312144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312148: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x312148u;
    {
        const bool branch_taken_0x312148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312148u;
        // 0x31214c: 0x2462f850  addiu       $v0, $v1, -0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312148) {
            ctx->pc = 0x312168u;
            goto label_312168;
        }
    }
    ctx->pc = 0x312150u;
    // 0x312150: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x312150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x312154: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312158: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31215c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31215cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312160: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x312160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312164: 0x2462f850  addiu       $v0, $v1, -0x7B0
    ctx->pc = 0x312164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
label_312168:
    // 0x312168: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x312168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x31216c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31216cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312170: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x312170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312174: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x312174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x312178: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31217c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31217cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x312180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x312184: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312188: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31218c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x31218cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x312190: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x312190u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x312194: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x312194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312198: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312198u;
    {
        const bool branch_taken_0x312198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312198u;
        // 0x31219c: 0xafa400a0  sw          $a0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312198) {
            ctx->pc = 0x3121A4u;
            goto label_3121a4;
        }
    }
    ctx->pc = 0x3121A0u;
    // 0x3121a0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x3121a0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_3121a4:
    // 0x3121a4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x3121a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x3121a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3121a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3121ac: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3121acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3121b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3121b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3121b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3121b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3121b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3121B8u;
    {
        const bool branch_taken_0x3121b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3121BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121B8u;
        // 0x3121bc: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121b8) {
            ctx->pc = 0x3121D4u;
            goto label_3121d4;
        }
    }
    ctx->pc = 0x3121C0u;
    // 0x3121c0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3121c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3121c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3121c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3121c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3121c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3121cc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3121ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3121d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3121d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3121d4:
    // 0x3121d4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3121d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3121d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3121d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3121dc: 0xc4c0f860  lwc1        $f0, -0x7A0($a2)
    ctx->pc = 0x3121dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3121e0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3121e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3121e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3121e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3121e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3121e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3121ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3121ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3121f0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3121f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3121f4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3121f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3121f8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3121f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3121fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3121FCu;
    {
        const bool branch_taken_0x3121fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121FCu;
        // 0x312200: 0xafa500b0  sw          $a1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121fc) {
            ctx->pc = 0x312208u;
            goto label_312208;
        }
    }
    ctx->pc = 0x312204u;
    // 0x312204: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x312204u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_312208:
    // 0x312208: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31220c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31220cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312210: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312214: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312218: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x312218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31221c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x31221Cu;
    {
        const bool branch_taken_0x31221c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31221Cu;
        // 0x312220: 0x24c2f860  addiu       $v0, $a2, -0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31221c) {
            ctx->pc = 0x31223Cu;
            goto label_31223c;
        }
    }
    ctx->pc = 0x312224u;
    // 0x312224: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x312224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x312228: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31222c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31222cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312230: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312234: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x312234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312238: 0x24c2f860  addiu       $v0, $a2, -0x7A0
    ctx->pc = 0x312238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
label_31223c:
    // 0x31223c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x31223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312244: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312248: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x312248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31224c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312254: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x312254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x312258: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x312258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31225c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x31225cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312260: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x312260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312264: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312264u;
    {
        const bool branch_taken_0x312264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312264u;
        // 0x312268: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312264) {
            ctx->pc = 0x312270u;
            goto label_312270;
        }
    }
    ctx->pc = 0x31226Cu;
    // 0x31226c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x31226cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_312270:
    // 0x312270: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312278: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31227c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31227cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312280: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x312280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312284: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x312284u;
    {
        const bool branch_taken_0x312284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312284u;
        // 0x312288: 0x24c2f860  addiu       $v0, $a2, -0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312284) {
            ctx->pc = 0x3122A4u;
            goto label_3122a4;
        }
    }
    ctx->pc = 0x31228Cu;
    // 0x31228c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31228cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x312290: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312294: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312298: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31229c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31229cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3122a0: 0x24c2f860  addiu       $v0, $a2, -0x7A0
    ctx->pc = 0x3122a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
label_3122a4:
    // 0x3122a4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3122a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3122a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3122a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3122ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3122acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3122b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3122b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3122b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3122b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3122b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3122b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3122bc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3122bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3122c0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3122c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3122c4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3122c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3122c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3122C8u;
    {
        const bool branch_taken_0x3122c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3122CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122C8u;
        // 0x3122cc: 0x307e00ff  andi        $fp, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122c8) {
            ctx->pc = 0x3122D4u;
            goto label_3122d4;
        }
    }
    ctx->pc = 0x3122D0u;
    // 0x3122d0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x3122d0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_3122d4:
    // 0x3122d4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x3122d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x3122d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3122d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3122dc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3122dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3122e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3122e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3122e4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3122e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3122e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3122E8u;
    {
        const bool branch_taken_0x3122e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3122ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122E8u;
        // 0x3122ec: 0x24c2f860  addiu       $v0, $a2, -0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122e8) {
            ctx->pc = 0x312308u;
            goto label_312308;
        }
    }
    ctx->pc = 0x3122F0u;
    // 0x3122f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3122f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3122f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3122f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3122f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3122f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3122fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3122fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x312304: 0x24c2f860  addiu       $v0, $a2, -0x7A0
    ctx->pc = 0x312304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965344));
label_312308:
    // 0x312308: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x312308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x31230c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31230cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312310: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x312310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312314: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312318: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31231c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31231cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x312320: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312324: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312328: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x312328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31232c: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x31232cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x312330: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x312330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312334: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312334u;
    {
        const bool branch_taken_0x312334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312334u;
        // 0x312338: 0x307700ff  andi        $s7, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312334) {
            ctx->pc = 0x312340u;
            goto label_312340;
        }
    }
    ctx->pc = 0x31233Cu;
    // 0x31233c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x31233cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_312340:
    // 0x312340: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312348: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31234c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31234cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312350: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x312350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312354: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312354u;
    {
        const bool branch_taken_0x312354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312354u;
        // 0x312358: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312354) {
            ctx->pc = 0x312370u;
            goto label_312370;
        }
    }
    ctx->pc = 0x31235Cu;
    // 0x31235c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31235cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x312360: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312364: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312368: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31236c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_312370:
    // 0x312370: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x312370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312374: 0xc0cc106  jal         func_330418
    ctx->pc = 0x312374u;
    SET_GPR_U32(ctx, 31, 0x31237Cu);
    ctx->pc = 0x312378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312374u;
    // 0x312378: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x312374u, 0x31237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31237Cu;
label_31237c:
    // 0x31237c: 0x8f83cbac  lw          $v1, -0x3454($gp)
    ctx->pc = 0x31237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953900)));
    // 0x312380: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x312380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x312384: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x312384u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x312388: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x312388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31238c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312390: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x312390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x312394: 0x23027  nor         $a2, $zero, $v0
    ctx->pc = 0x312394u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312398: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x312398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31239c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x31239cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3123a0: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3123a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3123a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3123a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3123a8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3123a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3123ac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3123acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3123b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3123b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3123b4: 0x34c6014d  ori         $a2, $a2, 0x14D
    ctx->pc = 0x3123b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)333);
    // 0x3123b8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3123b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3123bc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3123bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3123c0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3123c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3123c4: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x3123c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x3123c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3123c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3123cc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3123ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3123d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3123d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3123d4: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x3123d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x3123d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3123d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3123dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3123dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3123e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3123e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3123e4: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x3123e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x3123e8: 0x3c13001b  lui         $s3, 0x1B
    ctx->pc = 0x3123e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)27 << 16));
    // 0x3123ec: 0x26736610  addiu       $s3, $s3, 0x6610
    ctx->pc = 0x3123ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 26128));
    // 0x3123f0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3123f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3123f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3123f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3123f8: 0x2699825  or          $s3, $s3, $t1
    ctx->pc = 0x3123f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 9));
    // 0x3123fc: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x3123fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x312400: 0x26750030  addiu       $s5, $s3, 0x30
    ctx->pc = 0x312400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x312404: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x312404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x312408: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x312408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31240c: 0xaf85cbac  sw          $a1, -0x3454($gp)
    ctx->pc = 0x31240cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953900), GPR_U32(ctx, 5));
    // 0x312410: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x312410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x312414: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x312414u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x312418: 0xaea4000c  sw          $a0, 0xC($s5)
    ctx->pc = 0x312418u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 4));
    // 0x31241c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x31241cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x312420: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x312420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x312424: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x312424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x312428: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x312428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x31242c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x31242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x312430: 0x26700050  addiu       $s0, $s3, 0x50
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x312434: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x312434u;
    SET_GPR_U32(ctx, 31, 0x31243Cu);
    ctx->pc = 0x312438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312434u;
    // 0x312438: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x312434u, 0x31243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31243Cu;
label_31243c:
    // 0x31243c: 0x8f83c544  lw          $v1, -0x3ABC($gp)
    ctx->pc = 0x31243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x312440: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312444: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x312444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x312448: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x312448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x31244c: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x31244cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x312450: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x312450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x312454: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x312454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x312458: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x312458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x31245c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312460: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x312460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x312464: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x312464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x312468: 0x26700060  addiu       $s0, $s3, 0x60
    ctx->pc = 0x312468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x31246c: 0xc0c4696  jal         func_311A58
    ctx->pc = 0x31246Cu;
    SET_GPR_U32(ctx, 31, 0x312474u);
    ctx->pc = 0x312470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31246Cu;
    // 0x312470: 0xfe040008  sd          $a0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A58u, 0x31246Cu, 0x312474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312474u;
label_312474:
    // 0x312474: 0x9f83c540  lwu         $v1, -0x3AC0($gp)
    ctx->pc = 0x312474u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294952256)));
    // 0x312478: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31247c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x31247cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x312480: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x312480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x312484: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x312484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x312488: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x312488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31248c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31248cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312490: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x312490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x312494: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x312494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312498: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x312498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31249c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x31249cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3124a0: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x3124a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3124a4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x3124a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3124a8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3124a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3124ac: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x3124acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x3124b0: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x3124b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x3124b4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3124b8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3124b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3124bc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3124bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3124c0: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x3124c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x3124c4: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x3124c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x3124c8: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x3124c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x3124cc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x3124ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3124d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3124d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3124d4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3124d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3124d8: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x3124d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x3124dc: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x3124dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x3124e0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x3124e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x3124e4: 0x267000a0  addiu       $s0, $s3, 0xA0
    ctx->pc = 0x3124e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x3124e8: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x3124e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x3124ec: 0x8f82c568  lw          $v0, -0x3A98($gp)
    ctx->pc = 0x3124ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952296)));
    // 0x3124f0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3124F0u;
    {
        const bool branch_taken_0x3124f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3124f0) {
            ctx->pc = 0x3124F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3124F0u;
            // 0x3124f4: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124FCu;
            goto label_3124fc;
        }
    }
    ctx->pc = 0x3124F8u;
    // 0x3124f8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3124f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_3124fc:
    // 0x3124fc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3124fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x312500: 0x267000b0  addiu       $s0, $s3, 0xB0
    ctx->pc = 0x312500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x312504: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x312504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x312508: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x312508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31250c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x31250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x312510: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x312510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x312514: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x312514u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x312518: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x312518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31251c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x31251cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x312520: 0xc0cbf82  jal         func_32FE08
    ctx->pc = 0x312520u;
    SET_GPR_U32(ctx, 31, 0x312528u);
    ctx->pc = 0x312524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312520u;
    // 0x312524: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE08u, 0x312520u, 0x312528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312528u;
label_312528:
    // 0x312528: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x312528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31252c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x31252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x312530: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x312530u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x312534: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x312534u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x312538: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x312538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31253c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x31253cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x312540: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x312540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x312544: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x312544u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x312548: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x312548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31254c: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x31254cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x312550: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x312550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x312554: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312558: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x312558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31255c: 0x340a801e  ori         $t2, $zero, 0x801E
    ctx->pc = 0x31255cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32798);
    // 0x312560: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x312560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x312564: 0x3c0b1400  lui         $t3, 0x1400
    ctx->pc = 0x312564u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5120 << 16));
    // 0x312568: 0x32e38  dsll        $a1, $v1, 24
    ctx->pc = 0x312568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 24);
    // 0x31256c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x312570: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x312570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x312574: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x312574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x312578: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x312578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x31257c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x31257cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x312580: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x312580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x312584: 0x83238  dsll        $a2, $t0, 8
    ctx->pc = 0x312584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 8);
    // 0x312588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31258c: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x31258cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x312590: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x312590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x312594: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312598: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x312598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31259c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x31259cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3125a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3125a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3125a4: 0x1e1a38  dsll        $v1, $fp, 8
    ctx->pc = 0x3125a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << 8);
    // 0x3125a8: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x3125a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x3125ac: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3125acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3125b0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3125b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3125b4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3125b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3125b8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3125b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3125bc: 0x112638  dsll        $a0, $s1, 24
    ctx->pc = 0x3125bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << 24);
    // 0x3125c0: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x3125c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3125c4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3125c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3125c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3125c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3125cc: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x3125ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x3125d0: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x3125d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x3125d4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3125d8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3125d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3125dc: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x3125dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x3125e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3125e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3125e4: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x3125e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x3125e8: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x3125e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x3125ec: 0x171438  dsll        $v0, $s7, 16
    ctx->pc = 0x3125ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << 16);
    // 0x3125f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3125f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3125f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3125f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3125f8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3125f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3125fc: 0x2471f6dc  addiu       $s1, $v1, -0x924
    ctx->pc = 0x3125fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964956));
    // 0x312600: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x312600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312604: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x312604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312608: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x312608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x31260c: 0x6323a  dsrl        $a2, $a2, 8
    ctx->pc = 0x31260cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 8);
    // 0x312610: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x312610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x312614: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x312614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x312618: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x312618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31261c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x31261cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312620: 0xe723c  dsll32      $t6, $t6, 8
    ctx->pc = 0x312620u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 8));
    // 0x312624: 0xe723a  dsrl        $t6, $t6, 8
    ctx->pc = 0x312624u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 8);
    // 0x312628: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x312628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31262c: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x31262cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x312630: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x312630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312634: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x312638: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x312638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31263c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31263cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x312640: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x312640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312644: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312648: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x312648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x31264c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x312650: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x312650u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x312654: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x312654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x312658: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x312658u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x31265c: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x31265cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x312660: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x312664: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x312664u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x312668: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x312668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x31266c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31266cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x312670: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x312670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x312674: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x312678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31267c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x31267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x312680: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x312680u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x312684: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x312684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x312688: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x312688u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x31268c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x31268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x312690: 0xae0b0004  sw          $t3, 0x4($s0)
    ctx->pc = 0x312690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 11));
    // 0x312694: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x312694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_312698:
    // 0x312698: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x312698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31269c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x31269cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3126a0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3126a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3126a4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3126a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3126a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3126a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3126ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3126acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3126b0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3126b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x3126b4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x3126b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3126b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3126b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3126bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3126bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3126c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3126c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3126c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3126c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3126c8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x3126c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x3126cc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3126ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3126d0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3126d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3126d4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3126d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3126d8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3126d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3126dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3126dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3126e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3126e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3126e4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3126e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x3126e8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x3126e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3126ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3126ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3126f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3126f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3126f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3126f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3126f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3126f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3126fc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x3126fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x312700: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x312700u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x312704: 0x5a1ffe4  bgez        $t5, . + 4 + (-0x1C << 2)
    ctx->pc = 0x312704u;
    {
        const bool branch_taken_0x312704 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x312708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312704u;
        // 0x312708: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312704) {
            ctx->pc = 0x312698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312698;
        }
    }
    ctx->pc = 0x31270Cu;
    // 0x31270c: 0x26700250  addiu       $s0, $s3, 0x250
    ctx->pc = 0x31270cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
    // 0x312710: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x312710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x312714: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x312714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x312718: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x312718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31271c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31271cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x312720: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x312720u;
    SET_GPR_U32(ctx, 31, 0x312728u);
    ctx->pc = 0x312724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312720u;
    // 0x312724: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x312720u, 0x312728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312728u;
label_312728:
    // 0x312728: 0x26640240  addiu       $a0, $s3, 0x240
    ctx->pc = 0x312728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x31272c: 0xc0cbf98  jal         func_32FE60
    ctx->pc = 0x31272Cu;
    SET_GPR_U32(ctx, 31, 0x312734u);
    ctx->pc = 0x312730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31272Cu;
    // 0x312730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE60u, 0x31272Cu, 0x312734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312734u;
label_312734:
    // 0x312734: 0xc043d88  jal         func_10F620
    ctx->pc = 0x312734u;
    SET_GPR_U32(ctx, 31, 0x31273Cu);
    ctx->pc = 0x312738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312734u;
    // 0x312738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x312734u, 0x31273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31273Cu;
label_31273c:
    // 0x31273c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312744: 0xc0cc0c2  jal         func_330308
    ctx->pc = 0x312744u;
    SET_GPR_U32(ctx, 31, 0x31274Cu);
    ctx->pc = 0x312748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312744u;
    // 0x312748: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330308u, 0x312744u, 0x31274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31274Cu;
label_31274c:
    // 0x31274c: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x31274Cu;
    SET_GPR_U32(ctx, 31, 0x312754u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x31274Cu, 0x312754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312754u;
label_312754:
    // 0x312754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312758:
    // 0x312758: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x312758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31275c: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x31275cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x312760: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x312760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x312764: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x312764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x312768: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x312768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31276c: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x31276cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x312770: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x312770u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x312774: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x312774u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x312778: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x312778u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31277c: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x31277cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x312780: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x312780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x312784: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x312784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x312788: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x312788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31278c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x31278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x312790: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x312790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312794: 0x3e00008  jr          $ra
    ctx->pc = 0x312794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312794u;
        // 0x312798: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31279Cu;
    // 0x31279c: 0x0  nop
    ctx->pc = 0x31279cu;
    // NOP
    ctx->pc = 0x3127a0u;
}
