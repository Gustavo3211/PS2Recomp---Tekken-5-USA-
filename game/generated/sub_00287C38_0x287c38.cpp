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

// Function: sub_00287C38
// Address: 0x287c38 - 0x287fa0
void sub_00287C38_0x287c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C38_0x287c38");
#endif

    switch (ctx->pc) {
        case 0x287c98u: goto label_287c98;
        case 0x287d54u: goto label_287d54;
        case 0x287d58u: goto label_287d58;
        case 0x287de8u: goto label_287de8;
        case 0x287e5cu: goto label_287e5c;
        case 0x287ebcu: goto label_287ebc;
        case 0x287ed0u: goto label_287ed0;
        case 0x287ef0u: goto label_287ef0;
        case 0x287efcu: goto label_287efc;
        case 0x287f0cu: goto label_287f0c;
        case 0x287f18u: goto label_287f18;
        case 0x287f2cu: goto label_287f2c;
        case 0x287f3cu: goto label_287f3c;
        case 0x287f4cu: goto label_287f4c;
        case 0x287f5cu: goto label_287f5c;
        default: break;
    }

    ctx->pc = 0x287c38u;

    // 0x287c38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x287c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x287c3c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x287c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x287c40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x287c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c44: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x287c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x287c48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x287c48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x287c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x287c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x287c54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x287c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x287c58: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x287c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x287c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c60: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x287c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x287c64: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x287c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x287c68: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x287c68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c6c: 0xe7b80078  swc1        $f24, 0x78($sp)
    ctx->pc = 0x287c6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x287c70: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x287c70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x287c74: 0xe7b70070  swc1        $f23, 0x70($sp)
    ctx->pc = 0x287c74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x287c78: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x287c78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x287c7c: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x287c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x287c80: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x287c80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x287c84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287c88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x287c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x287c8c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x287c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x287c90: 0xc0b66e0  jal         func_2D9B80
    ctx->pc = 0x287C90u;
    SET_GPR_U32(ctx, 31, 0x287C98u);
    ctx->pc = 0x287C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C90u;
    // 0x287c94: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B80u, 0x287C90u, 0x287C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C98u;
