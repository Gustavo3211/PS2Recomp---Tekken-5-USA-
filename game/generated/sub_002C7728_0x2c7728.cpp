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

// Function: sub_002C7728
// Address: 0x2c7728 - 0x2c7aa8
void sub_002C7728_0x2c7728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7728_0x2c7728");
#endif

    switch (ctx->pc) {
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c79e4u: goto label_2c79e4;
        default: break;
    }

    ctx->pc = 0x2c7728u;

    // 0x2c7728: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2c7728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2c772c: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x2c772cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c7730: 0xffb301e8  sd          $s3, 0x1E8($sp)
    ctx->pc = 0x2c7730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 19));
    // 0x2c7734: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c7734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7738: 0xffb501f8  sd          $s5, 0x1F8($sp)
    ctx->pc = 0x2c7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 21));
    // 0x2c773c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c773cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7740: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x2c7740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x2c7744: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7748: 0xffb101d8  sd          $s1, 0x1D8($sp)
    ctx->pc = 0x2c7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 17));
    // 0x2c774c: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x2c774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x2c7750: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x2c7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x2c7754: 0xffb60200  sd          $s6, 0x200($sp)
    ctx->pc = 0x2c7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 22));
    // 0x2c7758: 0xffb70208  sd          $s7, 0x208($sp)
    ctx->pc = 0x2c7758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 23));
    // 0x2c775c: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x2c775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x2c7760: 0xe7b50220  swc1        $f21, 0x220($sp)
    ctx->pc = 0x2c7760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2c7764: 0xe7b40218  swc1        $f20, 0x218($sp)
    ctx->pc = 0x2c7764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2c7768: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7768u;
    {
        const bool branch_taken_0x2c7768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7768u;
        // 0x2c776c: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7768) {
            ctx->pc = 0x2C77D4u;
            goto label_2c77d4;
        }
    }
    ctx->pc = 0x2C7770u;
    // 0x2c7770: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c7774: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c7774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c7778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c777c: 0x8c63e320  lw          $v1, -0x1CE0($v1)
    ctx->pc = 0x2c777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959904)));
    // 0x2c7780: 0x600008  jr          $v1
    ctx->pc = 0x2C7780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7788u: goto label_2c7788;
            case 0x2C7798u: goto label_2c7798;
            case 0x2C77A8u: goto label_2c77a8;
            case 0x2C77B8u: goto label_2c77b8;
            case 0x2C77C8u: goto label_2c77c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C7788u;
label_2c7788:
    // 0x2c7788: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c778c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C778Cu;
    {
        const bool branch_taken_0x2c778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C778Cu;
        // 0x2c7790: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c778c) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C7794u;
    // 0x2c7794: 0x0  nop
    ctx->pc = 0x2c7794u;
    // NOP
label_2c7798:
    // 0x2c7798: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c7798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c779c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C779Cu;
    {
        const bool branch_taken_0x2c779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C779Cu;
        // 0x2c77a0: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c779c) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C77A4u;
    // 0x2c77a4: 0x0  nop
    ctx->pc = 0x2c77a4u;
    // NOP
label_2c77a8:
    // 0x2c77a8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c77ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C77ACu;
    {
        const bool branch_taken_0x2c77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77ACu;
        // 0x2c77b0: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77ac) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C77B4u;
    // 0x2c77b4: 0x0  nop
    ctx->pc = 0x2c77b4u;
    // NOP
label_2c77b8:
    // 0x2c77b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c77bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C77BCu;
    {
        const bool branch_taken_0x2c77bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77BCu;
        // 0x2c77c0: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77bc) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C77C4u;
    // 0x2c77c4: 0x0  nop
    ctx->pc = 0x2c77c4u;
    // NOP
label_2c77c8:
    // 0x2c77c8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c77cc: 0x2415ffbc  addiu       $s5, $zero, -0x44
    ctx->pc = 0x2c77ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_2c77d0:
    // 0x2c77d0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2c77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2c77d4:
    // 0x2c77d4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c77d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c77d8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c77d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c77dc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c77e0: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x2c77e0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c77e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c77e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77e8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c77e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c77ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c77f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2c77f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f8: 0xc0b19a0  jal         func_2C6680
    ctx->pc = 0x2C77F8u;
    SET_GPR_U32(ctx, 31, 0x2C7800u);
    ctx->pc = 0x2C77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77F8u;
    // 0x2c77fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6680u, 0x2C77F8u, 0x2C7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7800u;
label_2c7800:
    // 0x2c7800: 0x97b60000  lhu         $s6, 0x0($sp)
    ctx->pc = 0x2c7800u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7804: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c7804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7808: 0x12c0008c  beqz        $s6, . + 4 + (0x8C << 2)
    ctx->pc = 0x2C7808u;
    {
        const bool branch_taken_0x2c7808 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7808u;
        // 0x2c780c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7808) {
            ctx->pc = 0x2C7A3Cu;
            goto label_2c7a3c;
        }
    }
    ctx->pc = 0x2C7810u;
    // 0x2c7810: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c7810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c7814: 0x27b701b0  addiu       $s7, $sp, 0x1B0
    ctx->pc = 0x2c7814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2c7818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c781c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c781cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c7820:
    // 0x2c7820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7824: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c7824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c7828: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2c7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2c782c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C782Cu;
    {
        const bool branch_taken_0x2c782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C782Cu;
        // 0x2c7830: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c782c) {
            ctx->pc = 0x2C7A10u;
            goto label_2c7a10;
        }
    }
    ctx->pc = 0x2C7834u;
    // 0x2c7834: 0xc781935c  lwc1        $f1, -0x6CA4($gp)
    ctx->pc = 0x2c7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7838: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c783c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C783Cu;
    {
        const bool branch_taken_0x2c783c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C783Cu;
        // 0x2c7840: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c783c) {
            ctx->pc = 0x2C7850u;
            goto label_2c7850;
        }
    }
    ctx->pc = 0x2C7844u;
    // 0x2c7844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7848u;
    {
        const bool branch_taken_0x2c7848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7848u;
        // 0x2c784c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7848) {
            ctx->pc = 0x2C7858u;
            goto label_2c7858;
        }
    }
    ctx->pc = 0x2C7850u;
