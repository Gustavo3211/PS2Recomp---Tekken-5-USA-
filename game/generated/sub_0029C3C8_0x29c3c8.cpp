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

// Function: sub_0029C3C8
// Address: 0x29c3c8 - 0x29c5e0
void sub_0029C3C8_0x29c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C3C8_0x29c3c8");
#endif

    switch (ctx->pc) {
        case 0x29c4dcu: goto label_29c4dc;
        case 0x29c500u: goto label_29c500;
        default: break;
    }

    ctx->pc = 0x29c3c8u;

    // 0x29c3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c3cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29c3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29c3d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29c3dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29c3e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c3e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c3e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29c3ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c3f0: 0x8ce50150  lw          $a1, 0x150($a3)
    ctx->pc = 0x29c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x29c3f4: 0x8ce30154  lw          $v1, 0x154($a3)
    ctx->pc = 0x29c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 340)));
    // 0x29c3f8: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x29c3fc: 0x24750018  addiu       $s5, $v1, 0x18
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x29c400: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x29c400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29c404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C404u;
    {
        const bool branch_taken_0x29c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C404u;
        // 0x29c408: 0x24740010  addiu       $s4, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c404) {
            ctx->pc = 0x29C420u;
            goto label_29c420;
        }
    }
    ctx->pc = 0x29C40Cu;
    // 0x29c40c: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x29c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c410: 0xc780905c  lwc1        $f0, -0x6FA4($gp)
    ctx->pc = 0x29c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29c414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c418: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x29C418u;
    {
        const bool branch_taken_0x29c418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c418) {
            ctx->pc = 0x29C41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C418u;
            // 0x29c41c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C428u;
            goto label_29c428;
        }
    }
    ctx->pc = 0x29C420u;
label_29c420:
    // 0x29c420: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29c428:
    // 0x29c428: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x29c42c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x29c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x29c430: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C434u;
    {
        const bool branch_taken_0x29c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C434u;
        // 0x29c438: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c434) {
            ctx->pc = 0x29C450u;
            goto label_29c450;
        }
    }
    ctx->pc = 0x29C43Cu;
    // 0x29c43c: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x29c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c440: 0xc7809060  lwc1        $f0, -0x6FA0($gp)
    ctx->pc = 0x29c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c444: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c448: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C448u;
    {
        const bool branch_taken_0x29c448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C448u;
        // 0x29c44c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c448) {
            ctx->pc = 0x29C458u;
            goto label_29c458;
        }
    }
    ctx->pc = 0x29C450u;
label_29c450:
    // 0x29c450: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c454: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29c458:
    // 0x29c458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c45c: 0x244483c0  addiu       $a0, $v0, -0x7C40
    ctx->pc = 0x29c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x29c460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c464: 0x9082002b  lbu         $v0, 0x2B($a0)
    ctx->pc = 0x29c464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x29c468: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29c468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c46c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C46Cu;
    {
        const bool branch_taken_0x29c46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C46Cu;
        // 0x29c470: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c46c) {
            ctx->pc = 0x29C488u;
            goto label_29c488;
        }
    }
    ctx->pc = 0x29C474u;
    // 0x29c474: 0x2782a848  addiu       $v0, $gp, -0x57B8
    ctx->pc = 0x29c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x29c478: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29c47c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29c480: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29C480u;
    {
        const bool branch_taken_0x29c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C480u;
        // 0x29c484: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c480) {
            ctx->pc = 0x29C4ACu;
            goto label_29c4ac;
        }
    }
    ctx->pc = 0x29C488u;
label_29c488:
    // 0x29c488: 0x9084002d  lbu         $a0, 0x2D($a0)
    ctx->pc = 0x29c488u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x29c48c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C48Cu;
    {
        const bool branch_taken_0x29c48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C48Cu;
        // 0x29c490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c48c) {
            ctx->pc = 0x29C4A0u;
            goto label_29c4a0;
        }
    }
    ctx->pc = 0x29C494u;
    // 0x29c494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C494u;
    {
        const bool branch_taken_0x29c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C494u;
        // 0x29c498: 0x8f86a848  lw          $a2, -0x57B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c494) {
            ctx->pc = 0x29C4ACu;
            goto label_29c4ac;
        }
    }
    ctx->pc = 0x29C49Cu;
    // 0x29c49c: 0x0  nop
    ctx->pc = 0x29c49cu;
    // NOP
