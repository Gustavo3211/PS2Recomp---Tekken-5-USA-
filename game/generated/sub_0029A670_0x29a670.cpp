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

// Function: sub_0029A670
// Address: 0x29a670 - 0x29a848
void sub_0029A670_0x29a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A670_0x29a670");
#endif

    switch (ctx->pc) {
        case 0x29a758u: goto label_29a758;
        case 0x29a774u: goto label_29a774;
        case 0x29a784u: goto label_29a784;
        case 0x29a794u: goto label_29a794;
        case 0x29a7b8u: goto label_29a7b8;
        case 0x29a7d4u: goto label_29a7d4;
        case 0x29a800u: goto label_29a800;
        default: break;
    }

    ctx->pc = 0x29a670u;

    // 0x29a670: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29a674: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x29a674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29a678: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29a67c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x29a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a680: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29a684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a688: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29a68c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29a690: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29a694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29a694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a698: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a69c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29a69cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6a0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29a6a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29a6a8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29a6ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29a6acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6b0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29a6b4: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x29a6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x29a6b8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x29a6b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29a6bc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x29a6bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29a6c0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x29a6c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29a6c4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29a6c8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29a6cc: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29a6d0: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x29a6d4: 0xc421c648  lwc1        $f1, -0x39B8($at)
    ctx->pc = 0x29a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a6d8: 0x8e860150  lw          $a2, 0x150($s4)
    ctx->pc = 0x29a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x29a6dc: 0xc7949038  lwc1        $f20, -0x6FC8($gp)
    ctx->pc = 0x29a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a6e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a6e4: 0xc795903c  lwc1        $f21, -0x6FC4($gp)
    ctx->pc = 0x29a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a6e8: 0x8c57ffec  lw          $s7, -0x14($v0)
    ctx->pc = 0x29a6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967276)));
    // 0x29a6ec: 0x2468c0f8  addiu       $t0, $v1, -0x3F08
    ctx->pc = 0x29a6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951160));
    // 0x29a6f0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x29a6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x29a6f4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x29a6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x29a6f8: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x29a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x29a6fc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x29a6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a700: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x29a700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a704: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x29a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x29a708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a70c: 0x2488c108  addiu       $t0, $a0, -0x3EF8
    ctx->pc = 0x29a70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951176));
    // 0x29a710: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x29a710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x29a714: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x29a714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x29a718: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x29a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x29a71c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x29a71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a720: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x29a720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a724: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x29a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x29a728: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x29a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a72c: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x29a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x29a730: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x29a730u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a734: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x29a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29a738: 0x24500098  addiu       $s0, $v0, 0x98
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x29a73c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29a740: 0x245500a8  addiu       $s5, $v0, 0xA8
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x29a744: 0x245200b8  addiu       $s2, $v0, 0xB8
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x29a748: 0x245e0068  addiu       $fp, $v0, 0x68
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x29a74c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29a74cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29a750: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A750u;
    SET_GPR_U32(ctx, 31, 0x29A758u);
    ctx->pc = 0x29A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A750u;
    // 0x29a754: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A750u, 0x29A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A758u;
label_29a758:
    // 0x29a758: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x29a758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x29a75c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a764: 0x2329021  addu        $s2, $s1, $s2
    ctx->pc = 0x29a764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x29a768: 0xc7949040  lwc1        $f20, -0x6FC0($gp)
    ctx->pc = 0x29a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a76c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A76Cu;
    SET_GPR_U32(ctx, 31, 0x29A774u);
    ctx->pc = 0x29A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A76Cu;
    // 0x29a770: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A76Cu, 0x29A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A774u;
label_29a774:
    // 0x29a774: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x29a774u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x29a778: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x29a778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29a77c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A77Cu;
    SET_GPR_U32(ctx, 31, 0x29A784u);
    ctx->pc = 0x29A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A77Cu;
    // 0x29a780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A77Cu, 0x29A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A784u;
label_29a784:
    // 0x29a784: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x29a784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x29a788: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a78c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A78Cu;
    SET_GPR_U32(ctx, 31, 0x29A794u);
    ctx->pc = 0x29A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A78Cu;
    // 0x29a790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A78Cu, 0x29A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A794u;
label_29a794:
    // 0x29a794: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x29a794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29a798: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29a79c: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x29a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x29a7a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a7a8: 0x1ae00018  blez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x29A7A8u;
    {
        const bool branch_taken_0x29a7a8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x29A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7A8u;
        // 0x29a7ac: 0x24520028  addiu       $s2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7a8) {
            ctx->pc = 0x29A80Cu;
            goto label_29a80c;
        }
    }
    ctx->pc = 0x29A7B0u;
    // 0x29a7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7b4: 0x168080  sll         $s0, $s6, 2
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_29a7b8:
    // 0x29a7b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a7bc: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29a7c0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x29a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x29a7c4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x29a7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a7c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a7cc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A7CCu;
    SET_GPR_U32(ctx, 31, 0x29A7D4u);
    ctx->pc = 0x29A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7CCu;
    // 0x29a7d0: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A7CCu, 0x29A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7D4u;
label_29a7d4:
    // 0x29a7d4: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x29a7d8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29a7dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a7e0: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x29a7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29a7e4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x29a7e8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x29a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a7ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a7f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7f4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29a7f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x29a7f8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A7F8u;
    SET_GPR_U32(ctx, 31, 0x29A800u);
    ctx->pc = 0x29A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7F8u;
    // 0x29a7fc: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A7F8u, 0x29A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A800u;
label_29a800:
    // 0x29a800: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x29a800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x29a804: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x29A804u;
    {
        const bool branch_taken_0x29a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A804u;
        // 0x29a808: 0x168080  sll         $s0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a804) {
            ctx->pc = 0x29A7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a7b8;
        }
    }
    ctx->pc = 0x29A80Cu;
label_29a80c:
    // 0x29a80c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29a80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a810: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29a810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29a814: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29a814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a818: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29a818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29a81c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29a81cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a820: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29a820u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29a824: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29a824u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a828: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29a828u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29a82c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29a82cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a830: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29a834: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x29a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a838: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x29a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a83c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x29a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a840: 0x3e00008  jr          $ra
    ctx->pc = 0x29A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A840u;
        // 0x29a844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A848u;
}
