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

// Function: sub_002BE220
// Address: 0x2be220 - 0x2be5e8
void sub_002BE220_0x2be220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE220_0x2be220");
#endif

    switch (ctx->pc) {
        case 0x2be298u: goto label_2be298;
        case 0x2be2ecu: goto label_2be2ec;
        case 0x2be308u: goto label_2be308;
        case 0x2be320u: goto label_2be320;
        case 0x2be390u: goto label_2be390;
        case 0x2be3b0u: goto label_2be3b0;
        default: break;
    }

    ctx->pc = 0x2be220u;

    // 0x2be220: 0x8f82bae8  lw          $v0, -0x4518($gp)
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x2be224: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be228: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2be228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2be22c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be230: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2be230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2be234: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be238: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2be238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2be23c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2be23cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be240: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2be240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2be244: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2be244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2be248: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2be248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2be24c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2be24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2be250: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2be250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2be254: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE254u;
    {
        const bool branch_taken_0x2be254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE254u;
        // 0x2be258: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be254) {
            ctx->pc = 0x2BE29Cu;
            goto label_2be29c;
        }
    }
    ctx->pc = 0x2BE25Cu;
    // 0x2be25c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2be25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be264: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2be264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be268: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2be268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be26c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be274: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2be274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2be278: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2be278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2be27c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2be27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2be280: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2be280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2be284: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2be284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be288: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2be288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be28c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2be28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2be290: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2BE290u;
    SET_GPR_U32(ctx, 31, 0x2BE298u);
    ctx->pc = 0x2BE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE290u;
    // 0x2be294: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2BE290u, 0x2BE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0xe780cb00  swc1        $f0, -0x3500($gp)
    ctx->pc = 0x2be298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953728), bits); }
label_2be29c:
    // 0x2be29c: 0x86330012  lh          $s3, 0x12($s1)
    ctx->pc = 0x2be29cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2be2a0: 0x14b0c0  sll         $s6, $s4, 3
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2be2a4: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2be2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2be2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2ac: 0x13a8c0  sll         $s5, $s3, 3
    ctx->pc = 0x2be2acu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2be2b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be2b4: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2be2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2be2b8: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2be2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2be2bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be2c0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be2c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2be2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2be2c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2be2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be2d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2be2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be2d8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2be2dc: 0x26107b90  addiu       $s0, $s0, 0x7B90
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31632));
    // 0x2be2e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2be2e4: 0xc0af826  jal         func_2BE098
    ctx->pc = 0x2BE2E4u;
    SET_GPR_U32(ctx, 31, 0x2BE2ECu);
    ctx->pc = 0x2BE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2E4u;
    // 0x2be2e8: 0x3c170017  lui         $s7, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE098u, 0x2BE2E4u, 0x2BE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2ECu;
label_2be2ec:
    // 0x2be2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be2f0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2be2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2be2f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2be2f8: 0xaf82baec  sw          $v0, -0x4514($gp)
    ctx->pc = 0x2be2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949612), GPR_U32(ctx, 2));
    // 0x2be2fc: 0xc4604360  lwc1        $f0, 0x4360($v1)
    ctx->pc = 0x2be2fcu;
    { uint32_t bits = FAST_READ32(0x154360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be300: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2be300u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be304: 0xc4814364  lwc1        $f1, 0x4364($a0)
    ctx->pc = 0x2be304u;
    { uint32_t bits = FAST_READ32(0x154364u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be308:
    // 0x2be308: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2be308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2be30c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2be30cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be310: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x2be310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2be314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2be314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2be318: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be31c: 0x0  nop
    ctx->pc = 0x2be31cu;
    // NOP
label_2be320:
    // 0x2be320: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2be320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2be324: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2be324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2be328: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2be32c: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x2be32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2be330: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2be330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be334: 0x29470004  slti        $a3, $t2, 0x4
    ctx->pc = 0x2be334u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2be338: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2be338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be33c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2be33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2be340: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be344: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2be344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2be348: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2be348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be34c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2be34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2be350: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x2be350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x2be354: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2be354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2be358: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BE358u;
    {
        const bool branch_taken_0x2be358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE358u;
        // 0x2be35c: 0xad000050  sw          $zero, 0x50($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be358) {
            ctx->pc = 0x2BE320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be320;
        }
    }
    ctx->pc = 0x2BE360u;
    // 0x2be360: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2be360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2be364: 0x29620007  slti        $v0, $t3, 0x7
    ctx->pc = 0x2be364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2be368: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2BE368u;
    {
        const bool branch_taken_0x2be368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE368u;
        // 0x2be36c: 0xe5210060  swc1        $f1, 0x60($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be368) {
            ctx->pc = 0x2BE308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be308;
        }
    }
    ctx->pc = 0x2BE370u;
    // 0x2be370: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2be370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be374: 0x26240790  addiu       $a0, $s1, 0x790
    ctx->pc = 0x2be374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x2be378: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2be378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be37c: 0xe6210750  swc1        $f1, 0x750($s1)
    ctx->pc = 0x2be37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1872), bits); }
    // 0x2be380: 0xe6210790  swc1        $f1, 0x790($s1)
    ctx->pc = 0x2be380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1936), bits); }
    // 0x2be384: 0xe6200758  swc1        $f0, 0x758($s1)
    ctx->pc = 0x2be384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1880), bits); }
    // 0x2be388: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2BE388u;
    SET_GPR_U32(ctx, 31, 0x2BE390u);
    ctx->pc = 0x2BE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE388u;
    // 0x2be38c: 0xe6200798  swc1        $f0, 0x798($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1944), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2BE388u, 0x2BE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE390u;
