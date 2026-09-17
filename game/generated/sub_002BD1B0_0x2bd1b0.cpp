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

// Function: sub_002BD1B0
// Address: 0x2bd1b0 - 0x2bd388
void sub_002BD1B0_0x2bd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD1B0_0x2bd1b0");
#endif

    switch (ctx->pc) {
        case 0x2bd1e8u: goto label_2bd1e8;
        case 0x2bd200u: goto label_2bd200;
        default: break;
    }

    ctx->pc = 0x2bd1b0u;

    // 0x2bd1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd1b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bd1b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd1c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd1c4: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2bd1c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd1cc: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x2bd1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2bd1d0: 0x8c63caf8  lw          $v1, -0x3508($v1)
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953720)));
    // 0x2bd1d4: 0x50600067  beql        $v1, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x2BD1D4u;
    {
        const bool branch_taken_0x2bd1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1d4) {
            ctx->pc = 0x2BD1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD1D4u;
            // 0x2bd1d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD374u;
            goto label_2bd374;
        }
    }
    ctx->pc = 0x2BD1DCu;
    // 0x2bd1dc: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x2bd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x2bd1e0: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2BD1E0u;
    SET_GPR_U32(ctx, 31, 0x2BD1E8u);
    ctx->pc = 0x2BD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1E0u;
    // 0x2bd1e4: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2BD1E0u, 0x2BD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1E8u;
label_2bd1e8:
    // 0x2bd1e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2bd1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1f0: 0x26090480  addiu       $t1, $s0, 0x480
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x2bd1f4: 0x260806c0  addiu       $t0, $s0, 0x6C0
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x2bd1f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2bd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2bd1fc: 0x0  nop
    ctx->pc = 0x2bd1fcu;
    // NOP
label_2bd200:
    // 0x2bd200: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bd200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd208: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bd20c: 0x24420834  addiu       $v0, $v0, 0x834
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2100));
    // 0x2bd210: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2bd210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bd214: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2BD214u;
    {
        const bool branch_taken_0x2bd214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd214) {
            ctx->pc = 0x2BD2E0u;
            goto label_2bd2e0;
        }
    }
    ctx->pc = 0x2BD21Cu;
    // 0x2bd21c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bd21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd220: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2bd220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2bd224: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd228: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd22c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd230: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bd230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd238: 0x2464fffd  addiu       $a0, $v1, -0x3
    ctx->pc = 0x2bd238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2bd23c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x2bd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x2bd240: 0x24a57b78  addiu       $a1, $a1, 0x7B78
    ctx->pc = 0x2bd240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31608));
    // 0x2bd244: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2bd244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bd248: 0x2c830022  sltiu       $v1, $a0, 0x22
    ctx->pc = 0x2bd248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x2bd24c: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BD24Cu;
    {
        const bool branch_taken_0x2bd24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd24c) {
            ctx->pc = 0x2BD250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD24Cu;
            // 0x2bd250: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD2A4u;
            goto label_2bd2a4;
        }
    }
    ctx->pc = 0x2BD254u;
    // 0x2bd254: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2bd254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd258: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2bd258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2bd25c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd260: 0x8c63e030  lw          $v1, -0x1FD0($v1)
    ctx->pc = 0x2bd260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959152)));
    // 0x2bd264: 0x600008  jr          $v1
    ctx->pc = 0x2BD264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD270u: goto label_2bd270;
            case 0x2BD2A0u: goto label_2bd2a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BD26Cu;
    // 0x2bd26c: 0x0  nop
    ctx->pc = 0x2bd26cu;
    // NOP
