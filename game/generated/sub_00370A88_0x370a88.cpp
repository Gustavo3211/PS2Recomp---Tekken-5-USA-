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

// Function: sub_00370A88
// Address: 0x370a88 - 0x370b30
void sub_00370A88_0x370a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A88_0x370a88");
#endif

    switch (ctx->pc) {
        case 0x370aacu: goto label_370aac;
        case 0x370ac4u: goto label_370ac4;
        default: break;
    }

    ctx->pc = 0x370a88u;

    // 0x370a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370a8c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370a94: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x370a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x370a98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370a98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7470u));
    // 0x370a9c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370A9Cu;
    {
        const bool branch_taken_0x370a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A9Cu;
        // 0x370aa0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a9c) {
            ctx->pc = 0x370AC4u;
            goto label_370ac4;
        }
    }
    ctx->pc = 0x370AA4u;
    // 0x370aa4: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370AA4u;
    SET_GPR_U32(ctx, 31, 0x370AACu);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370AA4u, 0x370AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AACu;
label_370aac:
    // 0x370aac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370ab0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370ab4: 0x24a50b40  addiu       $a1, $a1, 0xB40
    ctx->pc = 0x370ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
    // 0x370ab8: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x370abc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370ABCu;
    SET_GPR_U32(ctx, 31, 0x370AC4u);
    ctx->pc = 0x370AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370ABCu;
    // 0x370ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370ABCu, 0x370AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AC4u;
label_370ac4:
    // 0x370ac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x370AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AD0u;
        // 0x370ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370AD8u;
    // 0x370ad8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370adc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x370adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370ae0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370ae4: 0x24890110  addiu       $t1, $a0, 0x110
    ctx->pc = 0x370ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x370ae8: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370aec: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x370af0: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x370af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370af4: 0x24c6f340  addiu       $a2, $a2, -0xCC0
    ctx->pc = 0x370af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964032));
    // 0x370af8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370afc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x370b00: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x370b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370b04: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370b08: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370b08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370b0c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x370b10: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x370b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x370b14: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x370b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x370b18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370b1c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x370b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x370b20: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x370b20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x370b24: 0x3e00008  jr          $ra
    ctx->pc = 0x370B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B24u;
        // 0x370b28: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370B2Cu;
    // 0x370b2c: 0x0  nop
    ctx->pc = 0x370b2cu;
    // NOP
    ctx->pc = 0x370b30u;
}
