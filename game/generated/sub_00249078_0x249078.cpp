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

// Function: sub_00249078
// Address: 0x249078 - 0x2490d8
void sub_00249078_0x249078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249078_0x249078");
#endif

    switch (ctx->pc) {
        case 0x249094u: goto label_249094;
        case 0x2490a0u: goto label_2490a0;
        case 0x2490acu: goto label_2490ac;
        case 0x2490bcu: goto label_2490bc;
        case 0x2490d0u: goto label_2490d0;
        default: break;
    }

    ctx->pc = 0x249078u;

    // 0x249078: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x249078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x24907c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x24907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x249080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249084: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x249084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x249088: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x249088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x24908c: 0xc092418  jal         func_249060
    ctx->pc = 0x24908Cu;
    SET_GPR_U32(ctx, 31, 0x249094u);
    ctx->pc = 0x249090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24908Cu;
    // 0x249090: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249060u, 0x24908Cu, 0x249094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249094u;
label_249094:
    // 0x249094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249098: 0xc08ff6e  jal         func_23FDB8
    ctx->pc = 0x249098u;
    SET_GPR_U32(ctx, 31, 0x2490A0u);
    ctx->pc = 0x24909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249098u;
    // 0x24909c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FDB8u, 0x249098u, 0x2490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490A0u;
label_2490a0:
    // 0x2490a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2490a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490a4: 0xc0d686e  jal         func_35A1B8
    ctx->pc = 0x2490A4u;
    SET_GPR_U32(ctx, 31, 0x2490ACu);
    ctx->pc = 0x2490A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490A4u;
    // 0x2490a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1B8u, 0x2490A4u, 0x2490ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490ACu;
label_2490ac:
    // 0x2490ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2490acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2490b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490b4: 0xc0d67ea  jal         func_359FA8
    ctx->pc = 0x2490B4u;
    SET_GPR_U32(ctx, 31, 0x2490BCu);
    ctx->pc = 0x2490B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490B4u;
    // 0x2490b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359FA8u, 0x2490B4u, 0x2490BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490BCu;
label_2490bc:
    // 0x2490bc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2490bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2490c0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2490c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2490c4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2490c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2490C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2490CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490C8u;
        // 0x2490cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2490D0u;
label_2490d0:
    // 0x2490d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2490D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2490D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490D0u;
        // 0x2490d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2490D8u;
}