label_2c7850:
    // 0x2c7850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7854: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7858:
    // 0x2c7858: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c785c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c785cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7860: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7864: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7868: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7868u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c786c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c786cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7870: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c7870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7874: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7878: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c787c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c787cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7880: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7884: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7888: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c788c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c788cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7890: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7894: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7898: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c789c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c789cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c78a0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c78a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c78a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C78A4u;
    {
        const bool branch_taken_0x2c78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78A4u;
        // 0x2c78a8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78a4) {
            ctx->pc = 0x2C78B8u;
            goto label_2c78b8;
        }
    }
    ctx->pc = 0x2C78ACu;
    // 0x2c78ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c78acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c78b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C78B0u;
    {
        const bool branch_taken_0x2c78b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78B0u;
        // 0x2c78b4: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78b0) {
            ctx->pc = 0x2C78C0u;
            goto label_2c78c0;
        }
    }
    ctx->pc = 0x2C78B8u;
label_2c78b8:
    // 0x2c78b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c78b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c78bc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c78bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c78c0:
    // 0x2c78c0: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2c78c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c78c4: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2c78c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c78c8: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2c78c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c78cc: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2c78ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c78d0: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2c78d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c78d4: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2c78d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c78d8: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2c78d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c78dc: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2c78dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c78e0: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x2c78e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c78e4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c78e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c78e8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c78e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c78ec: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c78ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c78f0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c78f4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c78f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c78f8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c78f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c78fc: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c78fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c7900: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7900u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c7904: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7908: 0xc7819360  lwc1        $f1, -0x6CA0($gp)
    ctx->pc = 0x2c7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c790c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C790Cu;
    {
        const bool branch_taken_0x2c790c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c790c) {
            ctx->pc = 0x2C7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C790Cu;
            // 0x2c7910: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7920u;
            goto label_2c7920;
        }
    }
    ctx->pc = 0x2C7914u;
    // 0x2c7914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7918u;
    {
        const bool branch_taken_0x2c7918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7918u;
        // 0x2c791c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7918) {
            ctx->pc = 0x2C7924u;
            goto label_2c7924;
        }
    }
    ctx->pc = 0x2C7920u;
