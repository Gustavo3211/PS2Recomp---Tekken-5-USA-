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

// Function: sub_0032E1D0
// Address: 0x32e1d0 - 0x32e3f0
void sub_0032E1D0_0x32e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E1D0_0x32e1d0");
#endif

    switch (ctx->pc) {
        case 0x32e1e8u: goto label_32e1e8;
        case 0x32e208u: goto label_32e208;
        case 0x32e278u: goto label_32e278;
        case 0x32e298u: goto label_32e298;
        case 0x32e340u: goto label_32e340;
        case 0x32e398u: goto label_32e398;
        default: break;
    }

    ctx->pc = 0x32e1d0u;

    // 0x32e1d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32e1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32e1d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32e1dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32e1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32e1e0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x32e1e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e1e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32e1e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e1e8:
    // 0x32e1e8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x32e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x32e1ec: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x32e1f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x32e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32e1f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x32e1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32e1f8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x32e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x32e1fc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x32e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x32e200: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x32e200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32e204: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32e208:
    // 0x32e208: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x32e208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e20c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x32E20Cu;
    {
        const bool branch_taken_0x32e20c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E20Cu;
        // 0x32e210: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e20c) {
            ctx->pc = 0x32E218u;
            goto label_32e218;
        }
    }
    ctx->pc = 0x32E214u;
    // 0x32e214: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32e214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_32e218:
    // 0x32e218: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x32e218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e21c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x32E21Cu;
    {
        const bool branch_taken_0x32e21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e21c) {
            ctx->pc = 0x32E220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E21Cu;
            // 0x32e220: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E224u;
            goto label_32e224;
        }
    }
    ctx->pc = 0x32E224u;
label_32e224:
    // 0x32e224: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x32e224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x32e228: 0x0  nop
    ctx->pc = 0x32e228u;
    // NOP
    // 0x32e22c: 0x523fff6  bgezl       $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x32E22Cu;
    {
        const bool branch_taken_0x32e22c = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x32e22c) {
            ctx->pc = 0x32E230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E22Cu;
            // 0x32e230: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e208;
        }
    }
    ctx->pc = 0x32E234u;
    // 0x32e234: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x32e234u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32e238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e23c: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x32E23Cu;
    {
        const bool branch_taken_0x32e23c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E23Cu;
        // 0x32e240: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e23c) {
            ctx->pc = 0x32E3E8u;
            goto label_32e3e8;
        }
    }
    ctx->pc = 0x32E244u;
    // 0x32e244: 0x0  nop
    ctx->pc = 0x32e244u;
    // NOP
    // 0x32e248: 0x0  nop
    ctx->pc = 0x32e248u;
    // NOP
    // 0x32e24c: 0x46031003  div.s       $f0, $f2, $f3
    ctx->pc = 0x32e24cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[3];
    // 0x32e250: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32e250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32e254: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x32e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x32e258: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x32e258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e25c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x32E25Cu;
    {
        const bool branch_taken_0x32e25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E25Cu;
        // 0x32e260: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e25c) {
            ctx->pc = 0x32E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e1e8;
        }
    }
    ctx->pc = 0x32E264u;
    // 0x32e264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32e264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32e268: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32e268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32e26c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32e26cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e270: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x32e270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32e274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e278:
    // 0x32e278: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32e27c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32e27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32e280: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32E280u;
    {
        const bool branch_taken_0x32e280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E280u;
        // 0x32e284: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e280) {
            ctx->pc = 0x32E2ECu;
            goto label_32e2ec;
        }
    }
    ctx->pc = 0x32E288u;
    // 0x32e288: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x32e288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x32e28c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x32e28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32e290: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x32e290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32e294: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32e298:
    // 0x32e298: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32e298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x32e29c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e2a0: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x32e2a4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x32e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x32e2a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e2ac: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x32e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x32e2b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e2b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x32e2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e2b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x32E2B8u;
    {
        const bool branch_taken_0x32e2b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2B8u;
        // 0x32e2bc: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2b8) {
            ctx->pc = 0x32E2C4u;
            goto label_32e2c4;
        }
    }
    ctx->pc = 0x32E2C0u;
    // 0x32e2c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32e2c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_32e2c4:
    // 0x32e2c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32e2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32e2c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x32e2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e2cc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x32E2CCu;
    {
        const bool branch_taken_0x32e2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e2cc) {
            ctx->pc = 0x32E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E2CCu;
            // 0x32e2d0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E2E0u;
            goto label_32e2e0;
        }
    }
    ctx->pc = 0x32E2D4u;
    // 0x32e2d4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x32e2d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x32e2d8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x32e2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_32e2e0:
    // 0x32e2e0: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x32e2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e2e4: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x32E2E4u;
    {
        const bool branch_taken_0x32e2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e2e4) {
            ctx->pc = 0x32E2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E2E4u;
            // 0x32e2e8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e298;
        }
    }
    ctx->pc = 0x32E2ECu;