label_287c98:
    // 0x287c98: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x287c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x287c9c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x287c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x287ca0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287ca4: 0x2463ae20  addiu       $v1, $v1, -0x51E0
    ctx->pc = 0x287ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946336));
    // 0x287ca8: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x287cac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x287cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287cb0: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x287cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x287cb4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x287cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x287cb8: 0x6824aba7  ldl         $a0, -0x5459($at)
    ctx->pc = 0x287cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x287cbc: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x287cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x287cc0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x287cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x287cc4: 0x6c24aba0  ldr         $a0, -0x5460($at)
    ctx->pc = 0x287cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x287cc8: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x287cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x287ccc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x287cccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x287cd0: 0x6825abaf  ldl         $a1, -0x5451($at)
    ctx->pc = 0x287cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x287cd4: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x287cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x287cd8: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x287cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x287cdc: 0x6c25aba8  ldr         $a1, -0x5458($at)
    ctx->pc = 0x287cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x287ce0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x287ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287ce4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x287ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287ce8: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x287ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287cec: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x287cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287cf0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x287cf4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x287cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x287cf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287cfc: 0x24540002  addiu       $s4, $v0, 0x2
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x287d00: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x287d00u;
    { uint32_t bits = FAST_READ32(0x3BAE2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287d04: 0x26820002  addiu       $v0, $s4, 0x2
    ctx->pc = 0x287d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x287d08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x287d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d0c: 0x51a00b  movn        $s4, $v0, $s1
    ctx->pc = 0x287d0cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x287d10: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x287d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x287d14: 0xc7988fd4  lwc1        $f24, -0x702C($gp)
    ctx->pc = 0x287d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x287d18: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x287d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x287d1c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x287d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x287d24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x287d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x287d28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287d30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x287d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x287d34: 0xe461003c  swc1        $f1, 0x3C($v1)
    ctx->pc = 0x287d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x287d38: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x287d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287d40: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x287d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287d44: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287d48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x287d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x287d4c: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x287D4Cu;
    SET_GPR_U32(ctx, 31, 0x287D54u);
    ctx->pc = 0x287D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D4Cu;
    // 0x287d50: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x287D4Cu, 0x287D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D54u;
label_287d54:
    // 0x287d54: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x287d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287d58:
    // 0x287d58: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x287d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x287d5c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x287d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287d60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x287D60u;
    {
        const bool branch_taken_0x287d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D60u;
        // 0x287d64: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d60) {
            ctx->pc = 0x287D6Cu;
            goto label_287d6c;
        }
    }
    ctx->pc = 0x287D68u;
    // 0x287d68: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x287d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_287d6c:
    // 0x287d6c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x287d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287d70: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x287d70u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287d74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x287d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x287d78: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x287d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d80: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x287d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x287d84: 0xc60e0000  lwc1        $f14, 0x0($s0)
    ctx->pc = 0x287d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x287d88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x287d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x287d8c: 0xc60f0004  lwc1        $f15, 0x4($s0)
    ctx->pc = 0x287d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x287d90: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x287d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x287d94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x287d98: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x287d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x287d9c: 0x46017301  sub.s       $f12, $f14, $f1
    ctx->pc = 0x287d9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x287da0: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x287da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x287da4: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x287da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x287da8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x287da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x287dac: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x287dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x287db0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x287db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287db4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x287db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287db8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x287db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287dbc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x287dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287dc0: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x287dc0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x287dc4: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x287dc4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x287dc8: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x287dc8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x287dcc: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x287dccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x287dd0: 0x46026b41  sub.s       $f13, $f13, $f2
    ctx->pc = 0x287dd0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x287dd4: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x287dd4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x287dd8: 0x46027bc0  add.s       $f15, $f15, $f2
    ctx->pc = 0x287dd8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
    // 0x287ddc: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x287ddcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x287de0: 0xc0a1e1c  jal         func_287870
    ctx->pc = 0x287DE0u;
    SET_GPR_U32(ctx, 31, 0x287DE8u);
    ctx->pc = 0x287DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DE0u;
    // 0x287de4: 0x46146b41  sub.s       $f13, $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x287870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287870u, 0x287DE0u, 0x287DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DE8u;
label_287de8:
    // 0x287de8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x287de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x287dec: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x287DECu;
    {
        const bool branch_taken_0x287dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287dec) {
            ctx->pc = 0x287DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287DECu;
            // 0x287df0: 0xc600003c  lwc1        $f0, 0x3C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287d58;
        }
    }
    ctx->pc = 0x287DF4u;
    // 0x287df4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x287df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x287df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287dfc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x287dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x287e00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287e04: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x287e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x287e08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x287e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287e0c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x287e10: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x287e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x287e14: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x287E14u;
    {
        const bool branch_taken_0x287e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E14u;
        // 0x287e18: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e14) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287E1Cu;
    // 0x287e1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287e20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x287e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x287e24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x287e28: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x287e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x287e2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x287e2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x287e30: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x287e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_287e34:
    // 0x287e34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x287e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x287e38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x287e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287e3c: 0x2408006a  addiu       $t0, $zero, 0x6A
    ctx->pc = 0x287e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x287e40: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x287e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287e48: 0x24849808  addiu       $a0, $a0, -0x67F8
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940680));
    // 0x287e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e50: 0x139e00  sll         $s3, $s3, 24
    ctx->pc = 0x287e50u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x287e54: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287E54u;
    SET_GPR_U32(ctx, 31, 0x287E5Cu);
    ctx->pc = 0x287E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E54u;
    // 0x287e58: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287E54u, 0x287E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E5Cu;
label_287e5c:
    // 0x287e5c: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x287e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287e64: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x287e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x287e68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287e6c: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x287e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x287e70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x287e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287e74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x287e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x287e78: 0x2442adf0  addiu       $v0, $v0, -0x5210
    ctx->pc = 0x287e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x287e7c: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x287e80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x287e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287e84: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x287e84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x287e88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x287e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287e8c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x287e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x287e90: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x287e94: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x287e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x287e98: 0x26523bc0  addiu       $s2, $s2, 0x3BC0
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15296));
    // 0x287e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x287ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x287ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x287ea8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x287ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x287eac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x287eb0: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x287eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x287eb4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287EB4u;
    SET_GPR_U32(ctx, 31, 0x287EBCu);
    ctx->pc = 0x287EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EB4u;
    // 0x287eb8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287EB4u, 0x287EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EBCu;
