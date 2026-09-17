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

// Function: sub_004A9A78
// Address: 0x4a9a78 - 0x4a9b10
void sub_004A9A78_0x4a9a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9A78_0x4a9a78");
#endif

    switch (ctx->pc) {
        case 0x4a9ac8u: goto label_4a9ac8;
        case 0x4a9ad0u: goto label_4a9ad0;
        case 0x4a9ad8u: goto label_4a9ad8;
        case 0x4a9ae0u: goto label_4a9ae0;
        case 0x4a9ae8u: goto label_4a9ae8;
        case 0x4a9af0u: goto label_4a9af0;
        case 0x4a9af8u: goto label_4a9af8;
        case 0x4a9b00u: goto label_4a9b00;
        default: break;
    }

    ctx->pc = 0x4a9a78u;

    // 0x4a9a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a9a7c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a9a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9a84: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x4a9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x4a9a88: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x4a9a88u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D60Eu));
    // 0x4a9a8c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9A8Cu;
    {
        const bool branch_taken_0x4a9a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a8c) {
            ctx->pc = 0x4A9A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9A8Cu;
            // 0x4a9a90: 0x94420040  lhu         $v0, 0x40($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9AA0u;
            goto label_4a9aa0;
        }
    }
    ctx->pc = 0x4A9A94u;
    // 0x4a9a94: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a9a98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A9A98u;
    {
        const bool branch_taken_0x4a9a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A98u;
        // 0x4a9a9c: 0xa440d6fa  sh          $zero, -0x2906($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956794), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a98) {
            ctx->pc = 0x4A9AC0u;
            goto label_4a9ac0;
        }
    }
    ctx->pc = 0x4A9AA0u;
label_4a9aa0:
    // 0x4a9aa0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a9aa4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4a9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a9aa8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9AA8u;
    {
        const bool branch_taken_0x4a9aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AA8u;
        // 0x4a9aac: 0xa462d6fa  sh          $v0, -0x2906($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956794), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9aa8) {
            ctx->pc = 0x4A9AC0u;
            goto label_4a9ac0;
        }
    }
    ctx->pc = 0x4A9AB0u;
    // 0x4a9ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9ab4: 0x812a696  j           func_4A9A58
    ctx->pc = 0x4A9AB4u;
    ctx->pc = 0x4A9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9AB4u;
    // 0x4a9ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9A58u;
    sub_004A9A58_0x4a9a58(rdram, ctx, runtime); return;
    ctx->pc = 0x4A9ABCu;
    // 0x4a9abc: 0x0  nop
    ctx->pc = 0x4a9abcu;
    // NOP
label_4a9ac0:
    // 0x4a9ac0: 0xc124034  jal         func_4900D0
    ctx->pc = 0x4A9AC0u;
    SET_GPR_U32(ctx, 31, 0x4A9AC8u);
    ctx->pc = 0x4900D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4900D0u, 0x4A9AC0u, 0x4A9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AC8u;
label_4a9ac8:
    // 0x4a9ac8: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x4A9AC8u;
    SET_GPR_U32(ctx, 31, 0x4A9AD0u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x4A9AC8u, 0x4A9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AD0u;
label_4a9ad0:
    // 0x4a9ad0: 0xc124642  jal         func_491908
    ctx->pc = 0x4A9AD0u;
    SET_GPR_U32(ctx, 31, 0x4A9AD8u);
    ctx->pc = 0x491908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491908u, 0x4A9AD0u, 0x4A9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AD8u;
label_4a9ad8:
    // 0x4a9ad8: 0xc128048  jal         func_4A0120
    ctx->pc = 0x4A9AD8u;
    SET_GPR_U32(ctx, 31, 0x4A9AE0u);
    ctx->pc = 0x4A0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0120u, 0x4A9AD8u, 0x4A9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AE0u;
label_4a9ae0:
    // 0x4a9ae0: 0xc126c98  jal         func_49B260
    ctx->pc = 0x4A9AE0u;
    SET_GPR_U32(ctx, 31, 0x4A9AE8u);
    ctx->pc = 0x49B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B260u, 0x4A9AE0u, 0x4A9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AE8u;
label_4a9ae8:
    // 0x4a9ae8: 0xc125e26  jal         func_497898
    ctx->pc = 0x4A9AE8u;
    SET_GPR_U32(ctx, 31, 0x4A9AF0u);
    ctx->pc = 0x497898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497898u, 0x4A9AE8u, 0x4A9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AF0u;
label_4a9af0:
    // 0x4a9af0: 0xc12977e  jal         func_4A5DF8
    ctx->pc = 0x4A9AF0u;
    SET_GPR_U32(ctx, 31, 0x4A9AF8u);
    ctx->pc = 0x4A5DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DF8u, 0x4A9AF0u, 0x4A9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AF8u;
label_4a9af8:
    // 0x4a9af8: 0xc12bd48  jal         func_4AF520
    ctx->pc = 0x4A9AF8u;
    SET_GPR_U32(ctx, 31, 0x4A9B00u);
    ctx->pc = 0x4AF520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF520u, 0x4A9AF8u, 0x4A9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9B00u;
label_4a9b00:
    // 0x4a9b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9b04: 0x812b4d6  j           func_4AD358
    ctx->pc = 0x4A9B04u;
    ctx->pc = 0x4A9B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9B04u;
    // 0x4a9b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD358u, 0x4A9B04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A9B0Cu;
    // 0x4a9b0c: 0x0  nop
    ctx->pc = 0x4a9b0cu;
    // NOP
    ctx->pc = 0x4a9b10u;
}
