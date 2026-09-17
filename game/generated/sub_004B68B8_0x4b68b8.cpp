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

// Function: sub_004B68B8
// Address: 0x4b68b8 - 0x4b6918
void sub_004B68B8_0x4b68b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B68B8_0x4b68b8");
#endif

    switch (ctx->pc) {
        case 0x4b68ccu: goto label_4b68cc;
        case 0x4b68d4u: goto label_4b68d4;
        case 0x4b68e4u: goto label_4b68e4;
        case 0x4b68ecu: goto label_4b68ec;
        case 0x4b68f4u: goto label_4b68f4;
        default: break;
    }

    ctx->pc = 0x4b68b8u;

    // 0x4b68b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b68b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b68bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b68c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b68c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b68c4: 0xc12da06  jal         func_4B6818
    ctx->pc = 0x4B68C4u;
    SET_GPR_U32(ctx, 31, 0x4B68CCu);
    ctx->pc = 0x4B68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B68C4u;
    // 0x4b68c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6818u, 0x4B68C4u, 0x4B68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68CCu;
label_4b68cc:
    // 0x4b68cc: 0xc12dce0  jal         func_4B7380
    ctx->pc = 0x4B68CCu;
    SET_GPR_U32(ctx, 31, 0x4B68D4u);
    ctx->pc = 0x4B68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B68CCu;
    // 0x4b68d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7380u, 0x4B68CCu, 0x4B68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68D4u;
label_4b68d4:
    // 0x4b68d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B68D4u;
    {
        const bool branch_taken_0x4b68d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B68D4u;
        // 0x4b68d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b68d4) {
            ctx->pc = 0x4B6908u;
            goto label_4b6908;
        }
    }
    ctx->pc = 0x4B68DCu;
    // 0x4b68dc: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B68DCu;
    SET_GPR_U32(ctx, 31, 0x4B68E4u);
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B68DCu, 0x4B68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68E4u;
label_4b68e4:
    // 0x4b68e4: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B68E4u;
    SET_GPR_U32(ctx, 31, 0x4B68ECu);
    ctx->pc = 0x4B68E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B68E4u;
    // 0x4b68e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B68E4u, 0x4B68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68ECu;
label_4b68ec:
    // 0x4b68ec: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B68ECu;
    SET_GPR_U32(ctx, 31, 0x4B68F4u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B68ECu, 0x4B68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68F4u;
label_4b68f4:
    // 0x4b68f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b68f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b68f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b68fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b68fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6900: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B6900u;
    ctx->pc = 0x4B6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6900u;
    // 0x4b6904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B6908u;
label_4b6908:
    // 0x4b6908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b690c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b6910: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6910u;
        // 0x4b6914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6918u;
}
