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

// Function: sub_002EA980
// Address: 0x2ea980 - 0x2eaa20
void sub_002EA980_0x2ea980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA980_0x2ea980");
#endif

    switch (ctx->pc) {
        case 0x2ea994u: goto label_2ea994;
        case 0x2eaa0cu: goto label_2eaa0c;
        default: break;
    }

    ctx->pc = 0x2ea980u;

    // 0x2ea980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea984: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ea984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ea988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ea988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ea98c: 0xc0bbebc  jal         func_2EFAF0
    ctx->pc = 0x2EA98Cu;
    SET_GPR_U32(ctx, 31, 0x2EA994u);
    ctx->pc = 0x2EA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA98Cu;
    // 0x2ea990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFAF0u, 0x2EA98Cu, 0x2EA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA994u;
label_2ea994:
    // 0x2ea994: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2ea994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2ea998: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ea998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ea99c: 0x3c0c0008  lui         $t4, 0x8
    ctx->pc = 0x2ea99cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9a0: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9a4: 0x3c0e0008  lui         $t6, 0x8
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9a8: 0x3c0f0008  lui         $t7, 0x8
    ctx->pc = 0x2ea9a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9ac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9b0: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9b4: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x2ea9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9b8: 0x3c0a0008  lui         $t2, 0x8
    ctx->pc = 0x2ea9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9bc: 0x3c0b0008  lui         $t3, 0x8
    ctx->pc = 0x2ea9bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8 << 16));
    // 0x2ea9c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea9c4: 0x248406b0  addiu       $a0, $a0, 0x6B0
    ctx->pc = 0x2ea9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1712));
    // 0x2ea9c8: 0x358c0094  ori         $t4, $t4, 0x94
    ctx->pc = 0x2ea9c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)148);
    // 0x2ea9cc: 0x35ad0095  ori         $t5, $t5, 0x95
    ctx->pc = 0x2ea9ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)149);
    // 0x2ea9d0: 0x35ce008d  ori         $t6, $t6, 0x8D
    ctx->pc = 0x2ea9d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)141);
    // 0x2ea9d4: 0x35ef008e  ori         $t7, $t7, 0x8E
    ctx->pc = 0x2ea9d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)142);
    // 0x2ea9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea9e0: 0x34e7008f  ori         $a3, $a3, 0x8F
    ctx->pc = 0x2ea9e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)143);
    // 0x2ea9e4: 0x35080090  ori         $t0, $t0, 0x90
    ctx->pc = 0x2ea9e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)144);
    // 0x2ea9e8: 0x35290091  ori         $t1, $t1, 0x91
    ctx->pc = 0x2ea9e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)145);
    // 0x2ea9ec: 0x354a0092  ori         $t2, $t2, 0x92
    ctx->pc = 0x2ea9ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)146);
    // 0x2ea9f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA9F0u;
    {
        const bool branch_taken_0x2ea9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9F0u;
        // 0x2ea9f4: 0x356b0093  ori         $t3, $t3, 0x93 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)147);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9f0) {
            ctx->pc = 0x2EAA0Cu;
            goto label_2eaa0c;
        }
    }
    ctx->pc = 0x2EA9F8u;
    // 0x2ea9f8: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2ea9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2ea9fc: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x2ea9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x2eaa00: 0xafae0010  sw          $t6, 0x10($sp)
    ctx->pc = 0x2eaa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 14));
    // 0x2eaa04: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2EAA04u;
    SET_GPR_U32(ctx, 31, 0x2EAA0Cu);
    ctx->pc = 0x2EAA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA04u;
    // 0x2eaa08: 0xafaf0018  sw          $t7, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EAA04u, 0x2EAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA0Cu;
label_2eaa0c:
    // 0x2eaa0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2eaa0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaa10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2eaa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eaa14: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA14u;
        // 0x2eaa18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAA1Cu;
    // 0x2eaa1c: 0x0  nop
    ctx->pc = 0x2eaa1cu;
    // NOP
    ctx->pc = 0x2eaa20u;
}
