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

// Function: sub_0025E1A0
// Address: 0x25e1a0 - 0x25e448
void sub_0025E1A0_0x25e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E1A0_0x25e1a0");
#endif

    switch (ctx->pc) {
        case 0x25e210u: goto label_25e210;
        case 0x25e234u: goto label_25e234;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e358u: goto label_25e358;
        case 0x25e380u: goto label_25e380;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3f4u: goto label_25e3f4;
        default: break;
    }

    ctx->pc = 0x25e1a0u;

    // 0x25e1a0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x25e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x25e1a4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x25e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
    // 0x25e1a8: 0xffbe02a0  sd          $fp, 0x2A0($sp)
    ctx->pc = 0x25e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 30));
    // 0x25e1ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x25e1acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1b0: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x25e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
    // 0x25e1b4: 0x27d30820  addiu       $s3, $fp, 0x820
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 2080));
    // 0x25e1b8: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x25e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
    // 0x25e1bc: 0x27c50818  addiu       $a1, $fp, 0x818
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2072));
    // 0x25e1c0: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x25e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
    // 0x25e1c4: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x25e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
    // 0x25e1c8: 0xffb50288  sd          $s5, 0x288($sp)
    ctx->pc = 0x25e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 21));
    // 0x25e1cc: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x25e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x25e1d0: 0xffb70298  sd          $s7, 0x298($sp)
    ctx->pc = 0x25e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 23));
    // 0x25e1d4: 0xffbf02a8  sd          $ra, 0x2A8($sp)
    ctx->pc = 0x25e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 31));
    // 0x25e1d8: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x25e1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25e1dc: 0x8fd40894  lw          $s4, 0x894($fp)
    ctx->pc = 0x25e1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2196)));
    // 0x25e1e0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x25e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x25e1e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E1E4u;
    {
        const bool branch_taken_0x25e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1E4u;
        // 0x25e1e8: 0x8e92001c  lw          $s2, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1e4) {
            ctx->pc = 0x25E1F8u;
            goto label_25e1f8;
        }
    }
    ctx->pc = 0x25E1ECu;
    // 0x25e1ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E1ECu;
    {
        const bool branch_taken_0x25e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1ECu;
        // 0x25e1f0: 0x8cb50004  lw          $s5, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1ec) {
            ctx->pc = 0x25E1FCu;
            goto label_25e1fc;
        }
    }
    ctx->pc = 0x25E1F4u;
    // 0x25e1f4: 0x0  nop
    ctx->pc = 0x25e1f4u;
    // NOP
label_25e1f8:
    // 0x25e1f8: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x25e1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25e1fc:
    // 0x25e1fc: 0x8e970030  lw          $s7, 0x30($s4)
    ctx->pc = 0x25e1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x25e200: 0x24110051  addiu       $s1, $zero, 0x51
    ctx->pc = 0x25e200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x25e204: 0x8e960034  lw          $s6, 0x34($s4)
    ctx->pc = 0x25e204u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x25e208: 0x26522d90  addiu       $s2, $s2, 0x2D90
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11664));
    // 0x25e20c: 0x0  nop
    ctx->pc = 0x25e20cu;
    // NOP
label_25e210:
    // 0x25e210: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x25e210u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25e214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e218: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x25e218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x25e21c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25e21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25e220: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25e220u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25e224: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25e228: 0x2f03021  addu        $a2, $s7, $s0
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x25e22c: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x25E22Cu;
    SET_GPR_U32(ctx, 31, 0x25E234u);
    ctx->pc = 0x25E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E22Cu;
    // 0x25e230: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x25E22Cu, 0x25E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E234u;
