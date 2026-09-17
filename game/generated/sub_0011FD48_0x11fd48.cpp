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

// Function: sub_0011FD48
// Address: 0x11fd48 - 0x11fe20
void sub_0011FD48_0x11fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FD48_0x11fd48");
#endif

    ctx->pc = 0x11fd48u;

    // 0x11fd48: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11fd48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11fd4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd50: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11fd54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fd58: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x11fd58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11fd5c: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x11fd60: 0x2465ff81  addiu       $a1, $v1, -0x7F
    ctx->pc = 0x11fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x11fd64: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x11fd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11fd68: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11FD68u;
    {
        const bool branch_taken_0x11fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD68u;
        // 0x11fd6c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd68) {
            ctx->pc = 0x11FE18u;
            goto label_11fe18;
        }
    }
    ctx->pc = 0x11FD70u;
    // 0x11fd70: 0x4a30013  bgezl       $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FD70u;
    {
        const bool branch_taken_0x11fd70 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11fd70) {
            ctx->pc = 0x11FD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FD70u;
            // 0x11fd74: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FDC0u;
            goto label_11fdc0;
        }
    }
    ctx->pc = 0x11FD78u;
    // 0x11fd78: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11fd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11fd7c: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11fd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11fd80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fd84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11fd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fd88: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11fd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11fd8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11fd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fd90: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11FD90u;
    {
        const bool branch_taken_0x11fd90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fd90) {
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FD98u;
    // 0x11fd98: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD98u;
        // 0x11fd9c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FDA8u;
            goto label_11fda8;
        }
    }
    ctx->pc = 0x11FDA0u;
    // 0x11fda0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11FDA0u;
    {
        const bool branch_taken_0x11fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDA0u;
        // 0x11fda4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fda0) {
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FDA8u;
label_11fda8:
    // 0x11fda8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fdac: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11fdacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11fdb0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x11FDB0u;
    {
        const bool branch_taken_0x11fdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fdb0) {
            ctx->pc = 0x11FDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FDB0u;
            // 0x11fdb4: 0x3c04bf80  lui         $a0, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FDB8u;
    // 0x11fdb8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11FDB8u;
    {
        const bool branch_taken_0x11fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fdb8) {
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FDC0u;
label_11fdc0:
    // 0x11fdc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fdc4: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11fdc8: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x11fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x11fdcc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11FDCCu;
    {
        const bool branch_taken_0x11fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDCCu;
        // 0x11fdd0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdcc) {
            ctx->pc = 0x11FE18u;
            goto label_11fe18;
        }
    }
    ctx->pc = 0x11FDD4u;
    // 0x11fdd4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11fdd8: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11fdd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11fddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fde0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11fde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fde4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11fde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11fde8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11fde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fdec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x11FDECu;
    {
        const bool branch_taken_0x11fdec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fdec) {
            ctx->pc = 0x11FE10u;
            goto label_11fe10;
        }
    }
    ctx->pc = 0x11FDF4u;
    // 0x11fdf4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FDF4u;
    {
        const bool branch_taken_0x11fdf4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDF4u;
        // 0x11fdf8: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdf4) {
            ctx->pc = 0x11FE0Cu;
            goto label_11fe0c;
        }
    }
    ctx->pc = 0x11FDFCu;
    // 0x11fdfc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11fe00: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11fe00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11fe04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fe08: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11fe08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_11fe0c:
    // 0x11fe0c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_11fe10:
    // 0x11fe10: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11fe10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fe14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11fe14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11fe18:
    // 0x11fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x11FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FE20u;
}
