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

// Function: sub_00209068
// Address: 0x209068 - 0x209130
void sub_00209068_0x209068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209068_0x209068");
#endif

    switch (ctx->pc) {
        case 0x209088u: goto label_209088;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090f4u: goto label_2090f4;
        case 0x209100u: goto label_209100;
        case 0x209114u: goto label_209114;
        default: break;
    }

    ctx->pc = 0x209068u;

    // 0x209068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20906c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209078: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x209078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20907c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209080: 0xc0821d0  jal         func_208740
    ctx->pc = 0x209080u;
    SET_GPR_U32(ctx, 31, 0x209088u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x209080u, 0x209088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209088u;
label_209088:
    // 0x209088: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x209088u;
    {
        const bool branch_taken_0x209088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209088u;
        // 0x20908c: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209088) {
            ctx->pc = 0x209114u;
            goto label_209114;
        }
    }
    ctx->pc = 0x209090u;
    // 0x209090: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x209090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x209094: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209094u;
    {
        const bool branch_taken_0x209094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209094u;
        // 0x209098: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209094) {
            ctx->pc = 0x2090B0u;
            goto label_2090b0;
        }
    }
    ctx->pc = 0x20909Cu;
    // 0x20909c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20909Cu;
    SET_GPR_U32(ctx, 31, 0x2090A4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20909Cu, 0x2090A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090A4u;
label_2090a4:
    // 0x2090a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2090a8: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2090A8u;
    {
        const bool branch_taken_0x2090a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A8u;
        // 0x2090ac: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090a8) {
            ctx->pc = 0x209114u;
            goto label_209114;
        }
    }
    ctx->pc = 0x2090B0u;
label_2090b0:
    // 0x2090b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2090b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090b4: 0x24538858  addiu       $s3, $v0, -0x77A8
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2090b8: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2090b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2090bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2090bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2090c0:
    // 0x2090c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2090c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090c4: 0xc086f46  jal         func_21BD18
    ctx->pc = 0x2090C4u;
    SET_GPR_U32(ctx, 31, 0x2090CCu);
    ctx->pc = 0x2090C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090C4u;
    // 0x2090c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD18u, 0x2090C4u, 0x2090CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090CCu;
label_2090cc:
    // 0x2090cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2090ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2090d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090d4: 0xc085048  jal         func_214120
    ctx->pc = 0x2090D4u;
    SET_GPR_U32(ctx, 31, 0x2090DCu);
    ctx->pc = 0x2090D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090D4u;
    // 0x2090d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214120u, 0x2090D4u, 0x2090DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090DCu;
label_2090dc:
    // 0x2090dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2090dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2090e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2090E4u;
    {
        const bool branch_taken_0x2090e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E4u;
        // 0x2090e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090e4) {
            ctx->pc = 0x209100u;
            goto label_209100;
        }
    }
    ctx->pc = 0x2090ECu;
    // 0x2090ec: 0xc0823f0  jal         func_208FC0
    ctx->pc = 0x2090ECu;
    SET_GPR_U32(ctx, 31, 0x2090F4u);
    ctx->pc = 0x208FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208FC0u, 0x2090ECu, 0x2090F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090F4u;
label_2090f4:
    // 0x2090f4: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x2090f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
    // 0x2090f8: 0xc07e23e  jal         func_1F88F8
    ctx->pc = 0x2090F8u;
    SET_GPR_U32(ctx, 31, 0x209100u);
    ctx->pc = 0x2090FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090F8u;
    // 0x2090fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88F8u, 0x2090F8u, 0x209100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209100u;
label_209100:
    // 0x209100: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x209100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x209104: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x209104u;
    {
        const bool branch_taken_0x209104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209104) {
            ctx->pc = 0x209108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209104u;
            // 0x209108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2090c0;
        }
    }
    ctx->pc = 0x20910Cu;
    // 0x20910c: 0xc086f92  jal         func_21BE48
    ctx->pc = 0x20910Cu;
    SET_GPR_U32(ctx, 31, 0x209114u);
    ctx->pc = 0x21BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE48u, 0x20910Cu, 0x209114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209114u;
label_209114:
    // 0x209114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20911c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20911cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209120: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209128: 0x3e00008  jr          $ra
    ctx->pc = 0x209128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209128u;
        // 0x20912c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209130u;
}