label_2be390:
    // 0x2be390: 0xc7829244  lwc1        $f2, -0x6DBC($gp)
    ctx->pc = 0x2be390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be394: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x2be394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x2be398: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2be398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be39c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2be39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be3a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be3a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be3a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be3a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be3a8: 0xe6210754  swc1        $f1, 0x754($s1)
    ctx->pc = 0x2be3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1876), bits); }
    // 0x2be3ac: 0xe6210794  swc1        $f1, 0x794($s1)
    ctx->pc = 0x2be3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1940), bits); }
label_2be3b0:
    // 0x2be3b0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2be3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2be3b4: 0xc6000310  lwc1        $f0, 0x310($s0)
    ctx->pc = 0x2be3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be3b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2be3c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be3c4: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x2be3c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2be3c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be3cc: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x2be3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x2be3d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2be3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2be3d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2be3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2be3d8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2BE3D8u;
    {
        const bool branch_taken_0x2be3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3D8u;
        // 0x2be3dc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3d8) {
            ctx->pc = 0x2BE3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be3b0;
        }
    }
    ctx->pc = 0x2BE3E0u;
    // 0x2be3e0: 0xc6020310  lwc1        $f2, 0x310($s0)
    ctx->pc = 0x2be3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be3e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2be3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be3e8: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x2be3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x2be3ec: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x2be3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x2be3f0: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x2be3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x2be3f4: 0xe6020320  swc1        $f2, 0x320($s0)
    ctx->pc = 0x2be3f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    // 0x2be3f8: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x2be3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x2be3fc: 0xc64008a0  lwc1        $f0, 0x8A0($s2)
    ctx->pc = 0x2be3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be400: 0xe6000444  swc1        $f0, 0x444($s0)
    ctx->pc = 0x2be400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1092), bits); }
    // 0x2be404: 0xc6410930  lwc1        $f1, 0x930($s2)
    ctx->pc = 0x2be404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be408: 0xe6010448  swc1        $f1, 0x448($s0)
    ctx->pc = 0x2be408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1096), bits); }
    // 0x2be40c: 0xc6400420  lwc1        $f0, 0x420($s2)
    ctx->pc = 0x2be40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be410: 0xe600044c  swc1        $f0, 0x44C($s0)
    ctx->pc = 0x2be410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1100), bits); }
    // 0x2be414: 0xc64104b0  lwc1        $f1, 0x4B0($s2)
    ctx->pc = 0x2be414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be418: 0xe6010450  swc1        $f1, 0x450($s0)
    ctx->pc = 0x2be418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1104), bits); }
    // 0x2be41c: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x2be41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be420: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x2be420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x2be424: 0xe6000454  swc1        $f0, 0x454($s0)
    ctx->pc = 0x2be424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1108), bits); }
    // 0x2be428: 0xe782cb04  swc1        $f2, -0x34FC($gp)
    ctx->pc = 0x2be428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953732), bits); }
    // 0x2be42c: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x2be42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x2be430: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x2be430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x2be434: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x2be434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x2be438: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x2be438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x2be43c: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x2be43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x2be440: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x2be440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x2be444: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x2be444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x2be448: 0x86240040  lh          $a0, 0x40($s1)
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2be44c: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2BE44Cu;
    {
        const bool branch_taken_0x2be44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE44Cu;
        // 0x2be450: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be44c) {
            ctx->pc = 0x2BE540u;
            goto label_2be540;
        }
    }
    ctx->pc = 0x2BE454u;
    // 0x2be454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE454u;
    {
        const bool branch_taken_0x2be454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE454u;
        // 0x2be458: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be454) {
            ctx->pc = 0x2BE470u;
            goto label_2be470;
        }
    }
    ctx->pc = 0x2BE45Cu;
    // 0x2be45c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be460: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BE460u;
    {
        const bool branch_taken_0x2be460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE460u;
        // 0x2be464: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be460) {
            ctx->pc = 0x2BE490u;
            goto label_2be490;
        }
    }
    ctx->pc = 0x2BE468u;
    // 0x2be468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE468u;
    {
        const bool branch_taken_0x2be468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE468u;
        // 0x2be46c: 0x2d41821  addu        $v1, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be468) {
            ctx->pc = 0x2BE47Cu;
            goto label_2be47c;
        }
    }
    ctx->pc = 0x2BE470u;