label_287ebc:
    // 0x287ebc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287ec0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x287ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ec4: 0x24843bd8  addiu       $a0, $a0, 0x3BD8
    ctx->pc = 0x287ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15320));
    // 0x287ec8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287EC8u;
    SET_GPR_U32(ctx, 31, 0x287ED0u);
    ctx->pc = 0x287ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EC8u;
    // 0x287ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287EC8u, 0x287ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287ED0u;
label_287ed0:
    // 0x287ed0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287ed4: 0x8ea50064  lw          $a1, 0x64($s5)
    ctx->pc = 0x287ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x287ed8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x287ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287edc: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x287edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x287ee0: 0x34210029  ori         $at, $at, 0x29
    ctx->pc = 0x287ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41);
    // 0x287ee4: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x287ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x287ee8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287EE8u;
    SET_GPR_U32(ctx, 31, 0x287EF0u);
    ctx->pc = 0x287EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EE8u;
    // 0x287eec: 0x24843be0  addiu       $a0, $a0, 0x3BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287EE8u, 0x287EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EF0u;
label_287ef0:
    // 0x287ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ef4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287EF4u;
    SET_GPR_U32(ctx, 31, 0x287EFCu);
    ctx->pc = 0x287EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EF4u;
    // 0x287ef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287EF4u, 0x287EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EFCu;
label_287efc:
    // 0x287efc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287f00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x287f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f04: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287F04u;
    SET_GPR_U32(ctx, 31, 0x287F0Cu);
    ctx->pc = 0x287F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F04u;
    // 0x287f08: 0x24843be8  addiu       $a0, $a0, 0x3BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287F04u, 0x287F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F0Cu;
label_287f0c:
    // 0x287f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f10: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287F10u;
    SET_GPR_U32(ctx, 31, 0x287F18u);
    ctx->pc = 0x287F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F10u;
    // 0x287f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287F10u, 0x287F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F18u;
label_287f18:
    // 0x287f18: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287f1c: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x287f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
    // 0x287f20: 0x24843ba0  addiu       $a0, $a0, 0x3BA0
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
    // 0x287f24: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287F24u;
    SET_GPR_U32(ctx, 31, 0x287F2Cu);
    ctx->pc = 0x287F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F24u;
    // 0x287f28: 0x34a50031  ori         $a1, $a1, 0x31 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287F24u, 0x287F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F2Cu;
label_287f2c:
    // 0x287f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f30: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x287f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x287f34: 0xc0a1e66  jal         func_287998
    ctx->pc = 0x287F34u;
    SET_GPR_U32(ctx, 31, 0x287F3Cu);
    ctx->pc = 0x287F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F34u;
    // 0x287f38: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287998u, 0x287F34u, 0x287F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F3Cu;
label_287f3c:
    // 0x287f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f40: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x287f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x287f44: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287F44u;
    SET_GPR_U32(ctx, 31, 0x287F4Cu);
    ctx->pc = 0x287F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F44u;
    // 0x287f48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287F44u, 0x287F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F4Cu;
label_287f4c:
    // 0x287f4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287f50: 0x24843bf0  addiu       $a0, $a0, 0x3BF0
    ctx->pc = 0x287f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15344));
    // 0x287f54: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287F54u;
    SET_GPR_U32(ctx, 31, 0x287F5Cu);
    ctx->pc = 0x287F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F54u;
    // 0x287f58: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287F54u, 0x287F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F5Cu;
label_287f5c:
    // 0x287f5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x287f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287f60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x287f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x287f64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287f68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x287f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x287f6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x287f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287f70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x287f70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x287f74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x287f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287f78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x287f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x287f7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x287f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287f80: 0xc7b80078  lwc1        $f24, 0x78($sp)
    ctx->pc = 0x287f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x287f84: 0xc7b70070  lwc1        $f23, 0x70($sp)
    ctx->pc = 0x287f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x287f88: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x287f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x287f8c: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x287f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x287f90: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x287f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287f94: 0x3e00008  jr          $ra
    ctx->pc = 0x287F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F94u;
        // 0x287f98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287F9Cu;
    // 0x287f9c: 0x0  nop
    ctx->pc = 0x287f9cu;
    // NOP
    ctx->pc = 0x287fa0u;
}