label_25e234:
    // 0x25e234: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e238: 0x2a22006b  slti        $v0, $s1, 0x6B
    ctx->pc = 0x25e238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)107) ? 1 : 0);
    // 0x25e23c: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x25e23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x25e240: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e244: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x25e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x25e248: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e24c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x25e24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x25e250: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25E250u;
    {
        const bool branch_taken_0x25e250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E250u;
        // 0x25e254: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e250) {
            ctx->pc = 0x25E210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e210;
        }
    }
    ctx->pc = 0x25E258u;
    // 0x25e258: 0x12a0006f  beqz        $s5, . + 4 + (0x6F << 2)
    ctx->pc = 0x25E258u;
    {
        const bool branch_taken_0x25e258 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E258u;
        // 0x25e25c: 0x8e92001c  lw          $s2, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e258) {
            ctx->pc = 0x25E418u;
            goto label_25e418;
        }
    }
    ctx->pc = 0x25E260u;
    // 0x25e260: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x25e260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x25e264: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x25e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25e268: 0x1462006c  bne         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x25E268u;
    {
        const bool branch_taken_0x25e268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E268u;
        // 0x25e26c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e268) {
            ctx->pc = 0x25E41Cu;
            goto label_25e41c;
        }
    }
    ctx->pc = 0x25E270u;
    // 0x25e270: 0x87c30012  lh          $v1, 0x12($fp)
    ctx->pc = 0x25e270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x25e274: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x25e274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x25e278: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x25e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e27c: 0x245725d0  addiu       $s7, $v0, 0x25D0
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
    // 0x25e280: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25e280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25e284: 0xc7828b6c  lwc1        $f2, -0x7494($gp)
    ctx->pc = 0x25e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e288: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x25e28c: 0x2610e740  addiu       $s0, $s0, -0x18C0
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960960));
    // 0x25e290: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x25e290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25e294: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x25e294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x25e298: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e29c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e2a0: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x25e2a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25e2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e2a8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x25e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x25e2ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25e2acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25e2b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25e2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e2b4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x25E2B4u;
    {
        const bool branch_taken_0x25e2b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2B4u;
        // 0x25e2b8: 0x24560008  addiu       $s6, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2b4) {
            ctx->pc = 0x25E308u;
            goto label_25e308;
        }
    }
    ctx->pc = 0x25E2BCu;
    // 0x25e2bc: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x25e2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25e2c0: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x25e2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x25e2c4: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25E2C4u;
    {
        const bool branch_taken_0x25e2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e2c4) {
            ctx->pc = 0x25E2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E2C4u;
            // 0x25e2c8: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E30Cu;
            goto label_25e30c;
        }
    }
    ctx->pc = 0x25E2CCu;
    // 0x25e2cc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x25e2ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25e2d0: 0x5446000e  bnel        $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x25E2D0u;
    {
        const bool branch_taken_0x25e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x25e2d0) {
            ctx->pc = 0x25E2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E2D0u;
            // 0x25e2d4: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E30Cu;
            goto label_25e30c;
        }
    }
    ctx->pc = 0x25E2D8u;
    // 0x25e2d8: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x25e2dc: 0x0  nop
    ctx->pc = 0x25e2dcu;
    // NOP
label_25e2e0:
    // 0x25e2e0: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x25e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x25e2e4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25e2e8: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x25e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x25e2ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x25e2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x25e2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e2f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x25e2f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e2f8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25E2F8u;
    {
        const bool branch_taken_0x25e2f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x25E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2F8u;
        // 0x25e2fc: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2f8) {
            ctx->pc = 0x25E2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e2e0;
        }
    }
    ctx->pc = 0x25E300u;
    // 0x25e300: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25E300u;
    {
        const bool branch_taken_0x25e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E300u;
        // 0x25e304: 0x96620006  lhu         $v0, 0x6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e300) {
            ctx->pc = 0x25E364u;
            goto label_25e364;
        }
    }
    ctx->pc = 0x25E308u;
label_25e308:
    // 0x25e308: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x25e308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_25e30c:
    // 0x25e30c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25E30Cu;
    {
        const bool branch_taken_0x25e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E30Cu;
        // 0x25e310: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e30c) {
            ctx->pc = 0x25E348u;
            goto label_25e348;
        }
    }
    ctx->pc = 0x25E314u;
    // 0x25e314: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25e318: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25e318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25e31c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x25e31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25e320: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25E320u;
    {
        const bool branch_taken_0x25e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e320) {
            ctx->pc = 0x25E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E320u;
            // 0x25e324: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E34Cu;
            goto label_25e34c;
        }
    }
    ctx->pc = 0x25E328u;
    // 0x25e328: 0x8fc20894  lw          $v0, 0x894($fp)
    ctx->pc = 0x25e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2196)));
    // 0x25e32c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e330: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x25e330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e334: 0xc0977d4  jal         func_25DF50
    ctx->pc = 0x25E334u;
    SET_GPR_U32(ctx, 31, 0x25E33Cu);
    ctx->pc = 0x25E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E334u;
    // 0x25e338: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF50u, 0x25E334u, 0x25E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E33Cu;
label_25e33c:
    // 0x25e33c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25E33Cu;
    {
        const bool branch_taken_0x25e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E33Cu;
        // 0x25e340: 0x96620006  lhu         $v0, 0x6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e33c) {
            ctx->pc = 0x25E364u;
            goto label_25e364;
        }
    }
    ctx->pc = 0x25E344u;
    // 0x25e344: 0x0  nop
    ctx->pc = 0x25e344u;
    // NOP