label_29c4a0:
    // 0x29c4a0: 0x8f83a84c  lw          $v1, -0x57B4($gp)
    ctx->pc = 0x29c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944844)));
    // 0x29c4a4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x29c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x29c4a8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x29c4a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_29c4ac:
    // 0x29c4ac: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x29c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x29c4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C4B0u;
    {
        const bool branch_taken_0x29c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4B0u;
        // 0x29c4b4: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4b0) {
            ctx->pc = 0x29C4C0u;
            goto label_29c4c0;
        }
    }
    ctx->pc = 0x29C4B8u;
    // 0x29c4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29C4B8u;
    {
        const bool branch_taken_0x29c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4B8u;
        // 0x29c4bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4b8) {
            ctx->pc = 0x29C4C4u;
            goto label_29c4c4;
        }
    }
    ctx->pc = 0x29C4C0u;
label_29c4c0:
    // 0x29c4c0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x29c4c0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c4c4:
    // 0x29c4c4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C4C4u;
    {
        const bool branch_taken_0x29c4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4c4) {
            ctx->pc = 0x29C4E8u;
            goto label_29c4e8;
        }
    }
    ctx->pc = 0x29C4CCu;
    // 0x29c4cc: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x29C4CCu;
    {
        const bool branch_taken_0x29c4cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4cc) {
            ctx->pc = 0x29C4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C4CCu;
            // 0x29c4d0: 0xaca000d4  sw          $zero, 0xD4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C508u;
            goto label_29c508;
        }
    }
    ctx->pc = 0x29C4D4u;
    // 0x29c4d4: 0xc0a7178  jal         func_29C5E0
    ctx->pc = 0x29C4D4u;
    SET_GPR_U32(ctx, 31, 0x29C4DCu);
    ctx->pc = 0x29C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4D4u;
    // 0x29c4d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C5E0u, 0x29C4D4u, 0x29C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4DCu;
label_29c4dc:
    // 0x29c4dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29C4DCu;
    {
        const bool branch_taken_0x29c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4DCu;
        // 0x29c4e0: 0x12102b  sltu        $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4dc) {
            ctx->pc = 0x29C50Cu;
            goto label_29c50c;
        }
    }
    ctx->pc = 0x29C4E4u;
    // 0x29c4e4: 0x0  nop
    ctx->pc = 0x29c4e4u;
    // NOP
label_29c4e8:
    // 0x29c4e8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C4E8u;
    {
        const bool branch_taken_0x29c4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4E8u;
        // 0x29c4ec: 0x12102b  sltu        $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4e8) {
            ctx->pc = 0x29C50Cu;
            goto label_29c50c;
        }
    }
    ctx->pc = 0x29C4F0u;
    // 0x29c4f0: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C4F0u;
    {
        const bool branch_taken_0x29c4f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4f0) {
            ctx->pc = 0x29C4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C4F0u;
            // 0x29c4f4: 0xaca000d4  sw          $zero, 0xD4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C50Cu;
            goto label_29c50c;
        }
    }
    ctx->pc = 0x29C4F8u;
    // 0x29c4f8: 0xc0a718c  jal         func_29C630
    ctx->pc = 0x29C4F8u;
    SET_GPR_U32(ctx, 31, 0x29C500u);
    ctx->pc = 0x29C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4F8u;
    // 0x29c4fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C630u, 0x29C4F8u, 0x29C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C500u;
label_29c500:
    // 0x29c500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29C500u;
    {
        const bool branch_taken_0x29c500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C500u;
        // 0x29c504: 0x12102b  sltu        $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c500) {
            ctx->pc = 0x29C50Cu;
            goto label_29c50c;
        }
    }
    ctx->pc = 0x29C508u;
