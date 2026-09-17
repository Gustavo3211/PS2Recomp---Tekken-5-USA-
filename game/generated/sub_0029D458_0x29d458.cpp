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

// Function: sub_0029D458
// Address: 0x29d458 - 0x29d530
void sub_0029D458_0x29d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D458_0x29d458");
#endif

    ctx->pc = 0x29d458u;

    // 0x29d458: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29d458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29d45c: 0xc781b690  lwc1        $f1, -0x4970($gp)
    ctx->pc = 0x29d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d460: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29d464: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x29d464u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x29d468: 0xc420c658  lwc1        $f0, -0x39A8($at)
    ctx->pc = 0x29d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d46c: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d470: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29D470u;
    {
        const bool branch_taken_0x29d470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D470u;
        // 0x29d474: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d470) {
            ctx->pc = 0x29D520u;
            goto label_29d520;
        }
    }
    ctx->pc = 0x29D478u;
    // 0x29d478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d47c: 0x54a20029  bnel        $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29D47Cu;
    {
        const bool branch_taken_0x29d47c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d47c) {
            ctx->pc = 0x29D480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D47Cu;
            // 0x29d480: 0x8c840150  lw          $a0, 0x150($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D524u;
            goto label_29d524;
        }
    }
    ctx->pc = 0x29D484u;
    // 0x29d484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d488: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D488u;
    {
        const bool branch_taken_0x29d488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D488u;
        // 0x29d48c: 0x62840  sll         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d488) {
            ctx->pc = 0x29D4D0u;
            goto label_29d4d0;
        }
    }
    ctx->pc = 0x29D490u;
    // 0x29d490: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29d490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d494: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x29d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29d498: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29d49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d4a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29d4a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d4a8: 0x1467000d  bne         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x29D4A8u;
    {
        const bool branch_taken_0x29d4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4a8) {
            ctx->pc = 0x29D4E0u;
            goto label_29d4e0;
        }
    }
    ctx->pc = 0x29D4B0u;
    // 0x29d4b0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x29d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d4b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d4bc: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x29D4BCu;
    {
        const bool branch_taken_0x29d4bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4BCu;
        // 0x29d4c0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4bc) {
            ctx->pc = 0x29D514u;
            goto label_29d514;
        }
    }
    ctx->pc = 0x29D4C4u;
    // 0x29d4c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29D4C4u;
    {
        const bool branch_taken_0x29d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4c4) {
            ctx->pc = 0x29D4E4u;
            goto label_29d4e4;
        }
    }
    ctx->pc = 0x29D4CCu;
    // 0x29d4cc: 0x0  nop
    ctx->pc = 0x29d4ccu;
    // NOP
label_29d4d0:
    // 0x29d4d0: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d4d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29d4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29d4d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d4dc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x29d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_29d4e0:
    // 0x29d4e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29d4e4:
    // 0x29d4e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29d4e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29d4ec: 0x5467000e  bnel        $v1, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x29D4ECu;
    {
        const bool branch_taken_0x29d4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x29d4ec) {
            ctx->pc = 0x29D4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D4ECu;
            // 0x29d4f0: 0xc48000d4  lwc1        $f0, 0xD4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D528u;
            goto label_29d528;
        }
    }
    ctx->pc = 0x29D4F4u;
    // 0x29d4f4: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x29d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d4f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d4fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d500: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x29D500u;
    {
        const bool branch_taken_0x29d500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d500) {
            ctx->pc = 0x29D504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D500u;
            // 0x29d504: 0xc48000d4  lwc1        $f0, 0xD4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D528u;
            goto label_29d528;
        }
    }
    ctx->pc = 0x29D508u;
    // 0x29d508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d50c: 0x50c20006  beql        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D50Cu;
    {
        const bool branch_taken_0x29d50c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x29d50c) {
            ctx->pc = 0x29D510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D50Cu;
            // 0x29d510: 0xc48000d4  lwc1        $f0, 0xD4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D528u;
            goto label_29d528;
        }
    }
    ctx->pc = 0x29D514u;
label_29d514:
    // 0x29d514: 0x3e00008  jr          $ra
    ctx->pc = 0x29D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D514u;
        // 0x29d518: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D51Cu;
    // 0x29d51c: 0x0  nop
    ctx->pc = 0x29d51cu;
    // NOP
label_29d520:
    // 0x29d520: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_29d524:
    // 0x29d524: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x29d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d528:
    // 0x29d528: 0x3e00008  jr          $ra
    ctx->pc = 0x29D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D528u;
        // 0x29d52c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D530u;
}
