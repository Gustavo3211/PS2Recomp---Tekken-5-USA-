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

// Function: sub_0025F0E0
// Address: 0x25f0e0 - 0x25f1c8
void sub_0025F0E0_0x25f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F0E0_0x25f0e0");
#endif

    switch (ctx->pc) {
        case 0x25f14cu: goto label_25f14c;
        default: break;
    }

    ctx->pc = 0x25f0e0u;

    // 0x25f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f0e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0f0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x25f0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25f0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25f0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f0fc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x25f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x25f100: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x25f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25f104: 0xc7808bb0  lwc1        $f0, -0x7450($gp)
    ctx->pc = 0x25f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f108: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x25f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x25f10c: 0x9443006c  lhu         $v1, 0x6C($v0)
    ctx->pc = 0x25f10cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x25f110: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F110u;
    {
        const bool branch_taken_0x25f110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x25F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F110u;
        // 0x25f114: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f110) {
            ctx->pc = 0x25F11Cu;
            goto label_25f11c;
        }
    }
    ctx->pc = 0x25F118u;
    // 0x25f118: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x25f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f11c:
    // 0x25f11c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25f11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f120: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x25F120u;
    {
        const bool branch_taken_0x25f120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f120) {
            ctx->pc = 0x25F124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F120u;
            // 0x25f124: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F138u;
            goto label_25f138;
        }
    }
    ctx->pc = 0x25F128u;
    // 0x25f128: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f12c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25F12Cu;
    {
        const bool branch_taken_0x25f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F12Cu;
        // 0x25f130: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f12c) {
            ctx->pc = 0x25F180u;
            goto label_25f180;
        }
    }
    ctx->pc = 0x25F134u;
    // 0x25f134: 0x0  nop
    ctx->pc = 0x25f134u;
    // NOP
label_25f138:
    // 0x25f138: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25f138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f13c: 0x50510010  beql        $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F13Cu;
    {
        const bool branch_taken_0x25f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x25f13c) {
            ctx->pc = 0x25F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F13Cu;
            // 0x25f140: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F180u;
            goto label_25f180;
        }
    }
    ctx->pc = 0x25F144u;
    // 0x25f144: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x25F144u;
    SET_GPR_U32(ctx, 31, 0x25F14Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x25F144u, 0x25F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F14Cu;
label_25f14c:
    // 0x25f14c: 0x9604004c  lhu         $a0, 0x4C($s0)
    ctx->pc = 0x25f14cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25f150: 0x24463fff  addiu       $a2, $v0, 0x3FFF
    ctx->pc = 0x25f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16383));
    // 0x25f154: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x25f154u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25f158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25f158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f15c: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x25f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x25f160: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x25f160u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x25f164: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x25f164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x25f168: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x25f16c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f170: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25f170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f174: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x25f174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x25f178: 0xa604004e  sh          $a0, 0x4E($s0)
    ctx->pc = 0x25f178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 4));
    // 0x25f17c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x25f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_25f180:
    // 0x25f180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25f184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f188: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F188u;
    {
        const bool branch_taken_0x25f188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f188) {
            ctx->pc = 0x25F18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F188u;
            // 0x25f18c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F1B0u;
            goto label_25f1b0;
        }
    }
    ctx->pc = 0x25F190u;
    // 0x25f190: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x25f190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x25f194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f198: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25f198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f19c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25F19Cu;
    {
        const bool branch_taken_0x25f19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f19c) {
            ctx->pc = 0x25F1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F19Cu;
            // 0x25f1a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F1B0u;
            goto label_25f1b0;
        }
    }
    ctx->pc = 0x25F1A4u;
    // 0x25f1a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f1a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25f1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f1b0:
    // 0x25f1b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25f1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f1b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f1b8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x25f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1BCu;
        // 0x25f1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1C4u;
    // 0x25f1c4: 0x0  nop
    ctx->pc = 0x25f1c4u;
    // NOP
    ctx->pc = 0x25f1c8u;
}
