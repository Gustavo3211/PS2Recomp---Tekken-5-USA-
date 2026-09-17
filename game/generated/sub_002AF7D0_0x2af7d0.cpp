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

// Function: sub_002AF7D0
// Address: 0x2af7d0 - 0x2afa90
void sub_002AF7D0_0x2af7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF7D0_0x2af7d0");
#endif

    switch (ctx->pc) {
        case 0x2af878u: goto label_2af878;
        case 0x2af8b0u: goto label_2af8b0;
        case 0x2afa00u: goto label_2afa00;
        default: break;
    }

    ctx->pc = 0x2af7d0u;

    // 0x2af7d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2af7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2af7d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af7d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af7dc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2af7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2af7e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2af7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7e4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2af7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2af7e8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2af7e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7ec: 0xe7bb0118  swc1        $f27, 0x118($sp)
    ctx->pc = 0x2af7ecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2af7f0: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x2af7f0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x2af7f4: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x2af7f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2af7f8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2af7f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7fc: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x2af7fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2af800: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x2af800u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x2af804: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x2af804u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2af808: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2af808u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2af80c: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2af80cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2af810: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2af810u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2af814: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2af814u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2af818: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x2af818u;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x2af81c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2af81cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2af820: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2af820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2af824: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2af824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2af828: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2af828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2af82c: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2af82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2af830: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2af830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2af834: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2af834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2af838: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2af838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2af83c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2af83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2af840: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2af840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2af844: 0x8cee0038  lw          $t6, 0x38($a3)
    ctx->pc = 0x2af844u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2af848: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x2af848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af84c: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x2af84cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2af850: 0x8dc20010  lw          $v0, 0x10($t6)
    ctx->pc = 0x2af850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2af854: 0x46020682  mul.s       $f26, $f0, $f2
    ctx->pc = 0x2af854u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af858: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x2af858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af85c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2af85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2af860: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2af864: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2af864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2af868: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x2af868u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af86c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2AF86Cu;
    {
        const bool branch_taken_0x2af86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF86Cu;
        // 0x2af870: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af86c) {
            ctx->pc = 0x2AFA3Cu;
            goto label_2afa3c;
        }
    }
    ctx->pc = 0x2AF874u;
    // 0x2af874: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2af874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2af878:
    // 0x2af878: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2af878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2af87c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af888: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2af888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2af88c: 0x8c7508c0  lw          $s5, 0x8C0($v1)
    ctx->pc = 0x2af88cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2240)));
    // 0x2af890: 0x1aa0005f  blez        $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x2AF890u;
    {
        const bool branch_taken_0x2af890 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2AF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF890u;
        // 0x2af894: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af890) {
            ctx->pc = 0x2AFA10u;
            goto label_2afa10;
        }
    }
    ctx->pc = 0x2AF898u;
    // 0x2af898: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af89c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2af89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2af8a0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2af8a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8a4: 0x26170008  addiu       $s7, $s0, 0x8
    ctx->pc = 0x2af8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2af8a8: 0x2616000c  addiu       $s6, $s0, 0xC
    ctx->pc = 0x2af8a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2af8ac: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2af8b0:
    // 0x2af8b0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2af8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2af8b4: 0x8e8c0000  lw          $t4, 0x0($s4)
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2af8b8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2af8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2af8bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2af8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af8c4: 0x8da90080  lw          $t1, 0x80($t5)
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 128)));
    // 0x2af8c8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2af8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2af8cc: 0x3c061c00  lui         $a2, 0x1C00
    ctx->pc = 0x2af8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7168 << 16));
    // 0x2af8d0: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2af8d4: 0x2634021  addu        $t0, $s3, $v1
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2af8d8: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x2af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2af8dc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2af8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2af8e0: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x2af8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2af8e4: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2af8e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af8e8: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x2af8e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af8ec: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x2af8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2af8f0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2af8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2af8f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2af8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2af8f8: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x2af8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2af8fc: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2af8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af900: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2af900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2af904: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2af904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2af908: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2af908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2af90c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2af90cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af914: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2af914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2af918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af920: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2af920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2af924: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2af924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2af928: 0xe7bb0010  swc1        $f27, 0x10($sp)
    ctx->pc = 0x2af928u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2af92c: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x2af92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af930: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2af930u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2af934: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x2af934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2af938: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2af938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2af93c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x2af93cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x2af940: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x2af940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x2af944: 0x1263024  and         $a2, $t1, $a2
    ctx->pc = 0x2af944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x2af948: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2af948u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af94c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af950: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2af950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2af954: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2af954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2af958: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2af958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2af95c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2af95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2af960: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x2af960u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2af964: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2af964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2af968: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2af968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2af96c: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x2af96cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af970: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2af970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2af974: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x2af974u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x2af978: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2af978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2af97c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2af97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2af980: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x2af980u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x2af984: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x2af984u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2af988: 0x461518c1  sub.s       $f3, $f3, $f21
    ctx->pc = 0x2af988u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
    // 0x2af98c: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x2af98cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2af990: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x2af990u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2af994: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2af994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2af998: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2af998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2af99c: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x2af99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
    // 0x2af9a0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2af9a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2af9a4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2af9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2af9a8: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x2af9a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2af9ac: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2af9acu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2af9b0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2af9b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2af9b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9b8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2af9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2af9bc: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2af9bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2af9c0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2af9c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2af9c4: 0xe7b80018  swc1        $f24, 0x18($sp)
    ctx->pc = 0x2af9c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2af9c8: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x2af9c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2af9cc: 0x8da30078  lw          $v1, 0x78($t5)
    ctx->pc = 0x2af9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 120)));
    // 0x2af9d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2af9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af9d4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2af9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2af9d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2af9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af9dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2af9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2af9e0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2af9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af9e4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2af9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2af9e8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2af9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2af9ec: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2af9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2af9f0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2af9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2af9f4: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x2af9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x2af9f8: 0xc0a9c48  jal         func_2A7120
    ctx->pc = 0x2AF9F8u;
    SET_GPR_U32(ctx, 31, 0x2AFA00u);
    ctx->pc = 0x2AF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9F8u;
    // 0x2af9fc: 0x7fae0080  sq          $t6, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7120u, 0x2AF9F8u, 0x2AFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA00u;