label_2c7920:
    // 0x2c7920: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7924:
    // 0x2c7924: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7928: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c7928u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c792c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7930: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7934: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7934u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c7938: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c7938u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c793c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c793cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7940: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7944: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7948: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c794c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c794cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7950: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7954: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7958: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c7958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c795c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c795cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7960: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7964: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7968: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c7968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c796c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c796cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7970: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7970u;
    {
        const bool branch_taken_0x2c7970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7970u;
        // 0x2c7974: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7970) {
            ctx->pc = 0x2C7988u;
            goto label_2c7988;
        }
    }
    ctx->pc = 0x2C7978u;
    // 0x2c7978: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7978u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c797c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C797Cu;
    {
        const bool branch_taken_0x2c797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C797Cu;
        // 0x2c7980: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c797c) {
            ctx->pc = 0x2C7990u;
            goto label_2c7990;
        }
    }
    ctx->pc = 0x2C7984u;
    // 0x2c7984: 0x0  nop
    ctx->pc = 0x2c7984u;
    // NOP
label_2c7988:
    // 0x2c7988: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7988u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c798c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c798cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7990:
    // 0x2c7990: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2c7990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7994: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2c7994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7998: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2c7998u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c799c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2c799cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c79a0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2c79a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c79a4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2c79a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c79a8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2c79a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c79ac: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2c79acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c79b0: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2c79b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c79b4: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2c79b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c79b8: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2c79b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c79bc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c79bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c79c0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c79c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c79c4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c79c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c79c8: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c79c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c79cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c79ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c79d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c79d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c79d4: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2c79d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c79d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c79d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79dc: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2C79DCu;
    SET_GPR_U32(ctx, 31, 0x2C79E4u);
    ctx->pc = 0x2C79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C79DCu;
    // 0x2c79e0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2C79DCu, 0x2C79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79E4u;
label_2c79e4:
    // 0x2c79e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2c79e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79e8: 0xdaf00000  lqc2        $vf16, 0x0($s7)
    ctx->pc = 0x2c79e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2c79ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c79ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c79f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c79f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c79f4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2c79f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2c79f8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2c79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2c79fc: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2c79fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2c7a00: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2c7a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c7a04: 0x46000004  c1          0x4
    ctx->pc = 0x2c7a04u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c7a08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7A08u;
    {
        const bool branch_taken_0x2c7a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A08u;
        // 0x2c7a0c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a08) {
            ctx->pc = 0x2C7A28u;
            goto label_2c7a28;
        }
    }
    ctx->pc = 0x2C7A10u;
label_2c7a10:
    // 0x2c7a10: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c7a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a14: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c7a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c7a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c7a1c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c7a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c7a20: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c7a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c7a24: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2c7a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2c7a28:
    // 0x2c7a28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c7a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c7a2c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c7a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c7a30: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x2c7a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2c7a34: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2C7A34u;
    {
        const bool branch_taken_0x2c7a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A34u;
        // 0x2c7a38: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a34) {
            ctx->pc = 0x2C7820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7820;
        }
    }
    ctx->pc = 0x2C7A3Cu;
label_2c7a3c:
    // 0x2c7a3c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2c7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a40: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2c7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a44: 0xc6630010  lwc1        $f3, 0x10($s3)
    ctx->pc = 0x2c7a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7a48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c7a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c7a4c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a50: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2c7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2c7a54: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c7a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c7a58: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x2c7a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c7a5c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2c7a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a60: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c7a60u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c7a64: 0xdfb101d8  ld          $s1, 0x1D8($sp)
    ctx->pc = 0x2c7a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2c7a68: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c7a68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c7a6c: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x2c7a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c7a70: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7a74: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c7a78: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2c7a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2c7a7c: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x2c7a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2c7a80: 0xdfb501f8  ld          $s5, 0x1F8($sp)
    ctx->pc = 0x2c7a80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2c7a84: 0xdfb301e8  ld          $s3, 0x1E8($sp)
    ctx->pc = 0x2c7a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2c7a88: 0xdfb60200  ld          $s6, 0x200($sp)
    ctx->pc = 0x2c7a88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c7a8c: 0xdfb70208  ld          $s7, 0x208($sp)
    ctx->pc = 0x2c7a8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2c7a90: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x2c7a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c7a94: 0xc7b50220  lwc1        $f21, 0x220($sp)
    ctx->pc = 0x2c7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7a98: 0xc7b40218  lwc1        $f20, 0x218($sp)
    ctx->pc = 0x2c7a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A9Cu;
        // 0x2c7aa0: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7AA4u;
    // 0x2c7aa4: 0x0  nop
    ctx->pc = 0x2c7aa4u;
    // NOP
    ctx->pc = 0x2c7aa8u;
}