label_2bd270:
    // 0x2bd270: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2bd270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd274: 0xc78291fc  lwc1        $f2, -0x6E04($gp)
    ctx->pc = 0x2bd274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd278: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bd278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd27c: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD27Cu;
    {
        const bool branch_taken_0x2bd27c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd27c) {
            ctx->pc = 0x2BD280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD27Cu;
            // 0x2bd280: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD284u;
    // 0x2bd284: 0x54e00022  bnel        $a3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BD284u;
    {
        const bool branch_taken_0x2bd284 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd284) {
            ctx->pc = 0x2BD288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD284u;
            // 0x2bd288: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD28Cu;
    // 0x2bd28c: 0xc7809200  lwc1        $f0, -0x6E00($gp)
    ctx->pc = 0x2bd28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd290: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd294: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bd294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd298: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BD298u;
    {
        const bool branch_taken_0x2bd298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd298) {
            ctx->pc = 0x2BD2CCu;
            goto label_2bd2cc;
        }
    }
    ctx->pc = 0x2BD2A0u;
label_2bd2a0:
    // 0x2bd2a0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2bd2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bd2a4:
    // 0x2bd2a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd2a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd2ac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bd2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd2b0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2BD2B0u;
    {
        const bool branch_taken_0x2bd2b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd2b0) {
            ctx->pc = 0x2BD2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2B0u;
            // 0x2bd2b4: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD2B8u;
    // 0x2bd2b8: 0x54e00015  bnel        $a3, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BD2B8u;
    {
        const bool branch_taken_0x2bd2b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2b8) {
            ctx->pc = 0x2BD2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2B8u;
            // 0x2bd2bc: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD2C0u;
    // 0x2bd2c0: 0xc7809204  lwc1        $f0, -0x6DFC($gp)
    ctx->pc = 0x2bd2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bd2c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd2c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bd2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bd2cc:
    // 0x2bd2cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD2CCu;
    {
        const bool branch_taken_0x2bd2cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd2cc) {
            ctx->pc = 0x2BD2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2CCu;
            // 0x2bd2d0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD2D4u;
            goto label_2bd2d4;
        }
    }
    ctx->pc = 0x2BD2D4u;
label_2bd2d4:
    // 0x2bd2d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BD2D4u;
    {
        const bool branch_taken_0x2bd2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2D4u;
        // 0x2bd2d8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2d4) {
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD2DCu;
    // 0x2bd2dc: 0x0  nop
    ctx->pc = 0x2bd2dcu;
    // NOP
label_2bd2e0:
    // 0x2bd2e0: 0x54c00002  bnel        $a2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD2E0u;
    {
        const bool branch_taken_0x2bd2e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2e0) {
            ctx->pc = 0x2BD2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2E0u;
            // 0x2bd2e4: 0xc6022ac0  lwc1        $f2, 0x2AC0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD2ECu;
            goto label_2bd2ec;
        }
    }
    ctx->pc = 0x2BD2E8u;
    // 0x2bd2e8: 0xc6022250  lwc1        $f2, 0x2250($s0)
    ctx->pc = 0x2bd2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bd2ec:
    // 0x2bd2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd2f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd2f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd2fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD2FCu;
    {
        const bool branch_taken_0x2bd2fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2FCu;
        // 0x2bd300: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2fc) {
            ctx->pc = 0x2BD314u;
            goto label_2bd314;
        }
    }
    ctx->pc = 0x2BD304u;
    // 0x2bd304: 0xc7809208  lwc1        $f0, -0x6DF8($gp)
    ctx->pc = 0x2bd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd308: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bd308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bd30c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd30cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2bd310:
    // 0x2bd310: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2bd310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2bd314:
    // 0x2bd314: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2bd314u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2bd318: 0x106100b  movn        $v0, $t0, $a2
    ctx->pc = 0x2bd318u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x2bd31c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bd31cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd320: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bd320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd324: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2bd324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bd328: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2bd328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bd32c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bd32cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bd330: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2bd330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2bd334: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bd334u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd338: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2bd338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2bd33c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2bd33cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2bd340: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2bd340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bd344: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bd344u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bd348: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2bd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2bd34c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bd34cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd350: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bd350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd354: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2bd354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bd358: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2bd358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bd35c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bd35cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bd360: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2bd360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2bd364: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2bd364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bd368: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2BD368u;
    {
        const bool branch_taken_0x2bd368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD368u;
        // 0x2bd36c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd368) {
            ctx->pc = 0x2BD200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd200;
        }
    }
    ctx->pc = 0x2BD370u;
    // 0x2bd370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bd370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd374:
    // 0x2bd374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bd374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bd378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd37c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD37Cu;
        // 0x2bd380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD384u;
    // 0x2bd384: 0x0  nop
    ctx->pc = 0x2bd384u;
    // NOP
    ctx->pc = 0x2bd388u;
}
