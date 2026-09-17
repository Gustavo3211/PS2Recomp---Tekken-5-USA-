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

// Function: sub_003709B8
// Address: 0x3709b8 - 0x370a50
void sub_003709B8_0x3709b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003709B8_0x3709b8");
#endif

    switch (ctx->pc) {
        case 0x3709dcu: goto label_3709dc;
        case 0x3709f4u: goto label_3709f4;
        default: break;
    }

    ctx->pc = 0x3709b8u;

    // 0x3709b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3709b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3709bc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3709bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3709c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3709c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3709c4: 0x245074c0  addiu       $s0, $v0, 0x74C0
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x3709c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3709c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74C0u));
    // 0x3709cc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3709CCu;
    {
        const bool branch_taken_0x3709cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3709D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709CCu;
        // 0x3709d0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709cc) {
            ctx->pc = 0x3709F4u;
            goto label_3709f4;
        }
    }
    ctx->pc = 0x3709D4u;
    // 0x3709d4: 0xc0dc23a  jal         func_3708E8
    ctx->pc = 0x3709D4u;
    SET_GPR_U32(ctx, 31, 0x3709DCu);
    ctx->pc = 0x3708E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3708E8u, 0x3709D4u, 0x3709DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709DCu;
label_3709dc:
    // 0x3709dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3709dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3709e0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3709e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3709e4: 0x24a50b20  addiu       $a1, $a1, 0xB20
    ctx->pc = 0x3709e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2848));
    // 0x3709e8: 0x24c674a0  addiu       $a2, $a2, 0x74A0
    ctx->pc = 0x3709e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x3709ec: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3709ECu;
    SET_GPR_U32(ctx, 31, 0x3709F4u);
    ctx->pc = 0x3709F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709ECu;
    // 0x3709f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3709ECu, 0x3709F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709F4u;
label_3709f4:
    // 0x3709f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3709f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3709f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3709fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370a00: 0x3e00008  jr          $ra
    ctx->pc = 0x370A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A00u;
        // 0x370a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A08u;
    // 0x370a08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370a0c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x370a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370a10: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370a14: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370a18: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x370a1c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x370a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370a20: 0x24c6f408  addiu       $a2, $a2, -0xBF8
    ctx->pc = 0x370a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964232));
    // 0x370a24: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370a28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x370a2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x370a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370a30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370a34: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370a34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370a38: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370a38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x370a3c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x370a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x370a40: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x370a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x370a44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370a48: 0x3e00008  jr          $ra
    ctx->pc = 0x370A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A48u;
        // 0x370a4c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A50u;
}
