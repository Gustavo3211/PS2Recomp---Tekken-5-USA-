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

// Function: sub_00369150
// Address: 0x369150 - 0x369250
void sub_00369150_0x369150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369150_0x369150");
#endif

    switch (ctx->pc) {
        case 0x3691c4u: goto label_3691c4;
        case 0x3691e4u: goto label_3691e4;
        case 0x369200u: goto label_369200;
        default: break;
    }

    ctx->pc = 0x369150u;

    // 0x369150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x369154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369158: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x369158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36915c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x36915cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x369160: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x369160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369164: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x369164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x369168: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x369168u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x36916c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x369170: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x369170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x369174: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x369174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369178: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x369178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36917c: 0x78e03  sra         $s1, $a3, 24
    ctx->pc = 0x36917cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 24));
    // 0x369180: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x369180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x369184: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x369184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369188: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x369188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36918c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x36918cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x369190: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x369190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x369194: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x369194u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x369198: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x369198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x36919c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36919cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691a0: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3691a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3691a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3691a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3691a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3691a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3691ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3691acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691b0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x3691B0u;
    {
        const bool branch_taken_0x3691b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3691B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691B0u;
        // 0x3691b4: 0x3442001b  ori         $v0, $v0, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691b0) {
            ctx->pc = 0x369220u;
            goto label_369220;
        }
    }
    ctx->pc = 0x3691B8u;
    // 0x3691b8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x3691b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3691bc: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x3691BCu;
    SET_GPR_U32(ctx, 31, 0x3691C4u);
    ctx->pc = 0x3691C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691BCu;
    // 0x3691c0: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x3691BCu, 0x3691C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691C4u;
label_3691c4:
    // 0x3691c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3691c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3691c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3691ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3691d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3691d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3691D4u;
    {
        const bool branch_taken_0x3691d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3691D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691D4u;
        // 0x3691d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691d4) {
            ctx->pc = 0x369220u;
            goto label_369220;
        }
    }
    ctx->pc = 0x3691DCu;
    // 0x3691dc: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x3691DCu;
    SET_GPR_U32(ctx, 31, 0x3691E4u);
    ctx->pc = 0x3691E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691DCu;
    // 0x3691e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x3691DCu, 0x3691E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691E4u;
label_3691e4:
    // 0x3691e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3691e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3691e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3691e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3691ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3691f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3691F0u;
    {
        const bool branch_taken_0x3691f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3691F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691F0u;
        // 0x3691f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691f0) {
            ctx->pc = 0x369220u;
            goto label_369220;
        }
    }
    ctx->pc = 0x3691F8u;
    // 0x3691f8: 0xc0d7256  jal         func_35C958
    ctx->pc = 0x3691F8u;
    SET_GPR_U32(ctx, 31, 0x369200u);
    ctx->pc = 0x3691FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691F8u;
    // 0x3691fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C958u, 0x3691F8u, 0x369200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369200u;
label_369200:
    // 0x369200: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x369200u;
    {
        const bool branch_taken_0x369200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369200) {
            ctx->pc = 0x369204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369200u;
            // 0x369204: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369210u;
            goto label_369210;
        }
    }
    ctx->pc = 0x369208u;
    // 0x369208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x369208u;
    {
        const bool branch_taken_0x369208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369208u;
        // 0x36920c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369208) {
            ctx->pc = 0x369220u;
            goto label_369220;
        }
    }
    ctx->pc = 0x369210u;
label_369210:
    // 0x369210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369214: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x369214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x369218: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x369218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x36921c: 0xac356b38  sw          $s5, 0x6B38($at)
    ctx->pc = 0x36921cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27448), GPR_U32(ctx, 21));
label_369220:
    // 0x369220: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x369220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369224: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x369224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369228: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x369228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36922c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36922cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369230: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x369230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369234: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x369234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x369238: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x369238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36923c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x36923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x369240: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x369240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x369244: 0x3e00008  jr          $ra
    ctx->pc = 0x369244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369244u;
        // 0x369248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36924Cu;
    // 0x36924c: 0x0  nop
    ctx->pc = 0x36924cu;
    // NOP
    ctx->pc = 0x369250u;
}
