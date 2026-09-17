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

// Function: sub_00207840
// Address: 0x207840 - 0x207a50
void sub_00207840_0x207840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207840_0x207840");
#endif

    switch (ctx->pc) {
        case 0x2078a8u: goto label_2078a8;
        case 0x2078c0u: goto label_2078c0;
        case 0x2079f4u: goto label_2079f4;
        case 0x207a04u: goto label_207a04;
        default: break;
    }

    ctx->pc = 0x207840u;

    // 0x207840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x207840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x207844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x207844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x207848: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x207848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20784c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20784cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207850: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x207850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x207854: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x207854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207858: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x207858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x20785c: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x207860: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x207860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x207864: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x207868: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x207868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20786c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20786cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207870: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x207870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x207874: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x207874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x207878: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x207878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20787c: 0xc7948394  lwc1        $f20, -0x7C6C($gp)
    ctx->pc = 0x20787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207880: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x207884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x207888: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x207888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x20788c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207890: 0xaf859890  sw          $a1, -0x6770($gp)
    ctx->pc = 0x207890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940816), GPR_U32(ctx, 5));
    // 0x207894: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x207894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x207898: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x207898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20789c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x20789cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2078a0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2078a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2078a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2078a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2078a8:
    // 0x2078a8: 0x26a35600  addiu       $v1, $s5, 0x5600
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 22016));
    // 0x2078ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2078b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2078b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2078b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2078b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2078bc: 0x0  nop
    ctx->pc = 0x2078bcu;
    // NOP
label_2078c0:
    // 0x2078c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2078c4: 0x10c00050  beqz        $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x2078C4u;
    {
        const bool branch_taken_0x2078c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078C4u;
        // 0x2078c8: 0x123880  sll         $a3, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078c4) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x2078CCu;
    // 0x2078cc: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x2078ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2078d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2078d4: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2078d8: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x2078d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2078dc: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2078DCu;
    {
        const bool branch_taken_0x2078dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078dc) {
            ctx->pc = 0x2078E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078DCu;
            // 0x2078e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A0Cu;
            goto label_207a0c;
        }
    }
    ctx->pc = 0x2078E4u;
    // 0x2078e4: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2078e8: 0x54620048  bnel        $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2078E8u;
    {
        const bool branch_taken_0x2078e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2078e8) {
            ctx->pc = 0x2078ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078E8u;
            // 0x2078ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A0Cu;
            goto label_207a0c;
        }
    }
    ctx->pc = 0x2078F0u;
    // 0x2078f0: 0x54860046  bnel        $a0, $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2078F0u;
    {
        const bool branch_taken_0x2078f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2078f0) {
            ctx->pc = 0x2078F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078F0u;
            // 0x2078f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A0Cu;
            goto label_207a0c;
        }
    }
    ctx->pc = 0x2078F8u;
    // 0x2078f8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2078f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2078fc: 0xc7808398  lwc1        $f0, -0x7C68($gp)
    ctx->pc = 0x2078fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207900: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207904: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207904u;
        // 0x207908: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207904) {
            ctx->pc = 0x207918u;
            goto label_207918;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20790Cu;
    {
        const bool branch_taken_0x20790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20790Cu;
        // 0x207910: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20790c) {
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x207914u;
    // 0x207914: 0x0  nop
    ctx->pc = 0x207914u;
    // NOP
label_207918:
    // 0x207918: 0xc780839c  lwc1        $f0, -0x7C64($gp)
    ctx->pc = 0x207918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20791c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20791cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207920: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x207920u;
    {
        const bool branch_taken_0x207920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207920) {
            ctx->pc = 0x207924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207920u;
            // 0x207924: 0x46140880  add.s       $f2, $f1, $f20 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x207928u;
label_207928:
    // 0x207928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20792c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20792cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x207930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207934: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x207934u;
    {
        const bool branch_taken_0x207934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207934) {
            ctx->pc = 0x207938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207934u;
            // 0x207938: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20793Cu;
            goto label_20793c;
        }
    }
    ctx->pc = 0x20793Cu;
label_20793c:
    // 0x20793c: 0xc78083a0  lwc1        $f0, -0x7C60($gp)
    ctx->pc = 0x20793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207940: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x207940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x207944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207948: 0x0  nop
    ctx->pc = 0x207948u;
    // NOP
    // 0x20794c: 0x0  nop
    ctx->pc = 0x20794cu;
    // NOP
    // 0x207950: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x207950u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x207954: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x207958: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x207958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20795c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x207960: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x207960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x207964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x207964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207968: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x207968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x20796c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20796cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x207970: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x207970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x207974: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x207974u;
    {
        const bool branch_taken_0x207974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x207974) {
            ctx->pc = 0x207978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207974u;
            // 0x207978: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20797Cu;
            goto label_20797c;
        }
    }
    ctx->pc = 0x20797Cu;
