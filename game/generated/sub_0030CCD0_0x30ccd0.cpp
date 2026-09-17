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

// Function: sub_0030CCD0
// Address: 0x30ccd0 - 0x30cda8
void sub_0030CCD0_0x30ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CCD0_0x30ccd0");
#endif

    switch (ctx->pc) {
        case 0x30cd10u: goto label_30cd10;
        case 0x30cd18u: goto label_30cd18;
        case 0x30cd20u: goto label_30cd20;
        case 0x30cd38u: goto label_30cd38;
        case 0x30cd40u: goto label_30cd40;
        default: break;
    }

    ctx->pc = 0x30ccd0u;

    // 0x30ccd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30ccd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30ccd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30ccd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30cce0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30cce4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30cce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30ccec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30ccf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30ccf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30ccf8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x30ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x30ccfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30CCFCu;
    {
        const bool branch_taken_0x30ccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCFCu;
        // 0x30cd00: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccfc) {
            ctx->pc = 0x30CD28u;
            goto label_30cd28;
        }
    }
    ctx->pc = 0x30CD04u;
    // 0x30cd04: 0x26b2000c  addiu       $s2, $s5, 0xC
    ctx->pc = 0x30cd04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x30cd08: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30CD08u;
    SET_GPR_U32(ctx, 31, 0x30CD10u);
    ctx->pc = 0x30CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD08u;
    // 0x30cd0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30CD08u, 0x30CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD10u;
label_30cd10:
    // 0x30cd10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CD10u;
    {
        const bool branch_taken_0x30cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD10u;
        // 0x30cd14: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd10) {
            ctx->pc = 0x30CD30u;
            goto label_30cd30;
        }
    }
    ctx->pc = 0x30CD18u;
label_30cd18:
    // 0x30cd18: 0xc0c4678  jal         func_3119E0
    ctx->pc = 0x30CD18u;
    SET_GPR_U32(ctx, 31, 0x30CD20u);
    ctx->pc = 0x30CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD18u;
    // 0x30cd1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119E0u, 0x30CD18u, 0x30CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD20u;
label_30cd20:
    // 0x30cd20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30CD20u;
    {
        const bool branch_taken_0x30cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD20u;
        // 0x30cd24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd20) {
            ctx->pc = 0x30CD80u;
            goto label_30cd80;
        }
    }
    ctx->pc = 0x30CD28u;
label_30cd28:
    // 0x30cd28: 0x26b2000c  addiu       $s2, $s5, 0xC
    ctx->pc = 0x30cd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x30cd2c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x30cd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30cd30:
    // 0x30cd30: 0x1a800011  blez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x30CD30u;
    {
        const bool branch_taken_0x30cd30 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x30CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD30u;
        // 0x30cd34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd30) {
            ctx->pc = 0x30CD78u;
            goto label_30cd78;
        }
    }
    ctx->pc = 0x30CD38u;
label_30cd38:
    // 0x30cd38: 0xc0c4670  jal         func_3119C0
    ctx->pc = 0x30CD38u;
    SET_GPR_U32(ctx, 31, 0x30CD40u);
    ctx->pc = 0x3119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3119C0u, 0x30CD38u, 0x30CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD40u;
label_30cd40:
    // 0x30cd40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30cd40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd44: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x30CD44u;
    {
        const bool branch_taken_0x30cd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD44u;
        // 0x30cd48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd44) {
            ctx->pc = 0x30CD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cd18;
        }
    }
    ctx->pc = 0x30CD4Cu;
    // 0x30cd4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x30cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x30cd50: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x30cd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd54: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd58: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x30cd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30cd5c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x30cd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x30cd60: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x30cd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x30cd68: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x30cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd6c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x30cd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x30cd70: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x30CD70u;
    {
        const bool branch_taken_0x30cd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD70u;
        // 0x30cd74: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd70) {
            ctx->pc = 0x30CD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cd38;
        }
    }
    ctx->pc = 0x30CD78u;
label_30cd78:
    // 0x30cd78: 0xaeb40010  sw          $s4, 0x10($s5)
    ctx->pc = 0x30cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 20));
    // 0x30cd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30cd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30cd80:
    // 0x30cd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cd84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cd88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30cd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cd8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30cd8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cd90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30cd90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cd94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30cd94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30cd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x30CD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD9Cu;
        // 0x30cda0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CDA4u;
    // 0x30cda4: 0x0  nop
    ctx->pc = 0x30cda4u;
    // NOP
    ctx->pc = 0x30cda8u;
}
