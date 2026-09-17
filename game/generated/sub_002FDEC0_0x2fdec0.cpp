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

// Function: sub_002FDEC0
// Address: 0x2fdec0 - 0x2fdf38
void sub_002FDEC0_0x2fdec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDEC0_0x2fdec0");
#endif

    switch (ctx->pc) {
        case 0x2fdefcu: goto label_2fdefc;
        case 0x2fdf1cu: goto label_2fdf1c;
        default: break;
    }

    ctx->pc = 0x2fdec0u;

label_2fdec0:
    // 0x2fdec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fded0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fded4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fded4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fded8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdedc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2fdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdee0: 0x10710010  beq         $v1, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FDEE0u;
    {
        const bool branch_taken_0x2fdee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2FDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEE0u;
        // 0x2fdee4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdee0) {
            ctx->pc = 0x2FDF24u;
            goto label_2fdf24;
        }
    }
    ctx->pc = 0x2FDEE8u;
    // 0x2fdee8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2fdeec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDEECu;
    {
        const bool branch_taken_0x2fdeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEECu;
        // 0x2fdef0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdeec) {
            ctx->pc = 0x2FDF00u;
            goto label_2fdf00;
        }
    }
    ctx->pc = 0x2FDEF4u;
    // 0x2fdef4: 0xc0bf7b0  jal         func_2FDEC0
    ctx->pc = 0x2FDEF4u;
    SET_GPR_U32(ctx, 31, 0x2FDEFCu);
    ctx->pc = 0x2FDEC0u;
    goto label_2fdec0;
    ctx->pc = 0x2FDEFCu;
label_2fdefc:
    // 0x2fdefc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fdefcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf00:
    // 0x2fdf00: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDF00u;
    {
        const bool branch_taken_0x2fdf00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF00u;
        // 0x2fdf04: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf00) {
            ctx->pc = 0x2FDF24u;
            goto label_2fdf24;
        }
    }
    ctx->pc = 0x2FDF08u;
    // 0x2fdf08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fdf0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF0Cu;
    {
        const bool branch_taken_0x2fdf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF0Cu;
        // 0x2fdf10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf0c) {
            ctx->pc = 0x2FDF20u;
            goto label_2fdf20;
        }
    }
    ctx->pc = 0x2FDF14u;
    // 0x2fdf14: 0xc0bf7b0  jal         func_2FDEC0
    ctx->pc = 0x2FDF14u;
    SET_GPR_U32(ctx, 31, 0x2FDF1Cu);
    ctx->pc = 0x2FDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF14u;
    // 0x2fdf18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDEC0u;
    goto label_2fdec0;
    ctx->pc = 0x2FDF1Cu;
label_2fdf1c:
    // 0x2fdf1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fdf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf20:
    // 0x2fdf20: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2fdf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf24:
    // 0x2fdf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fdf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fdf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdf2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdf30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF30u;
        // 0x2fdf34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF38u;
}