label_2afa00:
    // 0x2afa00: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2afa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2afa04: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x2afa04u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afa08: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2AFA08u;
    {
        const bool branch_taken_0x2afa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA08u;
        // 0x2afa0c: 0x7bae0080  lq          $t6, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa08) {
            ctx->pc = 0x2AF8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af8b0;
        }
    }
    ctx->pc = 0x2AFA10u;
label_2afa10:
    // 0x2afa10: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2afa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afa14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2afa14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2afa18: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2afa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2afa1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2afa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2afa20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2afa24: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x2afa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2afa28: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2afa2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afa30: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2afa30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2afa34: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x2AFA34u;
    {
        const bool branch_taken_0x2afa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA34u;
        // 0x2afa38: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa34) {
            ctx->pc = 0x2AF878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af878;
        }
    }
    ctx->pc = 0x2AFA3Cu;
label_2afa3c:
    // 0x2afa3c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2afa3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2afa40: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2afa40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2afa44: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2afa44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2afa48: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2afa48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2afa4c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2afa4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2afa50: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2afa50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2afa54: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2afa54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2afa58: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2afa58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2afa5c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2afa5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afa60: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2afa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2afa64: 0xc7bb0118  lwc1        $f27, 0x118($sp)
    ctx->pc = 0x2afa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2afa68: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x2afa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2afa6c: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x2afa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2afa70: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x2afa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2afa74: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x2afa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2afa78: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2afa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2afa7c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2afa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2afa80: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2afa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2afa84: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA84u;
        // 0x2afa88: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA8Cu;
    // 0x2afa8c: 0x0  nop
    ctx->pc = 0x2afa8cu;
    // NOP
    ctx->pc = 0x2afa90u;
}
