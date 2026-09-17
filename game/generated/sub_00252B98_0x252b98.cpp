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

// Function: sub_00252B98
// Address: 0x252b98 - 0x252c70
void sub_00252B98_0x252b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B98_0x252b98");
#endif

    switch (ctx->pc) {
        case 0x252b98u: goto label_252b98;
        case 0x252b9cu: goto label_252b9c;
        case 0x252ba0u: goto label_252ba0;
        case 0x252ba4u: goto label_252ba4;
        case 0x252ba8u: goto label_252ba8;
        case 0x252bacu: goto label_252bac;
        case 0x252bb0u: goto label_252bb0;
        case 0x252bb4u: goto label_252bb4;
        case 0x252bb8u: goto label_252bb8;
        case 0x252bbcu: goto label_252bbc;
        case 0x252bc0u: goto label_252bc0;
        case 0x252bc4u: goto label_252bc4;
        case 0x252bc8u: goto label_252bc8;
        case 0x252bccu: goto label_252bcc;
        case 0x252bd0u: goto label_252bd0;
        case 0x252bd4u: goto label_252bd4;
        case 0x252bd8u: goto label_252bd8;
        case 0x252bdcu: goto label_252bdc;
        case 0x252be0u: goto label_252be0;
        case 0x252be4u: goto label_252be4;
        case 0x252be8u: goto label_252be8;
        case 0x252becu: goto label_252bec;
        case 0x252bf0u: goto label_252bf0;
        case 0x252bf4u: goto label_252bf4;
        case 0x252bf8u: goto label_252bf8;
        case 0x252bfcu: goto label_252bfc;
        case 0x252c00u: goto label_252c00;
        case 0x252c04u: goto label_252c04;
        case 0x252c08u: goto label_252c08;
        case 0x252c0cu: goto label_252c0c;
        case 0x252c10u: goto label_252c10;
        case 0x252c14u: goto label_252c14;
        case 0x252c18u: goto label_252c18;
        case 0x252c1cu: goto label_252c1c;
        case 0x252c20u: goto label_252c20;
        case 0x252c24u: goto label_252c24;
        case 0x252c28u: goto label_252c28;
        case 0x252c2cu: goto label_252c2c;
        case 0x252c30u: goto label_252c30;
        case 0x252c34u: goto label_252c34;
        case 0x252c38u: goto label_252c38;
        case 0x252c3cu: goto label_252c3c;
        case 0x252c40u: goto label_252c40;
        case 0x252c44u: goto label_252c44;
        case 0x252c48u: goto label_252c48;
        case 0x252c4cu: goto label_252c4c;
        case 0x252c50u: goto label_252c50;
        case 0x252c54u: goto label_252c54;
        case 0x252c58u: goto label_252c58;
        case 0x252c5cu: goto label_252c5c;
        case 0x252c60u: goto label_252c60;
        case 0x252c64u: goto label_252c64;
        case 0x252c68u: goto label_252c68;
        case 0x252c6cu: goto label_252c6c;
        default: break;
    }

    ctx->pc = 0x252b98u;

label_252b98:
    // 0x252b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_252b9c:
    // 0x252b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_252ba0:
    // 0x252ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252ba4:
    // 0x252ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_252ba8:
    // 0x252ba8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x252ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_252bac:
    // 0x252bac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x252bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_252bb0:
    // 0x252bb0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x252bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_252bb4:
    // 0x252bb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x252bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_252bb8:
    // 0x252bb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x252bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_252bbc:
    // 0x252bbc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x252bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_252bc0:
    // 0x252bc0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x252bc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_252bc4:
    // 0x252bc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x252bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_252bc8:
    // 0x252bc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x252bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_252bcc:
    // 0x252bcc: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_252bd0:
    if (ctx->pc == 0x252BD0u) {
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BD4u;
        goto label_252bd4;
    }
    ctx->pc = 0x252BCCu;
    {
        const bool branch_taken_0x252bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bcc) {
            ctx->pc = 0x252C44u;
            goto label_252c44;
        }
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
label_252bd8:
    // 0x252bd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x252bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_252bdc:
    // 0x252bdc: 0x3c14003e  lui         $s4, 0x3E
    ctx->pc = 0x252bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
label_252be0:
    // 0x252be0: 0x5a200014  blezl       $s1, . + 4 + (0x14 << 2)
label_252be4:
    if (ctx->pc == 0x252BE4u) {
        ctx->pc = 0x252BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BE0u;
        // 0x252be4: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BE8u;
        goto label_252be8;
    }
    ctx->pc = 0x252BE0u;
    {
        const bool branch_taken_0x252be0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x252be0) {
            ctx->pc = 0x252BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252BE0u;
            // 0x252be4: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252C34u;
            goto label_252c34;
        }
    }
    ctx->pc = 0x252BE8u;
