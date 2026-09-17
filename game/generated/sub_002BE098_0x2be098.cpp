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

// Function: sub_002BE098
// Address: 0x2be098 - 0x2be220
void sub_002BE098_0x2be098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE098_0x2be098");
#endif

    switch (ctx->pc) {
        case 0x2be108u: goto label_2be108;
        default: break;
    }

    ctx->pc = 0x2be098u;

    // 0x2be098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be09c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2be09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2be0a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2be0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2be0a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2be0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2be0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2be0ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2be0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2be0b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2be0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2be0b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2be0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2be0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2be0bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be0c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2be0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2be0c4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2be0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2be0cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be0d0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2be0d0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0d4: 0x86640012  lh          $a0, 0x12($s3)
    ctx->pc = 0x2be0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x2be0d8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2be0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be0dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be0e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2be0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be0e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be0ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be0f0: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x2be0f4: 0x26527b90  addiu       $s2, $s2, 0x7B90
    ctx->pc = 0x2be0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 31632));
    // 0x2be0f8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2be0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2be0fc: 0x26580330  addiu       $t8, $s2, 0x330
    ctx->pc = 0x2be0fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x2be100: 0x26550334  addiu       $s5, $s2, 0x334
    ctx->pc = 0x2be100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 820));
    // 0x2be104: 0x26540336  addiu       $s4, $s2, 0x336
    ctx->pc = 0x2be104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 822));
label_2be108:
    // 0x2be108: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x2be10c: 0x27230060  addiu       $v1, $t9, 0x60
    ctx->pc = 0x2be10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
    // 0x2be110: 0x588021  addu        $s0, $v0, $t8
    ctx->pc = 0x2be110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2be114: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x2be114u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x2be118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2be118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be11c: 0x2837821  addu        $t7, $s4, $v1
    ctx->pc = 0x2be11cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2be120: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be124: 0x3022021  addu        $a0, $t8, $v0
    ctx->pc = 0x2be124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2be128: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2be128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be12c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2be12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2be130: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2be130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be134: 0x2b2e0002  slti        $t6, $t9, 0x2
    ctx->pc = 0x2be134u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be138: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2be138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be13c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2be13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be140: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2be140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be144: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x2be144u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be148: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2be148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be14c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2be14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2be150: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x2be150u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be154: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2be154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2be158: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x2be158u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be15c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2be15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2be160: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x2be160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be164: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2be164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2be168: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x2be168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x2be16c: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x2be16cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x2be170: 0xad400028  sw          $zero, 0x28($t2)
    ctx->pc = 0x2be170u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
    // 0x2be174: 0xad60002c  sw          $zero, 0x2C($t3)
    ctx->pc = 0x2be174u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 0));
    // 0x2be178: 0xad800040  sw          $zero, 0x40($t4)
    ctx->pc = 0x2be178u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 0));
    // 0x2be17c: 0xada00044  sw          $zero, 0x44($t5)
    ctx->pc = 0x2be17cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 0));
    // 0x2be180: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2be180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2be184: 0x15c0ffe0  bnez        $t6, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2BE184u;
    {
        const bool branch_taken_0x2be184 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE184u;
        // 0x2be188: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be184) {
            ctx->pc = 0x2BE108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be108;
        }
    }
    ctx->pc = 0x2BE18Cu;
    // 0x2be18c: 0xaf000060  sw          $zero, 0x60($t8)
    ctx->pc = 0x2be18cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 0));
    // 0x2be190: 0xc7849240  lwc1        $f4, -0x6DC0($gp)
    ctx->pc = 0x2be190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be194: 0xc66006c0  lwc1        $f0, 0x6C0($s3)
    ctx->pc = 0x2be194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be198: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2be198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2be19c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2be19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2be1a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2be1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2be1a4: 0xe64003a8  swc1        $f0, 0x3A8($s2)
    ctx->pc = 0x2be1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 936), bits); }
    // 0x2be1a8: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x2be1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be1ac: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x2be1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be1b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be1b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2be1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2be1b8: 0xe64003a4  swc1        $f0, 0x3A4($s2)
    ctx->pc = 0x2be1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 932), bits); }
    // 0x2be1bc: 0xc6220930  lwc1        $f2, 0x930($s1)
    ctx->pc = 0x2be1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be1c0: 0xc6210d20  lwc1        $f1, 0xD20($s1)
    ctx->pc = 0x2be1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be1c4: 0xc62308a0  lwc1        $f3, 0x8A0($s1)
    ctx->pc = 0x2be1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be1c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be1c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be1cc: 0xc6220810  lwc1        $f2, 0x810($s1)
    ctx->pc = 0x2be1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be1d0: 0xc66006c0  lwc1        $f0, 0x6C0($s3)
    ctx->pc = 0x2be1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be1d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2be1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2be1d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2be1d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2be1dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be1e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be1e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be1e4: 0xe64103ac  swc1        $f1, 0x3AC($s2)
    ctx->pc = 0x2be1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 940), bits); }
    // 0x2be1e8: 0xc6200c98  lwc1        $f0, 0xC98($s1)
    ctx->pc = 0x2be1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be1ec: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2be1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be1f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE1F0u;
    {
        const bool branch_taken_0x2be1f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f0) {
            ctx->pc = 0x2BE204u;
            goto label_2be204;
        }
    }
    ctx->pc = 0x2BE1F8u;
    // 0x2be1f8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2be1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2be1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be200: 0xe6200c98  swc1        $f0, 0xC98($s1)
    ctx->pc = 0x2be200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3224), bits); }
label_2be204:
    // 0x2be204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be20c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2be20cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be210: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2be210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be214: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2be214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2be218: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE218u;
        // 0x2be21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE220u;
}
