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

// Function: sub_004DF5B0
// Address: 0x4df5b0 - 0x4df640
void sub_004DF5B0_0x4df5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF5B0_0x4df5b0");
#endif

    switch (ctx->pc) {
        case 0x4df5c4u: goto label_4df5c4;
        case 0x4df5d8u: goto label_4df5d8;
        case 0x4df608u: goto label_4df608;
        case 0x4df610u: goto label_4df610;
        case 0x4df618u: goto label_4df618;
        default: break;
    }

    ctx->pc = 0x4df5b0u;

    // 0x4df5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4df5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4df5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4df5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4df5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4df5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4df5bc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4DF5BCu;
    SET_GPR_U32(ctx, 31, 0x4DF5C4u);
    ctx->pc = 0x4DF5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF5BCu;
    // 0x4df5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4DF5BCu, 0x4DF5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF5C4u;
label_4df5c4:
    // 0x4df5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4df5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df5c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4DF5C8u;
    {
        const bool branch_taken_0x4df5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5C8u;
        // 0x4df5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df5c8) {
            ctx->pc = 0x4DF630u;
            goto label_4df630;
        }
    }
    ctx->pc = 0x4DF5D0u;
    // 0x4df5d0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DF5D0u;
    SET_GPR_U32(ctx, 31, 0x4DF5D8u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DF5D0u, 0x4DF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF5D8u;
label_4df5d8:
    // 0x4df5d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4df5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4df5dc: 0x2465d680  addiu       $a1, $v1, -0x2980
    ctx->pc = 0x4df5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4df5e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4DF5E0u;
    {
        const bool branch_taken_0x4df5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF5E0u;
        // 0x4df5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df5e0) {
            ctx->pc = 0x4DF630u;
            goto label_4df630;
        }
    }
    ctx->pc = 0x4DF5E8u;
    // 0x4df5e8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4df5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4df5ec: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4df5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4df5f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4df5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4df5f4: 0xa4a2232e  sh          $v0, 0x232E($a1)
    ctx->pc = 0x4df5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df5f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4df5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4df5fc: 0xa4a323c4  sh          $v1, 0x23C4($a1)
    ctx->pc = 0x4df5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4df600: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4DF600u;
    SET_GPR_U32(ctx, 31, 0x4DF608u);
    ctx->pc = 0x4DF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF600u;
    // 0x4df604: 0xa4a2232c  sh          $v0, 0x232C($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4DF600u, 0x4DF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF608u;
label_4df608:
    // 0x4df608: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4DF608u;
    SET_GPR_U32(ctx, 31, 0x4DF610u);
    ctx->pc = 0x4DF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF608u;
    // 0x4df60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4DF608u, 0x4DF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF610u;
label_4df610:
    // 0x4df610: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DF610u;
    SET_GPR_U32(ctx, 31, 0x4DF618u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DF610u, 0x4DF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF618u;
label_4df618:
    // 0x4df618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4df618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4df61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4df61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df624: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DF624u;
    ctx->pc = 0x4DF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF624u;
    // 0x4df628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF62Cu;
    // 0x4df62c: 0x0  nop
    ctx->pc = 0x4df62cu;
    // NOP
label_4df630:
    // 0x4df630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4df634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4df638: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF638u;
        // 0x4df63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF640u;
}