label_25e348:
    // 0x25e348: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25e348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25e34c:
    // 0x25e34c: 0x30c63fff  andi        $a2, $a2, 0x3FFF
    ctx->pc = 0x25e34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x25e350: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25E350u;
    SET_GPR_U32(ctx, 31, 0x25E358u);
    ctx->pc = 0x25E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E350u;
    // 0x25e354: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25E350u, 0x25E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E358u;
label_25e358:
    // 0x25e358: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x25E358u;
    {
        const bool branch_taken_0x25e358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e358) {
            ctx->pc = 0x25E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E358u;
            // 0x25e35c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E41Cu;
            goto label_25e41c;
        }
    }
    ctx->pc = 0x25E360u;
    // 0x25e360: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x25e360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_25e364:
    // 0x25e364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e368: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x25e36c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x25e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25e370: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25e370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25e374: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25e374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25e378: 0xc097e64  jal         func_25F990
    ctx->pc = 0x25E378u;
    SET_GPR_U32(ctx, 31, 0x25E380u);
    ctx->pc = 0x25E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E378u;
    // 0x25e37c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F990u, 0x25E378u, 0x25E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E380u;
label_25e380:
    // 0x25e380: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x25e380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25e384: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x25e384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x25e388: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x25e388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25e38c: 0xc78c8b70  lwc1        $f12, -0x7490($gp)
    ctx->pc = 0x25e38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e390: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x25e390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e394: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x25e394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25e398: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25e398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e39c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x25e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25e3a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25e3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3a4: 0xc097eb2  jal         func_25FAC8
    ctx->pc = 0x25E3A4u;
    SET_GPR_U32(ctx, 31, 0x25E3ACu);
    ctx->pc = 0x25E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3A4u;
    // 0x25e3a8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FAC8u, 0x25E3A4u, 0x25E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3ACu;
label_25e3ac:
    // 0x25e3ac: 0x97c20042  lhu         $v0, 0x42($fp)
    ctx->pc = 0x25e3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 66)));
    // 0x25e3b0: 0x2442ffb3  addiu       $v0, $v0, -0x4D
    ctx->pc = 0x25e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967219));
    // 0x25e3b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25e3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25e3b8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x25E3B8u;
    {
        const bool branch_taken_0x25e3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e3b8) {
            ctx->pc = 0x25E3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E3B8u;
            // 0x25e3bc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E41Cu;
            goto label_25e41c;
        }
    }
    ctx->pc = 0x25E3C0u;
    // 0x25e3c0: 0x8e950034  lw          $s5, 0x34($s4)
    ctx->pc = 0x25e3c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x25e3c4: 0x24110056  addiu       $s1, $zero, 0x56
    ctx->pc = 0x25e3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x25e3c8: 0x8e930030  lw          $s3, 0x30($s4)
    ctx->pc = 0x25e3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x25e3cc: 0x26523060  addiu       $s2, $s2, 0x3060
    ctx->pc = 0x25e3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12384));
label_25e3d0:
    // 0x25e3d0: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x25e3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25e3d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3d8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x25e3dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25e3e0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25e3e4: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25e3e8: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x25e3ec: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x25E3ECu;
    SET_GPR_U32(ctx, 31, 0x25E3F4u);
    ctx->pc = 0x25E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3ECu;
    // 0x25e3f0: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x25E3ECu, 0x25E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3F4u;
label_25e3f4:
    // 0x25e3f4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e3f8: 0x2a220058  slti        $v0, $s1, 0x58
    ctx->pc = 0x25e3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x25e3fc: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x25e3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x25e400: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e404: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x25e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x25e408: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e40c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x25e40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x25e410: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25E410u;
    {
        const bool branch_taken_0x25e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E410u;
        // 0x25e414: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e410) {
            ctx->pc = 0x25E3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e3d0;
        }
    }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x25e418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_25e41c:
    // 0x25e41c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x25e41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x25e420: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x25e420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x25e424: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x25e424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x25e428: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x25e428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x25e42c: 0xdfb50288  ld          $s5, 0x288($sp)
    ctx->pc = 0x25e42cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x25e430: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x25e430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x25e434: 0xdfb70298  ld          $s7, 0x298($sp)
    ctx->pc = 0x25e434u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x25e438: 0xdfbe02a0  ld          $fp, 0x2A0($sp)
    ctx->pc = 0x25e438u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x25e43c: 0xdfbf02a8  ld          $ra, 0x2A8($sp)
    ctx->pc = 0x25e43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x25e440: 0x3e00008  jr          $ra
    ctx->pc = 0x25E440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E440u;
        // 0x25e444: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E448u;
}
