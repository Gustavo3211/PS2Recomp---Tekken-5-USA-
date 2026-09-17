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

// Function: sub_00512070
// Address: 0x512070 - 0x512118
void sub_00512070_0x512070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512070_0x512070");
#endif

    switch (ctx->pc) {
        case 0x512094u: goto label_512094;
        case 0x5120e8u: goto label_5120e8;
        default: break;
    }

    ctx->pc = 0x512070u;

    // 0x512070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x512070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x512074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x512078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x512078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51207c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x51207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x512080: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x512080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512088: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x512088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x51208c: 0xc13e73a  jal         func_4F9CE8
    ctx->pc = 0x51208Cu;
    SET_GPR_U32(ctx, 31, 0x512094u);
    ctx->pc = 0x512090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51208Cu;
    // 0x512090: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CE8u, 0x51208Cu, 0x512094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512094u;
label_512094:
    // 0x512094: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x512094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x512098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x512098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51209c: 0x8483f0f8  lh          $v1, -0xF08($a0)
    ctx->pc = 0x51209cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8FF0F8u));
    // 0x5120a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5120A0u;
    {
        const bool branch_taken_0x5120a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5120A0u;
        // 0x5120a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5120a0) {
            ctx->pc = 0x5120C8u;
            goto label_5120c8;
        }
    }
    ctx->pc = 0x5120A8u;
    // 0x5120a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5120a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5120ac: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x5120acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5120b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x5120b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x5120b4: 0x2863007f  slti        $v1, $v1, 0x7F
    ctx->pc = 0x5120b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x5120b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5120B8u;
    {
        const bool branch_taken_0x5120b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5120b8) {
            ctx->pc = 0x5120E0u;
            goto label_5120e0;
        }
    }
    ctx->pc = 0x5120C0u;
    // 0x5120c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x5120C0u;
    {
        const bool branch_taken_0x5120c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5120C0u;
        // 0x5120c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5120c0) {
            ctx->pc = 0x512104u;
            goto label_512104;
        }
    }
    ctx->pc = 0x5120C8u;
label_5120c8:
    // 0x5120c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5120c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5120cc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x5120ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5120d0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x5120d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x5120d4: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x5120d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x5120d8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x5120D8u;
    {
        const bool branch_taken_0x5120d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5120d8) {
            ctx->pc = 0x5120DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5120D8u;
            // 0x5120dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x512104u;
            goto label_512104;
        }
    }
    ctx->pc = 0x5120E0u;
label_5120e0:
    // 0x5120e0: 0xc13e736  jal         func_4F9CD8
    ctx->pc = 0x5120E0u;
    SET_GPR_U32(ctx, 31, 0x5120E8u);
    ctx->pc = 0x4F9CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CD8u, 0x5120E0u, 0x5120E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5120E8u;
label_5120e8:
    // 0x5120e8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x5120e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x5120ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5120f0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x5120f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x5120f4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x5120f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x5120f8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x5120f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x5120fc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x5120fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x512100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_512104:
    // 0x512104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x512108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51210c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x51210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x512110: 0x3e00008  jr          $ra
    ctx->pc = 0x512110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512110u;
        // 0x512114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512118u;
}