label_32e2ec:
    // 0x32e2ec: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x32e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x32e2f0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x32e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32e2f4: 0x112b0007  beq         $t1, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E2F4u;
    {
        const bool branch_taken_0x32e2f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x32E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2F4u;
        // 0x32e2f8: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2f4) {
            ctx->pc = 0x32E314u;
            goto label_32e314;
        }
    }
    ctx->pc = 0x32E2FCu;
    // 0x32e2fc: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x32e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x32e300: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x32e300u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x32e304: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32e30c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32e310: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32e310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_32e314:
    // 0x32e314: 0x66080  sll         $t4, $a2, 2
    ctx->pc = 0x32e314u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32e318: 0x18b1021  addu        $v0, $t4, $t3
    ctx->pc = 0x32e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x32e31c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e320: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x32e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x32e324: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x32e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32e328: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x32e328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e32c: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x32E32Cu;
    {
        const bool branch_taken_0x32e32c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E32Cu;
        // 0x32e330: 0x46032102  mul.s       $f4, $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e32c) {
            ctx->pc = 0x32E3E4u;
            goto label_32e3e4;
        }
    }
    ctx->pc = 0x32E334u;
    // 0x32e334: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x32e334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x32e338: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x32E338u;
    {
        const bool branch_taken_0x32e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E338u;
        // 0x32e33c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e338) {
            ctx->pc = 0x32E3C8u;
            goto label_32e3c8;
        }
    }
    ctx->pc = 0x32E340u;
label_32e340:
    // 0x32e340: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x32e340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e344: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32e348: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x32e348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e34c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e350: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x32e350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e354: 0xcb1021  addu        $v0, $a2, $t3
    ctx->pc = 0x32e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x32e358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e35c: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x32e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x32e360: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e364: 0x0  nop
    ctx->pc = 0x32e364u;
    // NOP
    // 0x32e368: 0x0  nop
    ctx->pc = 0x32e368u;
    // NOP
    // 0x32e36c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x32e36cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x32e370: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32E370u;
    {
        const bool branch_taken_0x32e370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E370u;
        // 0x32e374: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e370) {
            ctx->pc = 0x32E3C4u;
            goto label_32e3c4;
        }
    }
    ctx->pc = 0x32E378u;
    // 0x32e378: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x32e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32e37c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32e37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e380: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x32e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x32e384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e38c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x32e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x32e390: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x32e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32e394: 0x0  nop
    ctx->pc = 0x32e394u;
    // NOP
label_32e398:
    // 0x32e398: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x32e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32e39c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32e3a0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x32e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e3a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32e3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32e3a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e3ac: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x32e3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e3b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x32e3b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x32e3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32e3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32e3b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x32e3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x32e3bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32E3BCu;
    {
        const bool branch_taken_0x32e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3BCu;
        // 0x32e3c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3bc) {
            ctx->pc = 0x32E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e398;
        }
    }
    ctx->pc = 0x32E3C4u;
label_32e3c4:
    // 0x32e3c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32e3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_32e3c8:
    // 0x32e3c8: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x32e3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e3cc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x32E3CCu;
    {
        const bool branch_taken_0x32e3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3CCu;
        // 0x32e3d0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3cc) {
            ctx->pc = 0x32E340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e340;
        }
    }
    ctx->pc = 0x32E3D4u;
    // 0x32e3d4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x32e3d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e3d8: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x32e3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e3dc: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x32E3DCu;
    {
        const bool branch_taken_0x32e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3DCu;
        // 0x32e3e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3dc) {
            ctx->pc = 0x32E278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e278;
        }
    }
    ctx->pc = 0x32E3E4u;
label_32e3e4:
    // 0x32e3e4: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x32e3e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_32e3e8:
    // 0x32e3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3E8u;
        // 0x32e3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E3F0u;
}
