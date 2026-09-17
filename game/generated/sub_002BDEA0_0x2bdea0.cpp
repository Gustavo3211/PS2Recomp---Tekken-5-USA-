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

// Function: sub_002BDEA0
// Address: 0x2bdea0 - 0x2bdf50
void sub_002BDEA0_0x2bdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDEA0_0x2bdea0");
#endif

    switch (ctx->pc) {
        case 0x2bded0u: goto label_2bded0;
        case 0x2bdf0cu: goto label_2bdf0c;
        case 0x2bdf14u: goto label_2bdf14;
        case 0x2bdf24u: goto label_2bdf24;
        case 0x2bdf34u: goto label_2bdf34;
        default: break;
    }

    ctx->pc = 0x2bdea0u;

    // 0x2bdea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bdea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bdea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdeac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bdeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bdeb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bdeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bdeb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bdeb8: 0x8e110894  lw          $s1, 0x894($s0)
    ctx->pc = 0x2bdeb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x2bdebc: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2bdebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2bdec0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bdec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bdec4: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2bdec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2bdec8: 0xc08842c  jal         func_2210B0
    ctx->pc = 0x2BDEC8u;
    SET_GPR_U32(ctx, 31, 0x2BDED0u);
    ctx->pc = 0x2BDECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEC8u;
    // 0x2bdecc: 0x8e32001c  lw          $s2, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2210B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2210B0u, 0x2BDEC8u, 0x2BDED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDED0u;
label_2bded0:
    // 0x2bded0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bded4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bded8: 0x244223b0  addiu       $v0, $v0, 0x23B0
    ctx->pc = 0x2bded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x2bdedc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2bdee0: 0x244500b8  addiu       $a1, $v0, 0xB8
    ctx->pc = 0x2bdee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x2bdee4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2bdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2bdee8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDEE8u;
    {
        const bool branch_taken_0x2bdee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE8u;
        // 0x2bdeec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdee8) {
            ctx->pc = 0x2BDEF8u;
            goto label_2bdef8;
        }
    }
    ctx->pc = 0x2BDEF0u;
    // 0x2bdef0: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDEF0u;
    {
        const bool branch_taken_0x2bdef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2bdef0) {
            ctx->pc = 0x2BDEFCu;
            goto label_2bdefc;
        }
    }
    ctx->pc = 0x2BDEF8u;
label_2bdef8:
    // 0x2bdef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bdef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdefc:
    // 0x2bdefc: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2BDEFCu;
    {
        const bool branch_taken_0x2bdefc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdefc) {
            ctx->pc = 0x2BDF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDEFCu;
            // 0x2bdf00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF38u;
            goto label_2bdf38;
        }
    }
    ctx->pc = 0x2BDF04u;
    // 0x2bdf04: 0xc097868  jal         func_25E1A0
    ctx->pc = 0x2BDF04u;
    SET_GPR_U32(ctx, 31, 0x2BDF0Cu);
    ctx->pc = 0x25E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E1A0u, 0x2BDF04u, 0x2BDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF0Cu;
label_2bdf0c:
    // 0x2bdf0c: 0xc097a52  jal         func_25E948
    ctx->pc = 0x2BDF0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF14u);
    ctx->pc = 0x2BDF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF0Cu;
    // 0x2bdf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E948u, 0x2BDF0Cu, 0x2BDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF14u;
label_2bdf14:
    // 0x2bdf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf1c: 0xc0b0b22  jal         func_2C2C88
    ctx->pc = 0x2BDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF24u);
    ctx->pc = 0x2BDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF1Cu;
    // 0x2bdf20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C88u, 0x2BDF1Cu, 0x2BDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF24u;
label_2bdf24:
    // 0x2bdf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf28: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2bdf28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bdf2c: 0xc0b0b22  jal         func_2C2C88
    ctx->pc = 0x2BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF34u);
    ctx->pc = 0x2BDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF2Cu;
    // 0x2bdf30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C88u, 0x2BDF2Cu, 0x2BDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF34u;
label_2bdf34:
    // 0x2bdf34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bdf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdf38:
    // 0x2bdf38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bdf38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bdf3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bdf3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdf40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2bdf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdf44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF44u;
        // 0x2bdf48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF4Cu;
    // 0x2bdf4c: 0x0  nop
    ctx->pc = 0x2bdf4cu;
    // NOP
    ctx->pc = 0x2bdf50u;
}