label_20797c:
    // 0x20797c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x207980: 0x2c422390  sltiu       $v0, $v0, 0x2390
    ctx->pc = 0x207980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9104) ? 1 : 0);
    // 0x207984: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x207984u;
    {
        const bool branch_taken_0x207984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207984) {
            ctx->pc = 0x207988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207984u;
            // 0x207988: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x20798Cu;
    // 0x20798c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x20798cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x207990: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x207990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x207994: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x207994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x207998: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x207998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x20799c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x20799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2079a0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2079a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2079a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2079A4u;
    {
        const bool branch_taken_0x2079a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079A4u;
        // 0x2079a8: 0xac72002c  sw          $s2, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079a4) {
            ctx->pc = 0x2079C0u;
            goto label_2079c0;
        }
    }
    ctx->pc = 0x2079ACu;
    // 0x2079ac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2079acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2079b0: 0xa0740030  sb          $s4, 0x30($v1)
    ctx->pc = 0x2079b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 20));
    // 0x2079b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2079B4u;
    {
        const bool branch_taken_0x2079b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079B4u;
        // 0x2079b8: 0x7c620010  sq          $v0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079b4) {
            ctx->pc = 0x2079C4u;
            goto label_2079c4;
        }
    }
    ctx->pc = 0x2079BCu;
    // 0x2079bc: 0x0  nop
    ctx->pc = 0x2079bcu;
    // NOP
label_2079c0:
    // 0x2079c0: 0xa0600030  sb          $zero, 0x30($v1)
    ctx->pc = 0x2079c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 0));
label_2079c4:
    // 0x2079c4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2079C4u;
    {
        const bool branch_taken_0x2079c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079c4) {
            ctx->pc = 0x2079C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2079C4u;
            // 0x2079c8: 0xa0600031  sb          $zero, 0x31($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079D8u;
            goto label_2079d8;
        }
    }
    ctx->pc = 0x2079CCu;
    // 0x2079cc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2079ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2079d0: 0xa0740031  sb          $s4, 0x31($v1)
    ctx->pc = 0x2079d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 20));
    // 0x2079d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2079d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2079d8:
    // 0x2079d8: 0x8f829890  lw          $v0, -0x6770($gp)
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
    // 0x2079dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2079DCu;
    {
        const bool branch_taken_0x2079dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079DCu;
        // 0x2079e0: 0x3a71021  addu        $v0, $sp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079dc) {
            ctx->pc = 0x2079F8u;
            goto label_2079f8;
        }
    }
    ctx->pc = 0x2079E4u;
    // 0x2079e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2079e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2079e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2079ec: 0xc092a94  jal         func_24AA50
    ctx->pc = 0x2079ECu;
    SET_GPR_U32(ctx, 31, 0x2079F4u);
    ctx->pc = 0x2079F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2079ECu;
    // 0x2079f0: 0x24067007  addiu       $a2, $zero, 0x7007 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28679));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA50u, 0x2079ECu, 0x2079F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079F4u;
label_2079f4:
    // 0x2079f4: 0xaf809890  sw          $zero, -0x6770($gp)
    ctx->pc = 0x2079f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940816), GPR_U32(ctx, 0));
label_2079f8:
    // 0x2079f8: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2079fc: 0xc09db70  jal         func_276DC0
    ctx->pc = 0x2079FCu;
    SET_GPR_U32(ctx, 31, 0x207A04u);
    ctx->pc = 0x207A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2079FCu;
    // 0x207a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276DC0u, 0x2079FCu, 0x207A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A04u;
label_207a04:
    // 0x207a04: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x207a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_207a08:
    // 0x207a08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_207a0c:
    // 0x207a0c: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x207a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x207a10: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x207A10u;
    {
        const bool branch_taken_0x207a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A10u;
        // 0x207a14: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a10) {
            ctx->pc = 0x2078C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2078c0;
        }
    }
    ctx->pc = 0x207A18u;
    // 0x207a18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207a1c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x207a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207a20: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x207A20u;
    {
        const bool branch_taken_0x207a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a20) {
            ctx->pc = 0x207A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207A20u;
            // 0x207a24: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2078a8;
        }
    }
    ctx->pc = 0x207A28u;
    // 0x207a28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x207a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207a2c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x207a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x207a30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x207a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207a34: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x207a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x207a38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x207a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207a3c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x207a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x207a40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x207a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207a44: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x207a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207a48: 0x3e00008  jr          $ra
    ctx->pc = 0x207A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A48u;
        // 0x207a4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A50u;
}
