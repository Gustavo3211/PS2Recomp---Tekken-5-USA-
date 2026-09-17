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

// Function: sub_002246E8
// Address: 0x2246e8 - 0x224758
void sub_002246E8_0x2246e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002246E8_0x2246e8");
#endif

    switch (ctx->pc) {
        case 0x224704u: goto label_224704;
        case 0x224728u: goto label_224728;
        default: break;
    }

    ctx->pc = 0x2246e8u;

    // 0x2246e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2246ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2246ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2246f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2246f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2246f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2246f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2246fc: 0xc089192  jal         func_224648
    ctx->pc = 0x2246FCu;
    SET_GPR_U32(ctx, 31, 0x224704u);
    ctx->pc = 0x224700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246FCu;
    // 0x224700: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224648u, 0x2246FCu, 0x224704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224704u;
label_224704:
    // 0x224704: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224704) {
            ctx->pc = 0x224708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224704u;
            // 0x224708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224744u;
            goto label_224744;
        }
    }
    ctx->pc = 0x22470Cu;
    // 0x22470c: 0x8e020800  lw          $v0, 0x800($s0)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2048)));
    // 0x224710: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x224710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x224714: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x224714u;
    {
        const bool branch_taken_0x224714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224714) {
            ctx->pc = 0x224718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224714u;
            // 0x224718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224744u;
            goto label_224744;
        }
    }
    ctx->pc = 0x22471Cu;
    // 0x22471c: 0x8e0407f8  lw          $a0, 0x7F8($s0)
    ctx->pc = 0x22471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2040)));
    // 0x224720: 0xc08918e  jal         func_224638
    ctx->pc = 0x224720u;
    SET_GPR_U32(ctx, 31, 0x224728u);
    ctx->pc = 0x224724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224720u;
    // 0x224724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224638u, 0x224720u, 0x224728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224728u;
label_224728:
    // 0x224728: 0x8e020800  lw          $v0, 0x800($s0)
    ctx->pc = 0x224728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2048)));
    // 0x22472c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224730: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x224734: 0xae020800  sw          $v0, 0x800($s0)
    ctx->pc = 0x224734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 2));
    // 0x224738: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x224738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22473c: 0xae0307f8  sw          $v1, 0x7F8($s0)
    ctx->pc = 0x22473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 3));
    // 0x224740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224744:
    // 0x224744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22474c: 0x3e00008  jr          $ra
    ctx->pc = 0x22474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22474Cu;
        // 0x224750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224754u;
    // 0x224754: 0x0  nop
    ctx->pc = 0x224754u;
    // NOP
    ctx->pc = 0x224758u;
}
