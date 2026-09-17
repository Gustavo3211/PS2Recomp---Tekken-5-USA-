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

// Function: sub_0023C298
// Address: 0x23c298 - 0x23c410
void sub_0023C298_0x23c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C298_0x23c298");
#endif

    switch (ctx->pc) {
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3fcu: goto label_23c3fc;
        default: break;
    }

    ctx->pc = 0x23c298u;

    // 0x23c298: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c29c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c2a0: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8880u));
    // 0x23c2a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x23c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23c2a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x23c2a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c2b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23c2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23c2b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c2b8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C2B8u;
    {
        const bool branch_taken_0x23c2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2B8u;
        // 0x23c2bc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2b8) {
            ctx->pc = 0x23C2D0u;
            goto label_23c2d0;
        }
    }
    ctx->pc = 0x23C2C0u;
    // 0x23c2c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c2c8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23C2C8u;
    {
        const bool branch_taken_0x23c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C8u;
        // 0x23c2cc: 0xac62e120  sw          $v0, -0x1EE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2c8) {
            ctx->pc = 0x23C3FCu;
            goto label_23c3fc;
        }
    }
    ctx->pc = 0x23C2D0u;
label_23c2d0:
    // 0x23c2d0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x23c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x23c2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c2d8: 0x2604e120  addiu       $a0, $s0, -0x1EE0
    ctx->pc = 0x23c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x23c2dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AE120u));
    // 0x23c2e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23C2E0u;
    {
        const bool branch_taken_0x23c2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2e0) {
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C2E8u;
    // 0x23c2e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C2E8u;
    {
        const bool branch_taken_0x23c2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E8u;
        // 0x23c2ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2e8) {
            ctx->pc = 0x23C308u;
            goto label_23c308;
        }
    }
    ctx->pc = 0x23C2F0u;
    // 0x23c2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c2f4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23C2F4u;
    {
        const bool branch_taken_0x23c2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c2f4) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C2FCu;
    // 0x23c2fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23C2FCu;
    {
        const bool branch_taken_0x23c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2fc) {
            ctx->pc = 0x23C390u;
            goto label_23c390;
        }
    }
    ctx->pc = 0x23C304u;
    // 0x23c304: 0x0  nop
    ctx->pc = 0x23c304u;
    // NOP
label_23c308:
    // 0x23c308: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C308u;
    {
        const bool branch_taken_0x23c308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C308u;
        // 0x23c30c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c308) {
            ctx->pc = 0x23C330u;
            goto label_23c330;
        }
    }
    ctx->pc = 0x23C310u;
    // 0x23c310: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23C310u;
    {
        const bool branch_taken_0x23c310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C310u;
        // 0x23c314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c310) {
            ctx->pc = 0x23C348u;
            goto label_23c348;
        }
    }
    ctx->pc = 0x23C318u;
    // 0x23c318: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23C318u;
    {
        const bool branch_taken_0x23c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c318) {
            ctx->pc = 0x23C390u;
            goto label_23c390;
        }
    }
    ctx->pc = 0x23C320u;
label_23c320:
    // 0x23c320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c324: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23c324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c328: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23C328u;
    {
        const bool branch_taken_0x23c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c328) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C330u;
label_23c330:
    // 0x23c330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c33c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23C33Cu;
    {
        const bool branch_taken_0x23c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C33Cu;
        // 0x23c340: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c33c) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C344u;
    // 0x23c344: 0x0  nop
    ctx->pc = 0x23c344u;
    // NOP
label_23c348:
    // 0x23c348: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23c34c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c350: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C350u;
    {
        const bool branch_taken_0x23c350 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C350u;
        // 0x23c354: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c350) {
            ctx->pc = 0x23C360u;
            goto label_23c360;
        }
    }
    ctx->pc = 0x23C358u;
    // 0x23c358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c35c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23c360:
    // 0x23c360: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x23c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23c368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c36c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23c36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23c370: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x23c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c374: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23c374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23c378: 0x0  nop
    ctx->pc = 0x23c378u;
    // NOP
    // 0x23c37c: 0x0  nop
    ctx->pc = 0x23c37cu;
    // NOP
    // 0x23c380: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x23c380u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x23c384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C384u;
    {
        const bool branch_taken_0x23c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C384u;
        // 0x23c388: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c384) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C38Cu;
    // 0x23c38c: 0x0  nop
    ctx->pc = 0x23c38cu;
    // NOP
label_23c390:
    // 0x23c390: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23c390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c394: 0xae02e120  sw          $v0, -0x1EE0($s0)
    ctx->pc = 0x23c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959392), GPR_U32(ctx, 2));
label_23c398:
    // 0x23c398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c39c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x23c39cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c3a0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x23C3A0u;
    {
        const bool branch_taken_0x23c3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c3a0) {
            ctx->pc = 0x23C3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3A0u;
            // 0x23c3a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C400u;
            goto label_23c400;
        }
    }
    ctx->pc = 0x23C3A8u;
    // 0x23c3a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x23c3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c3b0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x23C3B0u;
    SET_GPR_U32(ctx, 31, 0x23C3B8u);
    ctx->pc = 0x23C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3B0u;
    // 0x23c3b4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x23C3B0u, 0x23C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3B8u;
label_23c3b8:
    // 0x23c3b8: 0x2604e120  addiu       $a0, $s0, -0x1EE0
    ctx->pc = 0x23c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x23c3bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c3c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23c3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c3c8: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x23c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23c3cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c3d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C3D0u;
    {
        const bool branch_taken_0x23c3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3d0) {
            ctx->pc = 0x23C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3D0u;
            // 0x23c3d4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3ECu;
            goto label_23c3ec;
        }
    }
    ctx->pc = 0x23C3D8u;
    // 0x23c3d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23c3dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c3e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C3E0u;
    {
        const bool branch_taken_0x23c3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c3e0) {
            ctx->pc = 0x23C3F4u;
            goto label_23c3f4;
        }
    }
    ctx->pc = 0x23C3E8u;
    // 0x23c3e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x23c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_23c3ec:
    // 0x23c3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_23c3f4:
    // 0x23c3f4: 0xc0dbc0a  jal         func_36F028
    ctx->pc = 0x23C3F4u;
    SET_GPR_U32(ctx, 31, 0x23C3FCu);
    ctx->pc = 0x23C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3F4u;
    // 0x23c3f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F028u, 0x23C3F4u, 0x23C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3FCu;
label_23c3fc:
    // 0x23c3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c400:
    // 0x23c400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c404: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x23c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c408: 0x3e00008  jr          $ra
    ctx->pc = 0x23C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C408u;
        // 0x23c40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C410u;
}
