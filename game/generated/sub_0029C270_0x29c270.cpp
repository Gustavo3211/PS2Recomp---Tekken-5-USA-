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

// Function: sub_0029C270
// Address: 0x29c270 - 0x29c3c8
void sub_0029C270_0x29c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C270_0x29c270");
#endif

    switch (ctx->pc) {
        case 0x29c320u: goto label_29c320;
        case 0x29c378u: goto label_29c378;
        case 0x29c3b0u: goto label_29c3b0;
        default: break;
    }

    ctx->pc = 0x29c270u;

    // 0x29c270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29c27c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x29c27cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29c280: 0x8c860150  lw          $a2, 0x150($a0)
    ctx->pc = 0x29c280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c284: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x29c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29c288: 0x8cc500d8  lw          $a1, 0xD8($a2)
    ctx->pc = 0x29c288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x29c28c: 0x8c4700e0  lw          $a3, 0xE0($v0)
    ctx->pc = 0x29c28cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x29c290: 0x244900e4  addiu       $t1, $v0, 0xE4
    ctx->pc = 0x29c290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x29c294: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x29c294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x29c298: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29c29c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29C29Cu;
    {
        const bool branch_taken_0x29c29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C29Cu;
        // 0x29c2a0: 0x245000ec  addiu       $s0, $v0, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c29c) {
            ctx->pc = 0x29C2C8u;
            goto label_29c2c8;
        }
    }
    ctx->pc = 0x29C2A4u;
    // 0x29c2a4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29c2a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c2a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29c2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c2ac: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x29c2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x29c2b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29c2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c2b4: 0x0  nop
    ctx->pc = 0x29c2b4u;
    // NOP
    // 0x29c2b8: 0x0  nop
    ctx->pc = 0x29c2b8u;
    // NOP
    // 0x29c2bc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x29c2bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x29c2c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29C2C0u;
    {
        const bool branch_taken_0x29c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C0u;
        // 0x29c2c4: 0xacc800d8  sw          $t0, 0xD8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2c0) {
            ctx->pc = 0x29C2DCu;
            goto label_29c2dc;
        }
    }
    ctx->pc = 0x29C2C8u;
label_29c2c8:
    // 0x29c2c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c2cc: 0xacc000d8  sw          $zero, 0xD8($a2)
    ctx->pc = 0x29c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 0));
    // 0x29c2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29c2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29c2d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29c2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29c2d8: 0xac820160  sw          $v0, 0x160($a0)
    ctx->pc = 0x29c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
label_29c2dc:
    // 0x29c2dc: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c2e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29c2e8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C2E8u;
    {
        const bool branch_taken_0x29c2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2E8u;
        // 0x29c2ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2e8) {
            ctx->pc = 0x29C340u;
            goto label_29c340;
        }
    }
    ctx->pc = 0x29C2F0u;
    // 0x29c2f0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x29c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29c2f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c2f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c2f8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c2fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c300: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c304: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c308: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c30c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c310: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c314: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c318: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29C318u;
    SET_GPR_U32(ctx, 31, 0x29C320u);
    ctx->pc = 0x29C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C318u;
    // 0x29c31c: 0x8d240000  lw          $a0, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29C318u, 0x29C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C320u;
label_29c320:
    // 0x29c320: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c328: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x29c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c330: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c338: 0x80ab3b4  j           func_2ACED0
    ctx->pc = 0x29C338u;
    ctx->pc = 0x29C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C338u;
    // 0x29c33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    sub_002ACED0_0x2aced0(rdram, ctx, runtime); return;
    ctx->pc = 0x29C340u;
label_29c340:
    // 0x29c340: 0x54820015  bnel        $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C340u;
    {
        const bool branch_taken_0x29c340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c340) {
            ctx->pc = 0x29C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C340u;
            // 0x29c344: 0x8ce20080  lw          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C398u;
            goto label_29c398;
        }
    }
    ctx->pc = 0x29C348u;
    // 0x29c348: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x29c348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x29c34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c350: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29c350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c354: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c358: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c35c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c364: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c368: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c36c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c370: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29C370u;
    SET_GPR_U32(ctx, 31, 0x29C378u);
    ctx->pc = 0x29C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C370u;
    // 0x29c374: 0x8d240004  lw          $a0, 0x4($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29C370u, 0x29C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C378u;
label_29c378:
    // 0x29c378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c37c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c37cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c380: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x29c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c388: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c38c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c390: 0x80ab3b4  j           func_2ACED0
    ctx->pc = 0x29C390u;
    ctx->pc = 0x29C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C390u;
    // 0x29c394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    sub_002ACED0_0x2aced0(rdram, ctx, runtime); return;
    ctx->pc = 0x29C398u;
label_29c398:
    // 0x29c398: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c39c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x29c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c3a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c3a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29C3A8u;
    SET_GPR_U32(ctx, 31, 0x29C3B0u);
    ctx->pc = 0x29C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3A8u;
    // 0x29c3ac: 0xace20080  sw          $v0, 0x80($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29C3A8u, 0x29C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3B0u;
label_29c3b0:
    // 0x29c3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c3b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c3b8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x29c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3BCu;
        // 0x29c3c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C3C4u;
    // 0x29c3c4: 0x0  nop
    ctx->pc = 0x29c3c4u;
    // NOP
    ctx->pc = 0x29c3c8u;
}
