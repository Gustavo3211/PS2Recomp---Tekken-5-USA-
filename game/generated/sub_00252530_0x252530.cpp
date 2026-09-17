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

// Function: sub_00252530
// Address: 0x252530 - 0x252688
void sub_00252530_0x252530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252530_0x252530");
#endif

    switch (ctx->pc) {
        case 0x252580u: goto label_252580;
        case 0x2525fcu: goto label_2525fc;
        case 0x25266cu: goto label_25266c;
        default: break;
    }

    ctx->pc = 0x252530u;

    // 0x252530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252534: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x252534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x252538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25253c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x25253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x252540: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x252540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252544: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252548: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x252548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25254c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x25254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252550: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x252550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252554: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x252554u;
    {
        const bool branch_taken_0x252554 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252554u;
        // 0x252558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252554) {
            ctx->pc = 0x25266Cu;
            goto label_25266c;
        }
    }
    ctx->pc = 0x25255Cu;
    // 0x25255c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x25255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252568: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x252568u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25256c: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
    ctx->pc = 0x25256Cu;
    {
        const bool branch_taken_0x25256c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25256c) {
            ctx->pc = 0x252570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25256Cu;
            // 0x252570: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252670u;
            goto label_252670;
        }
    }
    ctx->pc = 0x252574u;
    // 0x252574: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x252574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x252578: 0xc0948c6  jal         func_252318
    ctx->pc = 0x252578u;
    SET_GPR_U32(ctx, 31, 0x252580u);
    ctx->pc = 0x25257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252578u;
    // 0x25257c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252318u, 0x252578u, 0x252580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252580u;
label_252580:
    // 0x252580: 0x8602005a  lh          $v0, 0x5A($s0)
    ctx->pc = 0x252580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x252584: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x252584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x252588: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x252588u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000068u)); // MMIO: 0x70000068
    // 0x25258c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x25258cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x252590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252594: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x252594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x252598: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25259c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2525a0: 0x34e70050  ori         $a3, $a3, 0x50
    ctx->pc = 0x2525a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x2525a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2525a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2525a8: 0xac230068  sw          $v1, 0x68($at)
    ctx->pc = 0x2525a8u;
    runtime->Store32(rdram, ctx, 0x70000068u, GPR_U32(ctx, 3)); // MMIO: 0x70000068
    // 0x2525ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2525acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525b0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2525b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2525b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2525b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525b8: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x2525b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2525bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2525bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2525c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2525c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2525c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2525c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2525c8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2525c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2525cc: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x2525ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x2525d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2525d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2525d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2525d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2525d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2525d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2525dc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2525dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2525e0: 0x9202005e  lbu         $v0, 0x5E($s0)
    ctx->pc = 0x2525e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2525e4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x2525e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2525e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2525e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2525ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2525ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2525f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2525f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2525f4: 0xc094864  jal         func_252190
    ctx->pc = 0x2525F4u;
    SET_GPR_U32(ctx, 31, 0x2525FCu);
    ctx->pc = 0x2525F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2525F4u;
    // 0x2525f8: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x252190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252190u, 0x2525F4u, 0x2525FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525FCu;
label_2525fc:
    // 0x2525fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2525fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x252600: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x252604: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x252604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x252608: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x25260c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x25260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x252610: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x252610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
    // 0x252614: 0x34c60024  ori         $a2, $a2, 0x24
    ctx->pc = 0x252614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36);
    // 0x252618: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x252618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25261c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x25261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x252620: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x252620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x252624: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x252624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x252628: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x252628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x25262c: 0xc78189b4  lwc1        $f1, -0x764C($gp)
    ctx->pc = 0x25262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252630: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x252630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x252634: 0x34c60030  ori         $a2, $a2, 0x30
    ctx->pc = 0x252634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x252638: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x252638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25263c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x25263cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x252640: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x252640u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000038u)); // MMIO: 0x70000038
    // 0x252644: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x252644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252648: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x252648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25264c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x25264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x252650: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252654: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x252654u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25265c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25265cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x252660: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x252660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x252664: 0xc08bba8  jal         func_22EEA0
    ctx->pc = 0x252664u;
    SET_GPR_U32(ctx, 31, 0x25266Cu);
    ctx->pc = 0x252668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252664u;
    // 0x252668: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEA0u, 0x252664u, 0x25266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25266Cu;
label_25266c:
    // 0x25266c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_252670:
    // 0x252670: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x252670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x252674: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x252674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252678: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x252678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25267c: 0x3e00008  jr          $ra
    ctx->pc = 0x25267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25267Cu;
        // 0x252680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252684u;
    // 0x252684: 0x0  nop
    ctx->pc = 0x252684u;
    // NOP
    ctx->pc = 0x252688u;
}