label_2be470:
    // 0x2be470: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BE470u;
    {
        const bool branch_taken_0x2be470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE470u;
        // 0x2be474: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be470) {
            ctx->pc = 0x2BE500u;
            goto label_2be500;
        }
    }
    ctx->pc = 0x2BE478u;
    // 0x2be478: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2be478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_2be47c:
    // 0x2be47c: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be480: 0xc7819248  lwc1        $f1, -0x6DB8($gp)
    ctx->pc = 0x2be480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be484: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2BE484u;
    {
        const bool branch_taken_0x2be484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE484u;
        // 0x2be488: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be484) {
            ctx->pc = 0x2BE554u;
            goto label_2be554;
        }
    }
    ctx->pc = 0x2BE48Cu;
    // 0x2be48c: 0x0  nop
    ctx->pc = 0x2be48cu;
    // NOP
label_2be490:
    // 0x2be490: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2be494: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be49c: 0xc781924c  lwc1        $f1, -0x6DB4($gp)
    ctx->pc = 0x2be49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be4a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be4a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2be4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2be4a8: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2be4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2be4ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2be4b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be4b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be4b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be4bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be4c4: 0x26e47b90  addiu       $a0, $s7, 0x7B90
    ctx->pc = 0x2be4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31632));
    // 0x2be4c8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2be4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be4cc: 0xc7829250  lwc1        $f2, -0x6DB0($gp)
    ctx->pc = 0x2be4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be4d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2be4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4d4: 0xe4600430  swc1        $f0, 0x430($v1)
    ctx->pc = 0x2be4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1072), bits); }
    // 0x2be4d8: 0xaca00434  sw          $zero, 0x434($a1)
    ctx->pc = 0x2be4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1076), GPR_U32(ctx, 0));
    // 0x2be4dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2be4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e4: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2be4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2be4ec: 0xe4c00438  swc1        $f0, 0x438($a2)
    ctx->pc = 0x2be4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1080), bits); }
    // 0x2be4f0: 0xe461043c  swc1        $f1, 0x43C($v1)
    ctx->pc = 0x2be4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x2be4f4: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2BE4F8u;
    {
        const bool branch_taken_0x2be4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4F8u;
        // 0x2be4fc: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4f8) {
            ctx->pc = 0x2BE5B8u;
            goto label_2be5b8;
        }
    }
    ctx->pc = 0x2BE500u;
label_2be500:
    // 0x2be500: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2be500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2be504: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be50c: 0xc7819254  lwc1        $f1, -0x6DAC($gp)
    ctx->pc = 0x2be50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be510: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be514: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2be514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2be518: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2be518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2be51c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2be520: 0xc7819258  lwc1        $f1, -0x6DA8($gp)
    ctx->pc = 0x2be520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be524: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be528: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be530: 0x26e47b90  addiu       $a0, $s7, 0x7B90
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31632));
    // 0x2be534: 0xc783925c  lwc1        $f3, -0x6DA4($gp)
    ctx->pc = 0x2be534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be538: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE538u;
    {
        const bool branch_taken_0x2be538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE538u;
        // 0x2be53c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be538) {
            ctx->pc = 0x2BE584u;
            goto label_2be584;
        }
    }
    ctx->pc = 0x2BE540u;
label_2be540:
    // 0x2be540: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2be540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2be544: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x2be544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2be548: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be54c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be550: 0xc7819260  lwc1        $f1, -0x6DA0($gp)
    ctx->pc = 0x2be550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be554:
    // 0x2be554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be558: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2be558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2be55c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2be55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2be560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2be564: 0xc7819264  lwc1        $f1, -0x6D9C($gp)
    ctx->pc = 0x2be564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be568: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be56c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be574: 0x26e47b90  addiu       $a0, $s7, 0x7B90
    ctx->pc = 0x2be574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31632));
    // 0x2be578: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2be578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be57c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2be580: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2be580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2be584:
    // 0x2be584: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2be584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be588: 0xe4600430  swc1        $f0, 0x430($v1)
    ctx->pc = 0x2be588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1072), bits); }
    // 0x2be58c: 0xaca00434  sw          $zero, 0x434($a1)
    ctx->pc = 0x2be58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1076), GPR_U32(ctx, 0));
    // 0x2be590: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2be598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be59c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2be59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5a0: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be5a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2be5a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2be5a8: 0xe4c00438  swc1        $f0, 0x438($a2)
    ctx->pc = 0x2be5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1080), bits); }
    // 0x2be5ac: 0xe462043c  swc1        $f2, 0x43C($v1)
    ctx->pc = 0x2be5acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x2be5b0: 0xc6400c98  lwc1        $f0, 0xC98($s2)
    ctx->pc = 0x2be5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be5b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2be5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2be5b8:
    // 0x2be5b8: 0xe4400440  swc1        $f0, 0x440($v0)
    ctx->pc = 0x2be5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1088), bits); }
    // 0x2be5bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2be5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be5c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2be5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2be5c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2be5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be5c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2be5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2be5cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2be5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be5d0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2be5d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2be5d4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2be5d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be5d8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2be5d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2be5dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2be5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E0u;
        // 0x2be5e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE5E8u;
}
