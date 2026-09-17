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

// Function: sub_002E4AE8
// Address: 0x2e4ae8 - 0x2e4b50
void sub_002E4AE8_0x2e4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4AE8_0x2e4ae8");
#endif

    switch (ctx->pc) {
        case 0x2e4b0cu: goto label_2e4b0c;
        case 0x2e4b2cu: goto label_2e4b2c;
        case 0x2e4b38u: goto label_2e4b38;
        default: break;
    }

    ctx->pc = 0x2e4ae8u;

    // 0x2e4ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4afc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e4afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e4b00: 0x8e11005c  lw          $s1, 0x5C($s0)
    ctx->pc = 0x2e4b00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2e4b04: 0xc0b92d4  jal         func_2E4B50
    ctx->pc = 0x2E4B04u;
    SET_GPR_U32(ctx, 31, 0x2E4B0Cu);
    ctx->pc = 0x2E4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B04u;
    // 0x2e4b08: 0x8e320898  lw          $s2, 0x898($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4B50u, 0x2E4B04u, 0x2E4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B0Cu;
label_2e4b0c:
    // 0x2e4b0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4B0Cu;
    {
        const bool branch_taken_0x2e4b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b0c) {
            ctx->pc = 0x2E4B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4B0Cu;
            // 0x2e4b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4B3Cu;
            goto label_2e4b3c;
        }
    }
    ctx->pc = 0x2E4B14u;
    // 0x2e4b14: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x2e4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2e4b18: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4B18u;
    {
        const bool branch_taken_0x2e4b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b18) {
            ctx->pc = 0x2E4B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4B18u;
            // 0x2e4b1c: 0x8e100054  lw          $s0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4B24u;
            goto label_2e4b24;
        }
    }
    ctx->pc = 0x2E4B20u;
    // 0x2e4b20: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x2e4b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2e4b24:
    // 0x2e4b24: 0xc090f0e  jal         func_243C38
    ctx->pc = 0x2E4B24u;
    SET_GPR_U32(ctx, 31, 0x2E4B2Cu);
    ctx->pc = 0x2E4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B24u;
    // 0x2e4b28: 0x8e2408a4  lw          $a0, 0x8A4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C38u, 0x2E4B24u, 0x2E4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B2Cu;
label_2e4b2c:
    // 0x2e4b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b30: 0xc0c13ee  jal         func_304FB8
    ctx->pc = 0x2E4B30u;
    SET_GPR_U32(ctx, 31, 0x2E4B38u);
    ctx->pc = 0x2E4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B30u;
    // 0x2e4b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304FB8u, 0x2E4B30u, 0x2E4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4b3c:
    // 0x2e4b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4b44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e4b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B48u;
        // 0x2e4b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B50u;
}