label_29c508:
    // 0x29c508: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x29c508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_29c50c:
    // 0x29c50c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C50Cu;
    {
        const bool branch_taken_0x29c50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C50Cu;
        // 0x29c510: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c50c) {
            ctx->pc = 0x29C520u;
            goto label_29c520;
        }
    }
    ctx->pc = 0x29C514u;
    // 0x29c514: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C518u;
    {
        const bool branch_taken_0x29c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C518u;
        // 0x29c51c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c518) {
            ctx->pc = 0x29C52Cu;
            goto label_29c52c;
        }
    }
    ctx->pc = 0x29C520u;
label_29c520:
    // 0x29c520: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c524: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c52c:
    // 0x29c52c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c530: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x29c530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x29c534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C534u;
    {
        const bool branch_taken_0x29c534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C534u;
        // 0x29c538: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c534) {
            ctx->pc = 0x29C548u;
            goto label_29c548;
        }
    }
    ctx->pc = 0x29C53Cu;
    // 0x29c53c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C540u;
    {
        const bool branch_taken_0x29c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C540u;
        // 0x29c544: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c540) {
            ctx->pc = 0x29C554u;
            goto label_29c554;
        }
    }
    ctx->pc = 0x29C548u;
label_29c548:
    // 0x29c548: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c54c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c554:
    // 0x29c554: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c558: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C558u;
    {
        const bool branch_taken_0x29c558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C558u;
        // 0x29c55c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c558) {
            ctx->pc = 0x29C568u;
            goto label_29c568;
        }
    }
    ctx->pc = 0x29C560u;
    // 0x29c560: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29C560u;
    {
        const bool branch_taken_0x29c560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C560u;
        // 0x29c564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c560) {
            ctx->pc = 0x29C56Cu;
            goto label_29c56c;
        }
    }
    ctx->pc = 0x29C568u;
label_29c568:
    // 0x29c568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c56c:
    // 0x29c56c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C56Cu;
    {
        const bool branch_taken_0x29c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C56Cu;
        // 0x29c570: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c56c) {
            ctx->pc = 0x29C580u;
            goto label_29c580;
        }
    }
    ctx->pc = 0x29C574u;
    // 0x29c574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C574u;
    {
        const bool branch_taken_0x29c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C574u;
        // 0x29c578: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c574) {
            ctx->pc = 0x29C588u;
            goto label_29c588;
        }
    }
    ctx->pc = 0x29C57Cu;
    // 0x29c57c: 0x0  nop
    ctx->pc = 0x29c57cu;
    // NOP
label_29c580:
    // 0x29c580: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c588:
    // 0x29c588: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c58c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C58Cu;
    {
        const bool branch_taken_0x29c58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C58Cu;
        // 0x29c590: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c58c) {
            ctx->pc = 0x29C59Cu;
            goto label_29c59c;
        }
    }
    ctx->pc = 0x29C594u;
    // 0x29c594: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29C594u;
    {
        const bool branch_taken_0x29c594 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C594u;
        // 0x29c598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c594) {
            ctx->pc = 0x29C5A0u;
            goto label_29c5a0;
        }
    }
    ctx->pc = 0x29C59Cu;
label_29c59c:
    // 0x29c59c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c5a0:
    // 0x29c5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C5A0u;
    {
        const bool branch_taken_0x29c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5A0u;
        // 0x29c5a4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5a0) {
            ctx->pc = 0x29C5B0u;
            goto label_29c5b0;
        }
    }
    ctx->pc = 0x29C5A8u;
    // 0x29c5a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29C5A8u;
    {
        const bool branch_taken_0x29c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5A8u;
        // 0x29c5ac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5a8) {
            ctx->pc = 0x29C5B8u;
            goto label_29c5b8;
        }
    }
    ctx->pc = 0x29C5B0u;
label_29c5b0:
    // 0x29c5b0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c5b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c5b8:
    // 0x29c5b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c5c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c5c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c5c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29c5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29c5cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29c5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c5d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29c5d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29c5d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29c5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5D8u;
        // 0x29c5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C5E0u;
}