label_252be8:
    // 0x252be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252bec:
    // 0x252bec: 0xc0b7d04  jal         func_2DF410
label_252bf0:
    if (ctx->pc == 0x252BF0u) {
        ctx->pc = 0x252BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BECu;
        // 0x252bf0: 0x268437e0  addiu       $a0, $s4, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BF4u;
        goto label_252bf4;
    }
    ctx->pc = 0x252BECu;
    SET_GPR_U32(ctx, 31, 0x252BF4u);
    ctx->pc = 0x252BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BECu;
    // 0x252bf0: 0x268437e0  addiu       $a0, $s4, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x252BECu, 0x252BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BF4u;
label_252bf4:
    // 0x252bf4: 0xc0b7700  jal         func_2DDC00
label_252bf8:
    if (ctx->pc == 0x252BF8u) {
        ctx->pc = 0x252BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF4u;
        // 0x252bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BFCu;
        goto label_252bfc;
    }
    ctx->pc = 0x252BF4u;
    SET_GPR_U32(ctx, 31, 0x252BFCu);
    ctx->pc = 0x252BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BF4u;
    // 0x252bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x252BF4u, 0x252BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BFCu;
label_252bfc:
    // 0x252bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252c00:
    // 0x252c00: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_252c04:
    // 0x252c04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x252c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_252c08:
    // 0x252c08: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x252c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252c0c:
    // 0x252c0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_252c10:
    if (ctx->pc == 0x252C10u) {
        ctx->pc = 0x252C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C0Cu;
        // 0x252c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C14u;
        goto label_252c14;
    }
    ctx->pc = 0x252C0Cu;
    {
        const bool branch_taken_0x252c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C0Cu;
        // 0x252c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c0c) {
            ctx->pc = 0x252C18u;
            goto label_252c18;
        }
    }
    ctx->pc = 0x252C14u;
label_252c14:
    // 0x252c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252c18:
    // 0x252c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_252c1c:
    if (ctx->pc == 0x252C1Cu) {
        ctx->pc = 0x252C20u;
        goto label_252c20;
    }
    ctx->pc = 0x252C18u;
    {
        const bool branch_taken_0x252c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c18) {
            ctx->pc = 0x252C28u;
            goto label_252c28;
        }
    }
    ctx->pc = 0x252C20u;
label_252c20:
    // 0x252c20: 0x10000003  b           . + 4 + (0x3 << 2)
label_252c24:
    if (ctx->pc == 0x252C24u) {
        ctx->pc = 0x252C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C20u;
        // 0x252c24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C28u;
        goto label_252c28;
    }
    ctx->pc = 0x252C20u;
    {
        const bool branch_taken_0x252c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C20u;
        // 0x252c24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c20) {
            ctx->pc = 0x252C30u;
            goto label_252c30;
        }
    }
    ctx->pc = 0x252C28u;
label_252c28:
    // 0x252c28: 0x240f809  jalr        $s2
label_252c2c:
    if (ctx->pc == 0x252C2Cu) {
        ctx->pc = 0x252C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C28u;
        // 0x252c2c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C30u;
        goto label_252c30;
    }
    ctx->pc = 0x252C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x252C30u);
        ctx->pc = 0x252C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C28u;
        // 0x252c2c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C28u, 0x252C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252C30u;
label_252c30:
    // 0x252c30: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x252c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_252c34:
    // 0x252c34: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x252c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_252c38:
    // 0x252c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252c3c:
    // 0x252c3c: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
label_252c40:
    if (ctx->pc == 0x252C40u) {
        ctx->pc = 0x252C44u;
        goto label_252c44;
    }
    ctx->pc = 0x252C3Cu;
    {
        const bool branch_taken_0x252c3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c3c) {
            ctx->pc = 0x252BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252be0;
        }
    }
    ctx->pc = 0x252C44u;
label_252c44:
    // 0x252c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252c48:
    // 0x252c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252c4c:
    // 0x252c4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_252c50:
    // 0x252c50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x252c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252c54:
    // 0x252c54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_252c58:
    // 0x252c58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x252c58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_252c5c:
    // 0x252c5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x252c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_252c60:
    // 0x252c60: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x252c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_252c64:
    // 0x252c64: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x252c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_252c68:
    // 0x252c68: 0x3e00008  jr          $ra
label_252c6c:
    if (ctx->pc == 0x252C6Cu) {
        ctx->pc = 0x252C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C68u;
        // 0x252c6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C70u;
        goto label_fallthrough_0x252c68;
    }
    ctx->pc = 0x252C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C68u;
        // 0x252c6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252c68:
    ctx->pc = 0x252C70u;
}
