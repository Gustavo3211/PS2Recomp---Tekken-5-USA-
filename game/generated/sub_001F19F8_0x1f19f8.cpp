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

// Function: sub_001F19F8
// Address: 0x1f19f8 - 0x1f1a88
void sub_001F19F8_0x1f19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F19F8_0x1f19f8");
#endif

    switch (ctx->pc) {
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a1cu: goto label_1f1a1c;
        default: break;
    }

    ctx->pc = 0x1f19f8u;

    // 0x1f19f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f19f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f19fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f19fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1a00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f1a04: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F1A04u;
    SET_GPR_U32(ctx, 31, 0x1F1A0Cu);
    ctx->pc = 0x1F1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A04u;
    // 0x1f1a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F1A04u, 0x1F1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A0Cu;
label_1f1a0c:
    // 0x1f1a0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1A0Cu;
    {
        const bool branch_taken_0x1f1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A0Cu;
        // 0x1f1a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a0c) {
            ctx->pc = 0x1F1A28u;
            goto label_1f1a28;
        }
    }
    ctx->pc = 0x1F1A14u;
    // 0x1f1a14: 0xc09dc38  jal         func_2770E0
    ctx->pc = 0x1F1A14u;
    SET_GPR_U32(ctx, 31, 0x1F1A1Cu);
    ctx->pc = 0x2770E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770E0u, 0x1F1A14u, 0x1F1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A1Cu;
label_1f1a1c:
    // 0x1f1a1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1A1Cu;
    {
        const bool branch_taken_0x1f1a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A1Cu;
        // 0x1f1a20: 0xa60006a8  sh          $zero, 0x6A8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1704), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a1c) {
            ctx->pc = 0x1F1A74u;
            goto label_1f1a74;
        }
    }
    ctx->pc = 0x1F1A24u;
    // 0x1f1a24: 0x0  nop
    ctx->pc = 0x1f1a24u;
    // NOP
label_1f1a28:
    // 0x1f1a28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1a2c: 0x904383c9  lbu         $v1, -0x7C37($v0)
    ctx->pc = 0x1f1a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83C9u));
    // 0x1f1a30: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1A30u;
    {
        const bool branch_taken_0x1f1a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a30) {
            ctx->pc = 0x1F1A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A30u;
            // 0x1f1a34: 0x8e0206a4  lw          $v0, 0x6A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A48u;
            goto label_1f1a48;
        }
    }
    ctx->pc = 0x1F1A38u;
    // 0x1f1a38: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x1f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x1f1a3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1A3Cu;
    {
        const bool branch_taken_0x1f1a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A3Cu;
        // 0x1f1a40: 0xae02069c  sw          $v0, 0x69C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a3c) {
            ctx->pc = 0x1F1A70u;
            goto label_1f1a70;
        }
    }
    ctx->pc = 0x1F1A44u;
    // 0x1f1a44: 0x0  nop
    ctx->pc = 0x1f1a44u;
    // NOP
label_1f1a48:
    // 0x1f1a48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1A48u;
    {
        const bool branch_taken_0x1f1a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A48u;
        // 0x1f1a4c: 0xae02069c  sw          $v0, 0x69C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a48) {
            ctx->pc = 0x1F1A68u;
            goto label_1f1a68;
        }
    }
    ctx->pc = 0x1F1A50u;
    // 0x1f1a50: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x1f1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x1f1a54: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f1a58: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1A58u;
    {
        const bool branch_taken_0x1f1a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a58) {
            ctx->pc = 0x1F1A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A58u;
            // 0x1f1a5c: 0xa60006a8  sh          $zero, 0x6A8($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1704), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A74u;
            goto label_1f1a74;
        }
    }
    ctx->pc = 0x1F1A60u;
    // 0x1f1a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1A60u;
    {
        const bool branch_taken_0x1f1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A60u;
        // 0x1f1a64: 0xae03069c  sw          $v1, 0x69C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a60) {
            ctx->pc = 0x1F1A70u;
            goto label_1f1a70;
        }
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x1f1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x1f1a6c: 0xae03069c  sw          $v1, 0x69C($s0)
    ctx->pc = 0x1f1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 3));
label_1f1a70:
    // 0x1f1a70: 0xa60006a8  sh          $zero, 0x6A8($s0)
    ctx->pc = 0x1f1a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1704), (uint16_t)GPR_U32(ctx, 0));
label_1f1a74:
    // 0x1f1a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f1a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A7Cu;
        // 0x1f1a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1A84u;
    // 0x1f1a84: 0x0  nop
    ctx->pc = 0x1f1a84u;
    // NOP
    ctx->pc = 0x1f1a88u;
}
