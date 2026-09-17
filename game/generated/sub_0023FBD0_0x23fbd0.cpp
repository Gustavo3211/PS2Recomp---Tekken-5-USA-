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

// Function: sub_0023FBD0
// Address: 0x23fbd0 - 0x23fc38
void sub_0023FBD0_0x23fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FBD0_0x23fbd0");
#endif

    switch (ctx->pc) {
        case 0x23fbf8u: goto label_23fbf8;
        default: break;
    }

    ctx->pc = 0x23fbd0u;

    // 0x23fbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fbd4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23fbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fbdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fbe4: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x23fbe8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x23fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x163590u));
    // 0x23fbec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fbf0: 0xc08fc96  jal         func_23F258
    ctx->pc = 0x23FBF0u;
    SET_GPR_U32(ctx, 31, 0x23FBF8u);
    ctx->pc = 0x23FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBF0u;
    // 0x23fbf4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F258u, 0x23FBF0u, 0x23FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBF8u;
label_23fbf8:
    // 0x23fbf8: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23FBF8u;
    {
        const bool branch_taken_0x23fbf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBF8u;
        // 0x23fbfc: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbf8) {
            ctx->pc = 0x23FC28u;
            goto label_23fc28;
        }
    }
    ctx->pc = 0x23FC00u;
    // 0x23fc00: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23FC00u;
    {
        const bool branch_taken_0x23fc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fc00) {
            ctx->pc = 0x23FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC00u;
            // 0x23fc04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC2Cu;
            goto label_23fc2c;
        }
    }
    ctx->pc = 0x23FC08u;
    // 0x23fc08: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x23fc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x23fc0c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FC0Cu;
    {
        const bool branch_taken_0x23fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc0c) {
            ctx->pc = 0x23FC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC0Cu;
            // 0x23fc10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC2Cu;
            goto label_23fc2c;
        }
    }
    ctx->pc = 0x23FC14u;
    // 0x23fc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fc1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fc20: 0x808fc88  j           func_23F220
    ctx->pc = 0x23FC20u;
    ctx->pc = 0x23FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC20u;
    // 0x23fc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F220u;
    sub_0023F220_0x23f220(rdram, ctx, runtime); return;
    ctx->pc = 0x23FC28u;
label_23fc28:
    // 0x23fc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fc2c:
    // 0x23fc2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fc30: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC30u;
        // 0x23fc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC38u;
}
