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

// Function: sub_002E8C58
// Address: 0x2e8c58 - 0x2e8cf8
void sub_002E8C58_0x2e8c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8C58_0x2e8c58");
#endif

    switch (ctx->pc) {
        case 0x2e8c78u: goto label_2e8c78;
        case 0x2e8c90u: goto label_2e8c90;
        case 0x2e8ca4u: goto label_2e8ca4;
        case 0x2e8ce0u: goto label_2e8ce0;
        default: break;
    }

    ctx->pc = 0x2e8c58u;

    // 0x2e8c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e8c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e8c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e8c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e8c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8c6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e8c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e8c70: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E8C70u;
    SET_GPR_U32(ctx, 31, 0x2E8C78u);
    ctx->pc = 0x2E8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C70u;
    // 0x2e8c74: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E8C70u, 0x2E8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C78u;
label_2e8c78:
    // 0x2e8c78: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e8c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c80: 0x2463fde8  addiu       $v1, $v1, -0x218
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966760));
    // 0x2e8c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c88: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E8C88u;
    SET_GPR_U32(ctx, 31, 0x2E8C90u);
    ctx->pc = 0x2E8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C88u;
    // 0x2e8c8c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E8C88u, 0x2E8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C90u;
label_2e8c90:
    // 0x2e8c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e8c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c9c: 0xc0b9dca  jal         func_2E7728
    ctx->pc = 0x2E8C9Cu;
    SET_GPR_U32(ctx, 31, 0x2E8CA4u);
    ctx->pc = 0x2E8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C9Cu;
    // 0x2e8ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7728u, 0x2E8C9Cu, 0x2E8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CA4u;
label_2e8ca4:
    // 0x2e8ca4: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2e8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2e8ca8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e8cac: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2e8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2e8cb0: 0x24630630  addiu       $v1, $v1, 0x630
    ctx->pc = 0x2e8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x2e8cb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e8cb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e8cbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8CBCu;
    {
        const bool branch_taken_0x2e8cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CBCu;
        // 0x2e8cc0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cbc) {
            ctx->pc = 0x2E8CE0u;
            goto label_2e8ce0;
        }
    }
    ctx->pc = 0x2E8CC4u;
    // 0x2e8cc4: 0x0  nop
    ctx->pc = 0x2e8cc4u;
    // NOP
    // 0x2e8cc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e8ccc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e8cd0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e8cd4: 0x2484056c  addiu       $a0, $a0, 0x56C
    ctx->pc = 0x2e8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1388));
    // 0x2e8cd8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E8CD8u;
    SET_GPR_U32(ctx, 31, 0x2E8CE0u);
    ctx->pc = 0x2E8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8CD8u;
    // 0x2e8cdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E8CD8u, 0x2E8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CE0u;
label_2e8ce0:
    // 0x2e8ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e8ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8cec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e8cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e8cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CF0u;
        // 0x2e8cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8CF8u;
}
