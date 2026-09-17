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

// Function: sub_002E0A30
// Address: 0x2e0a30 - 0x2e0aa8
void sub_002E0A30_0x2e0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A30_0x2e0a30");
#endif

    switch (ctx->pc) {
        case 0x2e0a5cu: goto label_2e0a5c;
        case 0x2e0a68u: goto label_2e0a68;
        case 0x2e0a70u: goto label_2e0a70;
        case 0x2e0a78u: goto label_2e0a78;
        case 0x2e0a80u: goto label_2e0a80;
        case 0x2e0a88u: goto label_2e0a88;
        case 0x2e0a94u: goto label_2e0a94;
        default: break;
    }

    ctx->pc = 0x2e0a30u;

    // 0x2e0a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0a40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e0a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0a48: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2e0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2e0a4c: 0x50510012  beql        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E0A4Cu;
    {
        const bool branch_taken_0x2e0a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e0a4c) {
            ctx->pc = 0x2E0A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0A4Cu;
            // 0x2e0a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0A98u;
            goto label_2e0a98;
        }
    }
    ctx->pc = 0x2E0A54u;
    // 0x2e0a54: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2E0A54u;
    SET_GPR_U32(ctx, 31, 0x2E0A5Cu);
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2E0A54u, 0x2E0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A5Cu;
label_2e0a5c:
    // 0x2e0a5c: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x2e0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x2e0a60: 0xc0b81ba  jal         func_2E06E8
    ctx->pc = 0x2E0A60u;
    SET_GPR_U32(ctx, 31, 0x2E0A68u);
    ctx->pc = 0x2E0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A60u;
    // 0x2e0a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E06E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E8u, 0x2E0A60u, 0x2E0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A68u;
label_2e0a68:
    // 0x2e0a68: 0xc0b81de  jal         func_2E0778
    ctx->pc = 0x2E0A68u;
    SET_GPR_U32(ctx, 31, 0x2E0A70u);
    ctx->pc = 0x2E0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A68u;
    // 0x2e0a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0778u, 0x2E0A68u, 0x2E0A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A70u;
label_2e0a70:
    // 0x2e0a70: 0xc0b8204  jal         func_2E0810
    ctx->pc = 0x2E0A70u;
    SET_GPR_U32(ctx, 31, 0x2E0A78u);
    ctx->pc = 0x2E0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A70u;
    // 0x2e0a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0810u, 0x2E0A70u, 0x2E0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A78u;
label_2e0a78:
    // 0x2e0a78: 0xc0b8224  jal         func_2E0890
    ctx->pc = 0x2E0A78u;
    SET_GPR_U32(ctx, 31, 0x2E0A80u);
    ctx->pc = 0x2E0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A78u;
    // 0x2e0a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0890u, 0x2E0A78u, 0x2E0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A80u;
label_2e0a80:
    // 0x2e0a80: 0xc0b8244  jal         func_2E0910
    ctx->pc = 0x2E0A80u;
    SET_GPR_U32(ctx, 31, 0x2E0A88u);
    ctx->pc = 0x2E0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A80u;
    // 0x2e0a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0910u, 0x2E0A80u, 0x2E0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A88u;
label_2e0a88:
    // 0x2e0a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a8c: 0xc0b8268  jal         func_2E09A0
    ctx->pc = 0x2E0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A94u);
    ctx->pc = 0x2E0A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A8Cu;
    // 0x2e0a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09A0u, 0x2E0A8Cu, 0x2E0A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A94u;
label_2e0a94:
    // 0x2e0a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0a98:
    // 0x2e0a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AA0u;
        // 0x2e0aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0AA8u;
}
